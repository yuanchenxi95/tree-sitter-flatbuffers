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
              $.documentation,
              $.namespace_decl,
              $.type_decl,
              $.enum_decl,
              // Different from the spec since it is outdated.
              $.union_dcl,
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
    include: ($) => seq("include", $.string_constant, ";"),

    namespace_decl: ($) => seq("namespace", $.full_ident, ";"),

    attribute_decl: ($) =>
      seq("attribute", choice($.identifier, seq('"', $.identifier, '"')), ";"),

    type_decl: ($) =>
      seq(
        choice("table", "struct"),
        $.identifier,
        optional($.metadata),
        "{",
        repeat($.field_decl),
        "}",
      ),

    enum_decl: ($) =>
      seq(
        seq("enum", $.identifier, ":", $.type),
        optional($.metadata),
        "{",
        $.enumval_decl,
        repeat(seq(",", $.enumval_decl)),
        optional(","),
        "}",
      ),

    union_dcl: ($) =>
      seq(
        "union",
        $.identifier,
        optional($.metadata),
        "{",
        choice(
          seq(
            $.union_field_decl,
            repeat(seq(",", $.union_field_decl)),
            optional(","),
          ),
          seq($.full_ident, repeat(seq(",", $.full_ident)), optional(",")),
        ),
        "}",
      ),

    object: ($) => seq("{", comma_separate($.identifier, ":", $.value), "}"),

    root_decl: ($) => seq("root_type", $.identifier, ";"),

    file_extension_decl: ($) => seq("file_extension", $.string_constant, ";"),

    file_identifier_decl: ($) => seq("file_identifier", $.string_constant, ";"),

    single_value: ($) => choice($.scalar, $.string_constant),

    value: ($) =>
      choice($.single_value, $.object, seq("[", comma_separate($.value), "]")),

    enumval_decl: ($) => seq($.identifier, optional(seq("=", $.int_constant))),

    field_decl: ($) =>
      seq(
        $.identifier,
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

    union_field_decl: ($) => seq($.identifier, ":", $.type),

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
        seq("[", $.type, "]"),
      ),

    // TODO add support for PRC.
    rpc_decl: ($) =>
      seq("rpc_service", $.identifier, "{", repeat($.rpc_method), "}"),

    rpc_method: ($) =>
      seq(
        $.identifier,
        "(",
        $.identifier,
        ")",
        ":",
        $.identifier,
        optional($.metadata),
        ";",
      ),

    metadata: ($) => seq("(", comma_separate($.field_and_value), ")"),

    field_and_value: ($) =>
      seq($.identifier, optional(seq(":", $.single_value))),

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

    plus_minus_constant: $ => choice($.plus_token, $.minus_token),
    plus_token: $ => token("+"),
    minus_token: $=> token("-"),

    true: ($) => "true",
    false: ($) => "false",

    // intLit = decimalLit | octalLit | hexLit
    int_lit: ($) => choice($.decimal_lit, $.octal_lit, $.hex_lit),

    // decimalLit = ( "1" ... "9") { decimalDigit }
    decimal_lit: ($) => token(seq(/[1-9]/, repeat(decimal_digit))),

    // octalLit = "0" { octalDigit }
    octal_lit: ($) => token(seq("0", repeat(octal_digit))),

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
