// Several rules copied from https://github.com/mitchellh/tree-sitter-proto/blob/main/grammar.js

const
    letter = /[a-zA-Z]/,
    decimal_digit = /[0-9]/
    octal_digit = /[0-7]/
    hex_digit = /[0-9A-Fa-f]/;


module.exports = {
    name: 'flatbuffers',

    extras: $ => [$.comment, /\s/],

    rules: {
        // schema = include* ( namespace_decl | type_decl | enum_decl | root_decl | file_extension_decl |
        //  file_identifier_decl | attribute_decl | rpc_decl | object )*
        source_file: $ => seq(
            $.include,
            optional(repeat(choice(
                $.namespace_decl,
                $.type_decl,
                $.enum_decl,
                $.root_decl,
                $.file_extension_decl,
                $.file_identifier_decl,
                $.attribute_decl,
                $.rpc_decl,
                $.object,
            ))),
        ),

        include: $ => seq('include', $.string_constant),

        namespace_decl: $ => seq('namespace', $.identifier),

        attribute_decl: $ => seq('attribute', choice($.identifier, seq(
            '"',
            $.identifier,
            '"'
        ))),

        type_decl: $ => seq(choice('table', 'struct'), $.identifier, $.metadata,
            // TODO
            ),


        // TODO add support for PRC.

        rpc_name: $ => $.identifier,

        metadata: $ => seq(
            '(',
            $.field_and_value,
            repeat(seq(',', $.field_and_value)),
            ')',
        ),

        field_and_value: $ => seq(
            $.identifier,
            ':',
            $.single_value,
        ),

        // single_value = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
        single_value: $ => choice(
            $.full_ident,
            seq(
                optional(choice('-', '+')),
                $.int_lit,
            ),
            seq(
                optional(choice('-', '+')),
                $.float_lit,
            ),
            $.string_constant,
            $.bool_constant,
        ),


        // ident = letter { letter | decimalDigit | "_" }
        identifier: $ => token(
            seq(letter,
                optional(repeat(choice(
                    letter,
                    decimal_digit,
                    '_',
                )))),
        ),

        // fullIdent = ident { "." ident }
        full_ident: $ => seq(
          $.identifier,
          optional(repeat(seq('.', $.identifier))),
        ),

        // boolLit = "true" | "false"
        bool_constant: $ => choice($.true, $.false),
        true: $ => 'true',
        false: $ => 'false',

        // intLit = decimalLit | octalLit | hexLit
        int_lit: $ => choice(
            $.decimal_lit,
            $.octal_lit,
            $.hex_lit,
        ),

        // decimalLit = ( "1" ... "9") { decimalDigit }
        decimal_lit: $ => token(seq(
            /[1-9]/,
            repeat(decimal_digit),
        )),

        // octalLit = "0" { octalDigit }
        octal_lit: $ => token(seq(
            '0',
            repeat(octal_digit),
        )),

        // hexLit = "0" ( "x" | "X" ) hexDigit { hexDigit }
        hex_lit: $ => token(seq(
            '0',
            choice('x', 'X'),
            hex_digit,
            repeat(hex_digit),
        )),

        // floatLit = ( decimals "." [ decimals ] [ exponent ] | decimals exponent | "."decimals [ exponent ] )
        //  | "inf" | "infinity" | "nan"
        // decimals  = decimalDigit { decimalDigit }
        // exponent  = ( "e" | "E" ) [ "+" | "-" ] decimals
        float_lit: $ => {
            const decimals = seq(
                decimal_digit,
                repeat(decimal_digit),
            );

            const exponent = seq(
                choice('e', 'E'),
                optional(choice('+', '-')),
                decimals,
            );

            return token(choice(
                seq(
                    decimals,
                    '.',
                    optional(decimals),
                    optional(exponent),
                ),
                seq(
                    decimals,
                    exponent,
                ),
                seq(
                    '.',
                    decimals,
                    optional(exponent),
                ),
                'inf',
                'nan',
            ));
        },



        string_constant: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^"\\]+/)),
                $.escape_sequence
            )),
        '"',
        ),


        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
                /[^xuU]/,
                /\d{2,3}/,
                /x[0-9a-fA-F]{2,}/,
                /u[0-9a-fA-F]{4}/,
                /U[0-9a-fA-F]{8}/
            )
        )),

    },

};
