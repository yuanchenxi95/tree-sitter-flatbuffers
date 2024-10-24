// Several rules copied from https://github.com/mitchellh/tree-sitter-proto/blob/main/grammar.js

// FlatBuffers spec: https://flatbuffers.dev/flatbuffers_grammar.html
const letter = /[a-zA-Z]/,
  decimal_digit = /[0-9]/,
  octal_digit = /[0-7]/,
  hex_digit = /[0-9A-Fa-f]/;

function comma_separate(x) {
  return seq(x, repeat(seq(",", x)));
}

const FIELD_KEY = {
  array_type: "array_type",
  array_type_fixed_length: "array_type_fixed_length",
  array_value: "array_value",
  array_value_item: "array_value_item",
  attribute_name: "attribute_name",
  documentation: "documentation",
  enum_int_constant: "enum_int_constant",
  enum_key: "enum_key",
  enum_name: "enum_name",
  enum_type: "enum_type",
  enum_val_decl: "enum_val_decl",
  field_and_value: "field_and_value",
  field_declaration: "field_declaration",
  field_key: "field_key",
  field_type: "field_type",
  field_value: "field_value",
  field_with_type: "field_with_type",
  field_without_type: "field_without_type",
  file_extension_constant: "file_extension_constant",
  file_identifier_constant: "file_identifier_constant",
  full_ident: "full_ident",
  include_name: "include_name",
  metadata: "metadata",
  namespace_ident: "namespace_ident",
  object_key: "object_key",
  object_value: "object_value",
  root_type_ident: "root_type_ident",
  rpc_method: "rpc_method",
  rpc_method_name: "rpc_method_name",
  rpc_name: "rpc_name",
  rpc_parameter: "rpc_parameter",
  rpc_return_type: "rpc_return_type",
  scalar_value: "scalar_value",
  single_value: "single_value",
  string_constant: "string_constant",
  table_or_struct_declaration: "table_or_struct_declaration",
  table_or_struct_name: "table_or_struct_name",
  union_field_decl: "union_field_decl",
  union_field_key: "union_field_key",
  union_field_value: "union_field_value",
  union_name: "union_name",
};

