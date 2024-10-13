// Several rules copied from https://github.com/mitchellh/tree-sitter-proto/blob/main/grammar.js

// FlatBuffers spec: https://flatbuffers.dev/flatbuffers_grammar.html
const letter = /[a-zA-Z]/,
  decimal_digit = /[0-9]/,
  octal_digit = /[0-7]/,
  hex_digit = /[0-9A-Fa-f]/;

function comma_separate(x) {
  return seq(x, repeat(seq(",", x)));
}

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
      seq("include", field("include_filename", $.string_constant), ";"),

    namespace_decl: ($) =>
      seq("namespace", field("namespace_ident", $.full_ident), ";"),

    attribute_decl: ($) =>
      seq(
        "attribute",
        choice(
          field("attribute_name", $.identifier),
          seq('"', field("attribute_name", $.identifier), '"'),
        ),
        ";",
      ),

    type_decl: ($) =>
      seq(
        repeat($.documentation),
        choice("table", "struct"),
        field("table_or_struct_name", $.identifier),
        optional($.metadata),
        "{",
        repeat($.field_decl),
        "}",
      ),

    enum_decl: ($) =>
      seq(
        repeat($.documentation),
        seq("enum", field("enum_name", $.identifier), ":", $.type),
        optional($.metadata),
        "{",
        $.enumval_decl,
        repeat(seq(",", $.enumval_decl)),
        optional(","),
        "}",
      ),

    union_decl: ($) =>
      seq(
        repeat($.documentation),
        "union",
        field("union_name", $.identifier),
        optional($.metadata),
        "{",
        choice(
          field(
            "field_with_type",
            seq(
              $.union_field_decl,
              repeat(seq(",", $.union_field_decl)),
              optional(","),
            ),
          ),
          field(
            "field_without_type",
            seq($.full_ident, repeat(seq(",", $.full_ident)), optional(",")),
          ),
        ),
        "}",
      ),

    object: ($) =>
      seq(
        "{",
        comma_separate(
          repeat($.documentation),
          field("object_key", $.identifier),
          ":",
          $.value,
        ),
        "}",
      ),

    root_decl: ($) =>
      seq("root_type", field("root_type_ident", $.identifier), ";"),

    file_extension_decl: ($) =>
      seq(
        "file_extension",
        field("file_extension_constant", $.string_constant),
        ";",
      ),

    file_identifier_decl: ($) =>
      seq(
        "file_identifier",
        field("file_identifier_constant", $.string_constant),
        ";",
      ),

    single_value: ($) => choice($.scalar, $.string_constant),

    value: ($) =>
      choice(
        $.single_value,
        $.object,
        field("array_value", seq("[", comma_separate($.value), "]")),
      ),

    enumval_decl: ($) =>
      seq(
        repeat($.documentation),
        field("enum_key", $.identifier),
        optional(seq("=", $.int_constant)),
      ),

    field_decl: ($) =>
      seq(
        repeat($.documentation),
        field("field_key", $.identifier),
        ":",
        $.type,
        optional(
          seq(
            "=",
            // To support default value with enum field. Different from spec(only scalar is supported) since it is outdated.
            $.value,
          ),
        ),
        optional($.metadata),
        ";",
      ),

    union_field_decl: ($) =>
      seq(
        repeat($.documentation),
        field("union_field_key", $.identifier),
        ":",
        $.type,
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
        $.full_ident,
        field("array_type", seq("[", $.type, "]")),
      ),

    rpc_decl: ($) =>
      seq(
        repeat($.documentation),
        "rpc_service",
        field("rpc_name", $.identifier),
        "{",
        repeat($.rpc_method),
        "}",
      ),

    rpc_method: ($) =>
      seq(
        repeat($.documentation),
        field("rpc_method_name", $.identifier),
        "(",
        field("rpc_parameter", $.identifier),
        ")",
        ":",
        field("rpc_return_type", $.identifier),
        optional($.metadata),
        ";",
      ),

    metadata: ($) => seq("(", comma_separate($.field_and_value), ")"),

    field_and_value: ($) =>
      seq(field("field_key", $.identifier), optional(seq(":", $.single_value))),

    // single_value = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
    single_value: ($) => choice($.scalar, $.string_constant, $.full_ident),

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
