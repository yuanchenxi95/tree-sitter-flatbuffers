#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_documentation = 1,
  anon_sym_include = 2,
  anon_sym_SEMI = 3,
  anon_sym_namespace = 4,
  anon_sym_attribute = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_table = 7,
  anon_sym_struct = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_enum = 11,
  anon_sym_COLON = 12,
  anon_sym_union = 13,
  anon_sym_COMMA = 14,
  anon_sym_root_type = 15,
  anon_sym_file_extension = 16,
  anon_sym_file_identifier = 17,
  anon_sym_EQ = 18,
  anon_sym_bool = 19,
  anon_sym_byte = 20,
  anon_sym_ubyte = 21,
  anon_sym_short = 22,
  anon_sym_ushort = 23,
  anon_sym_int = 24,
  anon_sym_uint = 25,
  anon_sym_float = 26,
  anon_sym_long = 27,
  anon_sym_ulong = 28,
  anon_sym_double = 29,
  anon_sym_int8 = 30,
  anon_sym_uint8 = 31,
  anon_sym_int16 = 32,
  anon_sym_uint16 = 33,
  anon_sym_int32 = 34,
  anon_sym_uint32 = 35,
  anon_sym_int64 = 36,
  anon_sym_uint64 = 37,
  anon_sym_float32 = 38,
  anon_sym_float64 = 39,
  anon_sym_string = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_rpc_service = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  sym_identifier = 46,
  anon_sym_DOT = 47,
  anon_sym_DASH = 48,
  anon_sym_PLUS = 49,
  sym_true = 50,
  sym_false = 51,
  sym_decimal_lit = 52,
  sym_octal_lit = 53,
  sym_hex_lit = 54,
  sym_float_lit = 55,
  aux_sym_string_constant_token1 = 56,
  sym_escape_sequence = 57,
  sym_comment = 58,
  sym_source_file = 59,
  sym_include = 60,
  sym_namespace_decl = 61,
  sym_attribute_decl = 62,
  sym_type_decl = 63,
  sym_enum_decl = 64,
  sym_object = 65,
  sym_root_decl = 66,
  sym_file_extension_decl = 67,
  sym_file_identifier_decl = 68,
  sym_single_value = 69,
  sym_enumval_decl = 70,
  sym_field_decl = 71,
  sym_type = 72,
  sym_rpc_decl = 73,
  sym_rpc_method = 74,
  sym_metadata = 75,
  sym_field_and_value = 76,
  sym_full_ident = 77,
  sym_scalar = 78,
  sym_bool_constant = 79,
  sym_int_constant = 80,
  sym_float_constant = 81,
  sym_int_lit = 82,
  sym_string_constant = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_type_decl_repeat1 = 85,
  aux_sym_enum_decl_repeat1 = 86,
  aux_sym_object_repeat1 = 87,
  aux_sym_rpc_decl_repeat1 = 88,
  aux_sym_metadata_repeat1 = 89,
  aux_sym_full_ident_repeat1 = 90,
  aux_sym_string_constant_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_documentation] = "documentation",
  [anon_sym_include] = "include",
  [anon_sym_SEMI] = ";",
  [anon_sym_namespace] = "namespace",
  [anon_sym_attribute] = "attribute",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_table] = "table",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum] = "enum",
  [anon_sym_COLON] = ":",
  [anon_sym_union] = "union",
  [anon_sym_COMMA] = ",",
  [anon_sym_root_type] = "root_type",
  [anon_sym_file_extension] = "file_extension",
  [anon_sym_file_identifier] = "file_identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_bool] = "bool",
  [anon_sym_byte] = "byte",
  [anon_sym_ubyte] = "ubyte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_float] = "float",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_double] = "double",
  [anon_sym_int8] = "int8",
  [anon_sym_uint8] = "uint8",
  [anon_sym_int16] = "int16",
  [anon_sym_uint16] = "uint16",
  [anon_sym_int32] = "int32",
  [anon_sym_uint32] = "uint32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_string] = "string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_rpc_service] = "rpc_service",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_include] = "include",
  [sym_namespace_decl] = "namespace_decl",
  [sym_attribute_decl] = "attribute_decl",
  [sym_type_decl] = "type_decl",
  [sym_enum_decl] = "enum_decl",
  [sym_object] = "object",
  [sym_root_decl] = "root_decl",
  [sym_file_extension_decl] = "file_extension_decl",
  [sym_file_identifier_decl] = "file_identifier_decl",
  [sym_single_value] = "single_value",
  [sym_enumval_decl] = "enumval_decl",
  [sym_field_decl] = "field_decl",
  [sym_type] = "type",
  [sym_rpc_decl] = "rpc_decl",
  [sym_rpc_method] = "rpc_method",
  [sym_metadata] = "metadata",
  [sym_field_and_value] = "field_and_value",
  [sym_full_ident] = "full_ident",
  [sym_scalar] = "scalar",
  [sym_bool_constant] = "bool_constant",
  [sym_int_constant] = "int_constant",
  [sym_float_constant] = "float_constant",
  [sym_int_lit] = "int_lit",
  [sym_string_constant] = "string_constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_decl_repeat1] = "type_decl_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_rpc_decl_repeat1] = "rpc_decl_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_full_ident_repeat1] = "full_ident_repeat1",
  [aux_sym_string_constant_repeat1] = "string_constant_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_documentation] = sym_documentation,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_root_type] = anon_sym_root_type,
  [anon_sym_file_extension] = anon_sym_file_extension,
  [anon_sym_file_identifier] = anon_sym_file_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_ubyte] = anon_sym_ubyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_rpc_service] = anon_sym_rpc_service,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_include] = sym_include,
  [sym_namespace_decl] = sym_namespace_decl,
  [sym_attribute_decl] = sym_attribute_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_enum_decl] = sym_enum_decl,
  [sym_object] = sym_object,
  [sym_root_decl] = sym_root_decl,
  [sym_file_extension_decl] = sym_file_extension_decl,
  [sym_file_identifier_decl] = sym_file_identifier_decl,
  [sym_single_value] = sym_single_value,
  [sym_enumval_decl] = sym_enumval_decl,
  [sym_field_decl] = sym_field_decl,
  [sym_type] = sym_type,
  [sym_rpc_decl] = sym_rpc_decl,
  [sym_rpc_method] = sym_rpc_method,
  [sym_metadata] = sym_metadata,
  [sym_field_and_value] = sym_field_and_value,
  [sym_full_ident] = sym_full_ident,
  [sym_scalar] = sym_scalar,
  [sym_bool_constant] = sym_bool_constant,
  [sym_int_constant] = sym_int_constant,
  [sym_float_constant] = sym_float_constant,
  [sym_int_lit] = sym_int_lit,
  [sym_string_constant] = sym_string_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_decl_repeat1] = aux_sym_type_decl_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_rpc_decl_repeat1] = aux_sym_rpc_decl_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_full_ident_repeat1] = aux_sym_full_ident_repeat1,
  [aux_sym_string_constant_repeat1] = aux_sym_string_constant_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_identifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_root_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_file_extension_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_file_identifier_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_single_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enumval_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_field_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_method] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_field_and_value] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_int_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_float_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_constant_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      ADVANCE_MAP(
        '"', 160,
        '(', 220,
        ')', 221,
        '+', 285,
        ',', 168,
        '-', 284,
        '.', 283,
        '/', 5,
        '0', 291,
        ':', 166,
        ';', 157,
        '=', 172,
        '[', 217,
        '\\', 18,
        ']', 218,
        'a', 123,
        'b', 94,
        'd', 92,
        'e', 86,
        'f', 23,
        'i', 80,
        'l', 95,
        'n', 24,
        'r', 99,
        's', 63,
        't', 25,
        'u', 29,
        '{', 163,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(152);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 160,
        '+', 285,
        '-', 284,
        '.', 141,
        '/', 6,
        '0', 291,
        'f', 230,
        'i', 253,
        'n', 232,
        't', 267,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 220,
        ')', 221,
        ',', 168,
        '.', 282,
        '/', 6,
        ';', 157,
        '=', 172,
        '[', 217,
        ']', 218,
        'b', 263,
        'd', 258,
        'f', 250,
        'i', 254,
        'l', 261,
        's', 244,
        'u', 233,
        '{', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(307);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(308);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(203);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(199);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(201);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 140:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      ADVANCE_MAP(
        '"', 160,
        '(', 220,
        ')', 221,
        '+', 285,
        ',', 168,
        '-', 284,
        '.', 283,
        '/', 5,
        '0', 291,
        ':', 166,
        ';', 157,
        '=', 172,
        '[', 217,
        ']', 218,
        'a', 123,
        'b', 94,
        'd', 92,
        'e', 86,
        'f', 23,
        'i', 80,
        'l', 95,
        'n', 24,
        'r', 99,
        's', 63,
        't', 25,
        'u', 29,
        '{', 163,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(152);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      ADVANCE_MAP(
        '"', 160,
        '(', 220,
        ')', 221,
        '+', 285,
        ',', 168,
        '-', 284,
        '.', 141,
        '/', 6,
        '0', 291,
        ':', 166,
        ';', 157,
        '=', 172,
        ']', 218,
        'f', 22,
        'i', 85,
        'n', 28,
        't', 110,
        '{', 163,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(153);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_documentation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '6') ADVANCE(225);
      if (lookahead == '8') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(229);
      if (lookahead == '3') ADVANCE(223);
      if (lookahead == '6') ADVANCE(226);
      if (lookahead == '8') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(224);
      if (lookahead == '6') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(262);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(144);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(308);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 153},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 153},
  [35] = {.lex_state = 153},
  [36] = {.lex_state = 153},
  [37] = {.lex_state = 153},
  [38] = {.lex_state = 153},
  [39] = {.lex_state = 153},
  [40] = {.lex_state = 153},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 153},
  [49] = {.lex_state = 153},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 153},
  [52] = {.lex_state = 153},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 153},
  [55] = {.lex_state = 153},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 153},
  [61] = {.lex_state = 153},
  [62] = {.lex_state = 153},
  [63] = {.lex_state = 153},
  [64] = {.lex_state = 153},
  [65] = {.lex_state = 153},
  [66] = {.lex_state = 153},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 153},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 153},
  [71] = {.lex_state = 153},
  [72] = {.lex_state = 153},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 153},
  [75] = {.lex_state = 153},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 153},
  [78] = {.lex_state = 153},
  [79] = {.lex_state = 153},
  [80] = {.lex_state = 153},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 153},
  [83] = {.lex_state = 153},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 153},
  [86] = {.lex_state = 153},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 153},
  [91] = {.lex_state = 153},
  [92] = {.lex_state = 153},
  [93] = {.lex_state = 153},
  [94] = {.lex_state = 153},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 153},
  [97] = {.lex_state = 153},
  [98] = {.lex_state = 153},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 153},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 153},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 153},
  [114] = {.lex_state = 153},
  [115] = {.lex_state = 153},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 153},
  [119] = {.lex_state = 153},
  [120] = {.lex_state = 153},
  [121] = {.lex_state = 153},
  [122] = {.lex_state = 153},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 153},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 153},
  [128] = {.lex_state = 153},
  [129] = {.lex_state = 153},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 153},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 153},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 153},
  [139] = {.lex_state = 153},
  [140] = {.lex_state = 153},
  [141] = {.lex_state = 153},
  [142] = {.lex_state = 153},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 153},
  [145] = {.lex_state = 153},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_documentation] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_root_type] = ACTIONS(1),
    [anon_sym_file_extension] = ACTIONS(1),
    [anon_sym_file_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_ubyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_rpc_service] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym_include] = STATE(5),
    [anon_sym_include] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(35), 1,
      sym_full_ident,
    STATE(72), 1,
      sym_type,
    ACTIONS(9), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [40] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(35), 1,
      sym_full_ident,
    STATE(138), 1,
      sym_type,
    ACTIONS(9), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [80] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(35), 1,
      sym_full_ident,
    STATE(48), 1,
      sym_type,
    ACTIONS(9), 22,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_float,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_double,
      anon_sym_int8,
      anon_sym_uint8,
      anon_sym_int16,
      anon_sym_uint16,
      anon_sym_int32,
      anon_sym_uint32,
      anon_sym_int64,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_string,
  [120] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_documentation,
    ACTIONS(19), 1,
      anon_sym_namespace,
    ACTIONS(21), 1,
      anon_sym_attribute,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_union,
    ACTIONS(31), 1,
      anon_sym_root_type,
    ACTIONS(33), 1,
      anon_sym_file_extension,
    ACTIONS(35), 1,
      anon_sym_file_identifier,
    ACTIONS(37), 1,
      anon_sym_rpc_service,
    ACTIONS(23), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(6), 10,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [173] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_namespace,
    ACTIONS(21), 1,
      anon_sym_attribute,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_union,
    ACTIONS(31), 1,
      anon_sym_root_type,
    ACTIONS(33), 1,
      anon_sym_file_extension,
    ACTIONS(35), 1,
      anon_sym_file_identifier,
    ACTIONS(37), 1,
      anon_sym_rpc_service,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_documentation,
    ACTIONS(23), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(7), 10,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [226] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_documentation,
    ACTIONS(48), 1,
      anon_sym_namespace,
    ACTIONS(51), 1,
      anon_sym_attribute,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_enum,
    ACTIONS(63), 1,
      anon_sym_union,
    ACTIONS(66), 1,
      anon_sym_root_type,
    ACTIONS(69), 1,
      anon_sym_file_extension,
    ACTIONS(72), 1,
      anon_sym_file_identifier,
    ACTIONS(75), 1,
      anon_sym_rpc_service,
    ACTIONS(54), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(7), 10,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [279] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_hex_lit,
    ACTIONS(88), 1,
      sym_float_lit,
    STATE(39), 1,
      sym_int_lit,
    STATE(89), 1,
      sym_single_value,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(82), 2,
      sym_true,
      sym_false,
    ACTIONS(84), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(52), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
    STATE(90), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [551] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_hex_lit,
    ACTIONS(116), 1,
      sym_float_lit,
    STATE(39), 1,
      sym_int_lit,
    STATE(79), 1,
      sym_scalar,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(84), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(114), 2,
      sym_true,
      sym_false,
    STATE(52), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_namespace,
      anon_sym_attribute,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_root_type,
      anon_sym_file_extension,
      anon_sym_file_identifier,
      anon_sym_rpc_service,
  [736] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(134), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [755] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(139), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [774] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(143), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [793] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(134), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [807] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_octal_lit,
    STATE(39), 1,
      sym_int_lit,
    STATE(97), 1,
      sym_int_constant,
    ACTIONS(86), 2,
      sym_decimal_lit,
      sym_hex_lit,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [828] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [839] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_hex_lit,
    ACTIONS(149), 1,
      sym_float_lit,
    STATE(40), 1,
      sym_int_lit,
    ACTIONS(84), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [856] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(151), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(153), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [878] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [889] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [900] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(47), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [914] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [928] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(43), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      aux_sym_string_constant_token1,
    ACTIONS(174), 1,
      sym_escape_sequence,
    STATE(56), 1,
      aux_sym_string_constant_repeat1,
  [958] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(43), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [972] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [986] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(47), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1000] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_metadata,
  [1016] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1026] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1040] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1050] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1060] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1074] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_octal_lit,
    STATE(40), 1,
      sym_int_lit,
    ACTIONS(86), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [1088] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_string_constant_token1,
    ACTIONS(207), 1,
      sym_escape_sequence,
    STATE(57), 1,
      aux_sym_string_constant_repeat1,
  [1114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_string_constant_token1,
    ACTIONS(214), 1,
      sym_escape_sequence,
    STATE(57), 1,
      aux_sym_string_constant_repeat1,
  [1130] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_metadata_repeat1,
  [1143] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(98), 1,
      sym_enumval_decl,
  [1156] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_enum_decl_repeat1,
  [1169] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_enum_decl_repeat1,
  [1182] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1193] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_metadata_repeat1,
  [1206] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1219] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_object_repeat1,
  [1232] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_enum_decl_repeat1,
  [1245] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1254] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1267] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_enumval_decl,
  [1280] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_enum_decl_repeat1,
  [1293] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_enum_decl_repeat1,
  [1306] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_metadata,
  [1319] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_metadata,
  [1332] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(262), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1343] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_enum_decl_repeat1,
  [1356] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_enumval_decl,
  [1369] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_enum_decl_repeat1,
  [1382] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_enum_decl_repeat1,
  [1395] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_metadata,
  [1408] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_metadata,
  [1421] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_enumval_decl,
  [1434] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_enum_decl_repeat1,
  [1447] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_metadata_repeat1,
  [1460] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_enumval_decl,
  [1473] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      sym_metadata,
  [1486] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1495] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(92), 1,
      sym_field_and_value,
  [1505] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1513] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1521] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1529] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1537] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1545] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1553] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_string_constant,
  [1563] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(78), 1,
      sym_enumval_decl,
  [1573] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_string_constant,
  [1583] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1591] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1599] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(61), 1,
      sym_enumval_decl,
  [1609] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string_constant,
  [1619] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1627] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(83), 1,
      sym_field_and_value,
  [1637] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
    STATE(142), 1,
      sym_full_ident,
  [1647] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(98), 1,
      sym_enumval_decl,
  [1657] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      sym_identifier,
  [1667] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1675] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1683] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(75), 1,
      sym_enumval_decl,
  [1693] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1701] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(66), 1,
      sym_enumval_decl,
  [1711] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1719] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1727] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1734] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [1741] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [1748] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_identifier,
  [1755] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [1762] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1769] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
  [1776] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
  [1783] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1790] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1797] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_identifier,
  [1804] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
  [1811] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [1818] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_identifier,
  [1825] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [1832] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [1839] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [1846] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_identifier,
  [1853] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_identifier,
  [1860] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
  [1867] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [1874] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
  [1881] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
  [1888] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COLON,
  [1895] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
  [1902] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
  [1909] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
  [1916] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
  [1923] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [1930] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [1937] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [1944] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [1951] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 361,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 456,
  [SMALL_STATE(17)] = 475,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 513,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 603,
  [SMALL_STATE(24)] = 622,
  [SMALL_STATE(25)] = 641,
  [SMALL_STATE(26)] = 660,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 698,
  [SMALL_STATE(29)] = 717,
  [SMALL_STATE(30)] = 736,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 774,
  [SMALL_STATE(33)] = 793,
  [SMALL_STATE(34)] = 807,
  [SMALL_STATE(35)] = 828,
  [SMALL_STATE(36)] = 839,
  [SMALL_STATE(37)] = 856,
  [SMALL_STATE(38)] = 867,
  [SMALL_STATE(39)] = 878,
  [SMALL_STATE(40)] = 889,
  [SMALL_STATE(41)] = 900,
  [SMALL_STATE(42)] = 914,
  [SMALL_STATE(43)] = 928,
  [SMALL_STATE(44)] = 942,
  [SMALL_STATE(45)] = 958,
  [SMALL_STATE(46)] = 972,
  [SMALL_STATE(47)] = 986,
  [SMALL_STATE(48)] = 1000,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1026,
  [SMALL_STATE(51)] = 1040,
  [SMALL_STATE(52)] = 1050,
  [SMALL_STATE(53)] = 1060,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1088,
  [SMALL_STATE(56)] = 1098,
  [SMALL_STATE(57)] = 1114,
  [SMALL_STATE(58)] = 1130,
  [SMALL_STATE(59)] = 1143,
  [SMALL_STATE(60)] = 1156,
  [SMALL_STATE(61)] = 1169,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1193,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1219,
  [SMALL_STATE(66)] = 1232,
  [SMALL_STATE(67)] = 1245,
  [SMALL_STATE(68)] = 1254,
  [SMALL_STATE(69)] = 1267,
  [SMALL_STATE(70)] = 1280,
  [SMALL_STATE(71)] = 1293,
  [SMALL_STATE(72)] = 1306,
  [SMALL_STATE(73)] = 1319,
  [SMALL_STATE(74)] = 1332,
  [SMALL_STATE(75)] = 1343,
  [SMALL_STATE(76)] = 1356,
  [SMALL_STATE(77)] = 1369,
  [SMALL_STATE(78)] = 1382,
  [SMALL_STATE(79)] = 1395,
  [SMALL_STATE(80)] = 1408,
  [SMALL_STATE(81)] = 1421,
  [SMALL_STATE(82)] = 1434,
  [SMALL_STATE(83)] = 1447,
  [SMALL_STATE(84)] = 1460,
  [SMALL_STATE(85)] = 1473,
  [SMALL_STATE(86)] = 1486,
  [SMALL_STATE(87)] = 1495,
  [SMALL_STATE(88)] = 1505,
  [SMALL_STATE(89)] = 1513,
  [SMALL_STATE(90)] = 1521,
  [SMALL_STATE(91)] = 1529,
  [SMALL_STATE(92)] = 1537,
  [SMALL_STATE(93)] = 1545,
  [SMALL_STATE(94)] = 1553,
  [SMALL_STATE(95)] = 1563,
  [SMALL_STATE(96)] = 1573,
  [SMALL_STATE(97)] = 1583,
  [SMALL_STATE(98)] = 1591,
  [SMALL_STATE(99)] = 1599,
  [SMALL_STATE(100)] = 1609,
  [SMALL_STATE(101)] = 1619,
  [SMALL_STATE(102)] = 1627,
  [SMALL_STATE(103)] = 1637,
  [SMALL_STATE(104)] = 1647,
  [SMALL_STATE(105)] = 1657,
  [SMALL_STATE(106)] = 1667,
  [SMALL_STATE(107)] = 1675,
  [SMALL_STATE(108)] = 1683,
  [SMALL_STATE(109)] = 1693,
  [SMALL_STATE(110)] = 1701,
  [SMALL_STATE(111)] = 1711,
  [SMALL_STATE(112)] = 1719,
  [SMALL_STATE(113)] = 1727,
  [SMALL_STATE(114)] = 1734,
  [SMALL_STATE(115)] = 1741,
  [SMALL_STATE(116)] = 1748,
  [SMALL_STATE(117)] = 1755,
  [SMALL_STATE(118)] = 1762,
  [SMALL_STATE(119)] = 1769,
  [SMALL_STATE(120)] = 1776,
  [SMALL_STATE(121)] = 1783,
  [SMALL_STATE(122)] = 1790,
  [SMALL_STATE(123)] = 1797,
  [SMALL_STATE(124)] = 1804,
  [SMALL_STATE(125)] = 1811,
  [SMALL_STATE(126)] = 1818,
  [SMALL_STATE(127)] = 1825,
  [SMALL_STATE(128)] = 1832,
  [SMALL_STATE(129)] = 1839,
  [SMALL_STATE(130)] = 1846,
  [SMALL_STATE(131)] = 1853,
  [SMALL_STATE(132)] = 1860,
  [SMALL_STATE(133)] = 1867,
  [SMALL_STATE(134)] = 1874,
  [SMALL_STATE(135)] = 1881,
  [SMALL_STATE(136)] = 1888,
  [SMALL_STATE(137)] = 1895,
  [SMALL_STATE(138)] = 1902,
  [SMALL_STATE(139)] = 1909,
  [SMALL_STATE(140)] = 1916,
  [SMALL_STATE(141)] = 1923,
  [SMALL_STATE(142)] = 1930,
  [SMALL_STATE(143)] = 1937,
  [SMALL_STATE(144)] = 1944,
  [SMALL_STATE(145)] = 1951,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension_decl, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier_decl, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_decl, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_decl, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_constant, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 1, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_flatbuffers(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