module.exports = grammar({
  name: "flatbuffers",

  extras: ($) => [$.comment, /\s/],

  rules: {
    // schema = include* ( namespace_decl | type_decl | enum_decl | root_decl | file_extension_decl |
    //  file_identifier_decl | attribute_decl | rpc_decl | object )*
    source_file: ($) =>
      seq(
        repeat($.include),
        optional(
          repeat(
            choice(
              $.namespace_decl,
              $.type_decl,
              $.enum_decl,
              // Different from the spec since it is outdated.
              $.union_decl,
              $.root_decl,
              $.file_extension_decl,
              $.file_identifier_decl,
              $.attribute_decl,
              $.rpc_decl,
              $.object,
            ),
          ),
        ),
      ),

    documentation: ($) => token(seq("///", /.*/)),
    include: ($) =>
      seq("include", field(FIELD_KEY.include_name, $.string_constant), ";"),

    namespace_decl: ($) =>
      seq("namespace", field(FIELD_KEY.namespace_ident, $.full_ident), ";"),

    attribute_decl: ($) =>
      seq(
        "attribute",
        choice(
          field(FIELD_KEY.attribute_name, $.identifier),
          seq('"', field(FIELD_KEY.attribute_name, $.identifier), '"'),
        ),
        ";",
      ),

    type_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        field(FIELD_KEY.table_or_struct_declaration, choice("table", "struct")),
        field(FIELD_KEY.table_or_struct_name, $.identifier),
        optional(field(FIELD_KEY.metadata, $.metadata)),
        "{",
        repeat(field(FIELD_KEY.field_declaration, $.field_decl)),
        "}",
      ),

    enum_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        seq(
          "enum",
          field(FIELD_KEY.enum_name, $.identifier),
          ":",
          field(FIELD_KEY.enum_type, $.type),
        ),
        optional(field(FIELD_KEY.metadata, $.metadata)),
        "{",
        comma_separate(field(FIELD_KEY.enum_val_decl, $.enum_val_decl)),
        optional(","),
        "}",
      ),

    union_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        "union",
        field(FIELD_KEY.union_name, $.identifier),
        optional(field(FIELD_KEY.metadata, $.metadata)),
        "{",
        choice(
          seq(
            field(FIELD_KEY.union_field_decl, $.union_field_decl),
            repeat(
              seq(",", field(FIELD_KEY.union_field_decl, $.union_field_decl)),
            ),
            optional(","),
          ),
          field(
            FIELD_KEY.field_without_type,
            seq($.full_ident, repeat(seq(",", $.full_ident)), optional(",")),
          ),
        ),
        "}",
      ),

    object: ($) =>
      seq(
        "{",
        comma_separate(
          repeat(field(FIELD_KEY.documentation, $.documentation)),
          field(FIELD_KEY.object_key, $.identifier),
          ":",
          field(FIELD_KEY.object_value, $.value),
        ),
        "}",
      ),

    root_decl: ($) =>
      seq("root_type", field(FIELD_KEY.root_type_ident, $.identifier), ";"),

    file_extension_decl: ($) =>
      seq(
        "file_extension",
        field(FIELD_KEY.file_extension_constant, $.string_constant),
        ";",
      ),

    file_identifier_decl: ($) =>
      seq(
        "file_identifier",
        field(FIELD_KEY.file_identifier_constant, $.string_constant),
        ";",
      ),

    value: ($) =>
      choice(
        field(FIELD_KEY.single_value, $.single_value),
        field(FIELD_KEY.object_value, $.object),
        field(
          FIELD_KEY.array_value,
          seq(
            "[",
            comma_separate(field(FIELD_KEY.array_value_item, $.value)),
            "]",
          ),
        ),
      ),

    enum_val_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        field(FIELD_KEY.enum_key, $.identifier),
        optional(seq("=", field(FIELD_KEY.enum_int_constant, $.int_constant))),
        optional(field(FIELD_KEY.metadata, $.metadata)),
      ),

    field_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        field(FIELD_KEY.field_key, $.identifier),
        ":",
        field(FIELD_KEY.field_type, $.type),
        optional(
          seq(
            "=",
            // To support default value with enum field. Different from spec(only scalar is supported) since it is outdated.
            field(FIELD_KEY.field_value, $.value),
          ),
        ),
        optional(field(FIELD_KEY.metadata, $.metadata)),
        ";",
      ),

    union_field_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        field(FIELD_KEY.union_field_key, $.identifier),
        ":",
        field(FIELD_KEY.union_field_value, $.type),
      ),

    type: ($) =>
      choice(
        "bool",
        "byte",
        "ubyte",
        "short",
        "ushort",
        "int",
        "uint",
        "float",
        "long",
        "ulong",
        "double",
        "int8",
        "uint8",
        "int16",
        "uint16",
        "int32",
        "uint32",
        "int64",
        "uint64",
        "float32",
        "float64",
        "string",
        field(FIELD_KEY.full_ident, $.full_ident),
        seq(
          "[",
          field(FIELD_KEY.array_type, $.type),
          optional(
            seq(":", field(FIELD_KEY.array_type_fixed_length, $.int_lit)),
          ),
          "]",
        ),
      ),

    rpc_decl: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        "rpc_service",
        field(FIELD_KEY.rpc_name, $.identifier),
        "{",
        field(FIELD_KEY.rpc_method, repeat($.rpc_method)),
        "}",
      ),

    rpc_method: ($) =>
      seq(
        repeat(field(FIELD_KEY.documentation, $.documentation)),
        field(FIELD_KEY.rpc_method_name, $.identifier),
        "(",
        field(FIELD_KEY.rpc_parameter, $.identifier),
        ")",
        ":",
        field(FIELD_KEY.rpc_return_type, $.identifier),
        optional(field(FIELD_KEY.metadata, $.metadata)),
        ";",
      ),

    metadata: ($) =>
      seq(
        "(",
        comma_separate(field(FIELD_KEY.field_and_value, $.field_and_value)),
        ")",
      ),

    field_and_value: ($) =>
      seq(
        field(FIELD_KEY.field_key, $.identifier),
        optional(seq(":", field(FIELD_KEY.field_value, $.single_value))),
      ),

    // single_value = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
    single_value: ($) =>
      choice(
        field(FIELD_KEY.scalar_value, $.scalar),
        field(FIELD_KEY.string_constant, $.string_constant),
        field(FIELD_KEY.full_ident, $.full_ident),
      ),

    // ident = letter { letter | decimalDigit | "_" }
    identifier: ($) =>
      token(seq(letter, optional(repeat(choice(letter, decimal_digit, "_"))))),

    // fullIdent = ident { "." ident }
    full_ident: ($) =>
      seq($.identifier, optional(repeat(seq(".", $.identifier)))),

    scalar: ($) => choice($.float_constant, $.int_constant, $.bool_constant),

    // boolLit = "true" | "false"
    bool_constant: ($) => choice($.true, $.false),
    int_constant: ($) => seq(optional($.plus_minus_constant), $.int_lit),
    float_constant: ($) => seq(optional($.plus_minus_constant), $.float_lit),

    plus_minus_constant: ($) => choice($.plus_token, $.minus_token),
    plus_token: ($) => token("+"),
    minus_token: ($) => token("-"),

    true: ($) => "true",
    false: ($) => "false",

    // intLit = decimalLit | hexLit
    int_lit: ($) => choice($.decimal_lit, $.hex_lit),

    // decimalLit = ( "1" ... "9") { decimalDigit }
    decimal_lit: ($) =>
      choice(token(seq(/[1-9]/, repeat(decimal_digit))), token("0")),

    // hexLit = "0" ( "x" | "X" ) hexDigit { hexDigit }
    hex_lit: ($) =>
      token(seq("0", choice("x", "X"), hex_digit, repeat(hex_digit))),

    // floatLit = ( decimals "." [ decimals ] [ exponent ] | decimals exponent | "."decimals [ exponent ] )
    //  | "inf" | "infinity" | "nan"
    // decimals  = decimalDigit { decimalDigit }
    // exponent  = ( "e" | "E" ) [ "+" | "-" ] decimals
    float_lit: ($) => {
      const decimals = seq(decimal_digit, repeat(decimal_digit));

      const exponent = seq(
        choice("e", "E"),
        optional(choice("+", "-")),
        decimals,
      );

      return choice(
        choice($.inf_token, $.nan_token),
        token(
          choice(
            seq(decimals, ".", optional(decimals), optional(exponent)),
            seq(decimals, exponent),
            seq(".", decimals, optional(exponent)),
          ),
        ),
      );
    },

    inf_token: ($) => choice(token("infinity"), token("inf")),

    nan_token: ($) => token("nan"),

    string_constant: ($) =>
      seq(
        '"',
        repeat(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),
        '"',
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),

    comment: ($) =>
      token(
        choice(
          prec(1, seq("//", /.*/)),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});
