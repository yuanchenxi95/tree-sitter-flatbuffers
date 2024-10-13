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
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 49

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
  anon_sym_COMMA = 13,
  anon_sym_union = 14,
  anon_sym_root_type = 15,
  anon_sym_file_extension = 16,
  anon_sym_file_identifier = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_bool = 21,
  anon_sym_byte = 22,
  anon_sym_ubyte = 23,
  anon_sym_short = 24,
  anon_sym_ushort = 25,
  anon_sym_int = 26,
  anon_sym_uint = 27,
  anon_sym_float = 28,
  anon_sym_long = 29,
  anon_sym_ulong = 30,
  anon_sym_double = 31,
  anon_sym_int8 = 32,
  anon_sym_uint8 = 33,
  anon_sym_int16 = 34,
  anon_sym_uint16 = 35,
  anon_sym_int32 = 36,
  anon_sym_uint32 = 37,
  anon_sym_int64 = 38,
  anon_sym_uint64 = 39,
  anon_sym_float32 = 40,
  anon_sym_float64 = 41,
  anon_sym_string = 42,
  anon_sym_rpc_service = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  sym_identifier = 46,
  anon_sym_DOT = 47,
  sym_plus_token = 48,
  sym_minus_token = 49,
  sym_true = 50,
  sym_false = 51,
  aux_sym_decimal_lit_token1 = 52,
  anon_sym_0 = 53,
  sym_hex_lit = 54,
  aux_sym_float_lit_token1 = 55,
  anon_sym_infinity = 56,
  anon_sym_inf = 57,
  sym_nan_token = 58,
  aux_sym_string_constant_token1 = 59,
  sym_escape_sequence = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym_include = 63,
  sym_namespace_decl = 64,
  sym_attribute_decl = 65,
  sym_type_decl = 66,
  sym_enum_decl = 67,
  sym_union_decl = 68,
  sym_object = 69,
  sym_root_decl = 70,
  sym_file_extension_decl = 71,
  sym_file_identifier_decl = 72,
  sym_single_value = 73,
  sym_value = 74,
  sym_enumval_decl = 75,
  sym_field_decl = 76,
  sym_union_field_decl = 77,
  sym_type = 78,
  sym_rpc_decl = 79,
  sym_rpc_method = 80,
  sym_metadata = 81,
  sym_field_and_value = 82,
  sym_full_ident = 83,
  sym_scalar = 84,
  sym_bool_constant = 85,
  sym_int_constant = 86,
  sym_float_constant = 87,
  sym_plus_minus_constant = 88,
  sym_int_lit = 89,
  sym_decimal_lit = 90,
  sym_float_lit = 91,
  sym_inf_token = 92,
  sym_string_constant = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_source_file_repeat2 = 95,
  aux_sym_type_decl_repeat1 = 96,
  aux_sym_type_decl_repeat2 = 97,
  aux_sym_enum_decl_repeat1 = 98,
  aux_sym_union_decl_repeat1 = 99,
  aux_sym_union_decl_repeat2 = 100,
  aux_sym_object_repeat1 = 101,
  aux_sym_value_repeat1 = 102,
  aux_sym_rpc_decl_repeat1 = 103,
  aux_sym_metadata_repeat1 = 104,
  aux_sym_full_ident_repeat1 = 105,
  aux_sym_string_constant_repeat1 = 106,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_union] = "union",
  [anon_sym_root_type] = "root_type",
  [anon_sym_file_extension] = "file_extension",
  [anon_sym_file_identifier] = "file_identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_rpc_service] = "rpc_service",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_plus_token] = "plus_token",
  [sym_minus_token] = "minus_token",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_decimal_lit_token1] = "decimal_lit_token1",
  [anon_sym_0] = "0",
  [sym_hex_lit] = "hex_lit",
  [aux_sym_float_lit_token1] = "float_lit_token1",
  [anon_sym_infinity] = "infinity",
  [anon_sym_inf] = "inf",
  [sym_nan_token] = "nan_token",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_include] = "include",
  [sym_namespace_decl] = "namespace_decl",
  [sym_attribute_decl] = "attribute_decl",
  [sym_type_decl] = "type_decl",
  [sym_enum_decl] = "enum_decl",
  [sym_union_decl] = "union_decl",
  [sym_object] = "object",
  [sym_root_decl] = "root_decl",
  [sym_file_extension_decl] = "file_extension_decl",
  [sym_file_identifier_decl] = "file_identifier_decl",
  [sym_single_value] = "single_value",
  [sym_value] = "value",
  [sym_enumval_decl] = "enumval_decl",
  [sym_field_decl] = "field_decl",
  [sym_union_field_decl] = "union_field_decl",
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
  [sym_plus_minus_constant] = "plus_minus_constant",
  [sym_int_lit] = "int_lit",
  [sym_decimal_lit] = "decimal_lit",
  [sym_float_lit] = "float_lit",
  [sym_inf_token] = "inf_token",
  [sym_string_constant] = "string_constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_type_decl_repeat1] = "type_decl_repeat1",
  [aux_sym_type_decl_repeat2] = "type_decl_repeat2",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_union_decl_repeat1] = "union_decl_repeat1",
  [aux_sym_union_decl_repeat2] = "union_decl_repeat2",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_root_type] = anon_sym_root_type,
  [anon_sym_file_extension] = anon_sym_file_extension,
  [anon_sym_file_identifier] = anon_sym_file_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_rpc_service] = anon_sym_rpc_service,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_plus_token] = sym_plus_token,
  [sym_minus_token] = sym_minus_token,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_decimal_lit_token1] = aux_sym_decimal_lit_token1,
  [anon_sym_0] = anon_sym_0,
  [sym_hex_lit] = sym_hex_lit,
  [aux_sym_float_lit_token1] = aux_sym_float_lit_token1,
  [anon_sym_infinity] = anon_sym_infinity,
  [anon_sym_inf] = anon_sym_inf,
  [sym_nan_token] = sym_nan_token,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_include] = sym_include,
  [sym_namespace_decl] = sym_namespace_decl,
  [sym_attribute_decl] = sym_attribute_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_enum_decl] = sym_enum_decl,
  [sym_union_decl] = sym_union_decl,
  [sym_object] = sym_object,
  [sym_root_decl] = sym_root_decl,
  [sym_file_extension_decl] = sym_file_extension_decl,
  [sym_file_identifier_decl] = sym_file_identifier_decl,
  [sym_single_value] = sym_single_value,
  [sym_value] = sym_value,
  [sym_enumval_decl] = sym_enumval_decl,
  [sym_field_decl] = sym_field_decl,
  [sym_union_field_decl] = sym_union_field_decl,
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
  [sym_plus_minus_constant] = sym_plus_minus_constant,
  [sym_int_lit] = sym_int_lit,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_float_lit] = sym_float_lit,
  [sym_inf_token] = sym_inf_token,
  [sym_string_constant] = sym_string_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_type_decl_repeat1] = aux_sym_type_decl_repeat1,
  [aux_sym_type_decl_repeat2] = aux_sym_type_decl_repeat2,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_union_decl_repeat1] = aux_sym_union_decl_repeat1,
  [aux_sym_union_decl_repeat2] = aux_sym_union_decl_repeat2,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_plus_token] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_token] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_infinity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [sym_nan_token] = {
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
  [sym_union_decl] = {
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
  [sym_value] = {
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
  [sym_union_field_decl] = {
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
  [sym_plus_minus_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_inf_token] = {
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
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
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

enum ts_field_identifiers {
  field_array_type = 1,
  field_array_value = 2,
  field_attribute_name = 3,
  field_enum_key = 4,
  field_enum_name = 5,
  field_field_key = 6,
  field_field_with_type = 7,
  field_field_without_type = 8,
  field_file_extension_constant = 9,
  field_file_identifier_constant = 10,
  field_include_filename = 11,
  field_namespace_ident = 12,
  field_root_type_ident = 13,
  field_rpc_method_name = 14,
  field_rpc_name = 15,
  field_rpc_parameter = 16,
  field_rpc_return_type = 17,
  field_table_or_struct_name = 18,
  field_union_field_key = 19,
  field_union_name = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array_type] = "array_type",
  [field_array_value] = "array_value",
  [field_attribute_name] = "attribute_name",
  [field_enum_key] = "enum_key",
  [field_enum_name] = "enum_name",
  [field_field_key] = "field_key",
  [field_field_with_type] = "field_with_type",
  [field_field_without_type] = "field_without_type",
  [field_file_extension_constant] = "file_extension_constant",
  [field_file_identifier_constant] = "file_identifier_constant",
  [field_include_filename] = "include_filename",
  [field_namespace_ident] = "namespace_ident",
  [field_root_type_ident] = "root_type_ident",
  [field_rpc_method_name] = "rpc_method_name",
  [field_rpc_name] = "rpc_name",
  [field_rpc_parameter] = "rpc_parameter",
  [field_rpc_return_type] = "rpc_return_type",
  [field_table_or_struct_name] = "table_or_struct_name",
  [field_union_field_key] = "union_field_key",
  [field_union_name] = "union_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 1},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 3},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 3},
  [19] = {.index = 24, .length = 3},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 1},
  [26] = {.index = 37, .length = 4},
  [27] = {.index = 41, .length = 4},
  [28] = {.index = 45, .length = 1},
  [29] = {.index = 46, .length = 3},
  [30] = {.index = 49, .length = 3},
  [31] = {.index = 52, .length = 3},
  [32] = {.index = 55, .length = 3},
  [33] = {.index = 58, .length = 2},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 1},
  [36] = {.index = 63, .length = 4},
  [37] = {.index = 67, .length = 4},
  [38] = {.index = 71, .length = 1},
  [39] = {.index = 72, .length = 4},
  [40] = {.index = 76, .length = 4},
  [41] = {.index = 80, .length = 3},
  [42] = {.index = 83, .length = 3},
  [43] = {.index = 86, .length = 4},
  [44] = {.index = 90, .length = 4},
  [45] = {.index = 94, .length = 3},
  [46] = {.index = 97, .length = 3},
  [47] = {.index = 100, .length = 4},
  [48] = {.index = 104, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_include_filename, 1},
  [1] =
    {field_namespace_ident, 1},
  [2] =
    {field_attribute_name, 1},
  [3] =
    {field_root_type_ident, 1},
  [4] =
    {field_file_extension_constant, 1},
  [5] =
    {field_file_identifier_constant, 1},
  [6] =
    {field_table_or_struct_name, 1},
  [7] =
    {field_field_key, 0},
  [8] =
    {field_rpc_name, 1},
  [9] =
    {field_attribute_name, 2},
  [10] =
    {field_field_with_type, 3},
    {field_union_name, 1},
  [12] =
    {field_field_without_type, 3},
    {field_union_name, 1},
  [14] =
    {field_table_or_struct_name, 2},
  [15] =
    {field_rpc_name, 2},
  [16] =
    {field_array_type, 0},
    {field_array_type, 1},
    {field_array_type, 2},
  [19] =
    {field_enum_key, 0},
  [20] =
    {field_union_field_key, 0},
  [21] =
    {field_field_with_type, 3},
    {field_field_with_type, 4},
    {field_union_name, 1},
  [24] =
    {field_field_without_type, 3},
    {field_field_without_type, 4},
    {field_union_name, 1},
  [27] =
    {field_field_with_type, 4},
    {field_union_name, 1},
  [29] =
    {field_field_without_type, 4},
    {field_union_name, 1},
  [31] =
    {field_field_with_type, 4},
    {field_union_name, 2},
  [33] =
    {field_field_without_type, 4},
    {field_union_name, 2},
  [35] =
    {field_enum_name, 1},
  [36] =
    {field_enum_key, 1},
  [37] =
    {field_field_with_type, 3},
    {field_field_with_type, 4},
    {field_field_with_type, 5},
    {field_union_name, 1},
  [41] =
    {field_field_without_type, 3},
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_union_name, 1},
  [45] =
    {field_union_field_key, 1},
  [46] =
    {field_field_with_type, 4},
    {field_field_with_type, 5},
    {field_union_name, 1},
  [49] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_union_name, 1},
  [52] =
    {field_field_with_type, 4},
    {field_field_with_type, 5},
    {field_union_name, 2},
  [55] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_union_name, 2},
  [58] =
    {field_field_with_type, 5},
    {field_union_name, 2},
  [60] =
    {field_field_without_type, 5},
    {field_union_name, 2},
  [62] =
    {field_field_key, 1},
  [63] =
    {field_field_with_type, 4},
    {field_field_with_type, 5},
    {field_field_with_type, 6},
    {field_union_name, 1},
  [67] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_union_name, 1},
  [71] =
    {field_enum_name, 2},
  [72] =
    {field_field_with_type, 4},
    {field_field_with_type, 5},
    {field_field_with_type, 6},
    {field_union_name, 2},
  [76] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_union_name, 2},
  [80] =
    {field_field_with_type, 5},
    {field_field_with_type, 6},
    {field_union_name, 2},
  [83] =
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_union_name, 2},
  [86] =
    {field_field_with_type, 5},
    {field_field_with_type, 6},
    {field_field_with_type, 7},
    {field_union_name, 2},
  [90] =
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_field_without_type, 7},
    {field_union_name, 2},
  [94] =
    {field_array_value, 0},
    {field_array_value, 1},
    {field_array_value, 2},
  [97] =
    {field_rpc_method_name, 0},
    {field_rpc_parameter, 2},
    {field_rpc_return_type, 5},
  [100] =
    {field_array_value, 0},
    {field_array_value, 1},
    {field_array_value, 2},
    {field_array_value, 3},
  [104] =
    {field_rpc_method_name, 1},
    {field_rpc_parameter, 3},
    {field_rpc_return_type, 6},
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
  [120] = 117,
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
  [133] = 102,
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 24,
  [150] = 70,
  [151] = 23,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 76,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 185,
  [227] = 209,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      ADVANCE_MAP(
        '"', 158,
        '(', 218,
        ')', 219,
        '+', 286,
        ',', 165,
        '-', 287,
        '.', 285,
        '/', 4,
        '0', 293,
        ':', 164,
        ';', 155,
        '=', 172,
        '[', 170,
        '\\', 18,
        ']', 171,
        'a', 119,
        'b', 91,
        'd', 89,
        'e', 82,
        'f', 22,
        'i', 78,
        'l', 92,
        'n', 23,
        'r', 96,
        's', 60,
        't', 24,
        'u', 27,
        '{', 161,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 218,
        ')', 219,
        ',', 165,
        '.', 284,
        '/', 5,
        ':', 164,
        ';', 155,
        '=', 172,
        '[', 170,
        ']', 171,
        'b', 262,
        'd', 258,
        'f', 248,
        'i', 255,
        'l', 263,
        's', 242,
        'u', 231,
        '{', 161,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(313);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(314);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
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
      if (lookahead == 'U') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 133:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
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
      if (eof) ADVANCE(152);
      ADVANCE_MAP(
        '"', 158,
        '(', 218,
        ')', 219,
        '+', 286,
        ',', 165,
        '-', 287,
        '.', 285,
        '/', 4,
        '0', 293,
        ':', 164,
        ';', 155,
        '=', 172,
        '[', 170,
        ']', 171,
        'a', 119,
        'b', 91,
        'd', 89,
        'e', 82,
        'f', 22,
        'i', 78,
        'l', 92,
        'n', 23,
        'r', 96,
        's', 60,
        't', 24,
        'u', 27,
        '{', 161,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      ADVANCE_MAP(
        '"', 158,
        '(', 218,
        ')', 219,
        '+', 286,
        ',', 165,
        '-', 287,
        '.', 139,
        '/', 5,
        '0', 293,
        ':', 164,
        ';', 155,
        '=', 172,
        '[', 170,
        ']', 171,
        'f', 228,
        'i', 250,
        'n', 229,
        't', 266,
        '{', 161,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_documentation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
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
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '3') ADVANCE(220);
      if (lookahead == '6') ADVANCE(223);
      if (lookahead == '8') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
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
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '6') ADVANCE(224);
      if (lookahead == '8') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(222);
      if (lookahead == '6') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_plus_token);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_minus_token);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_decimal_lit_token1);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_infinity);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_infinity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_nan_token);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_nan_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(314);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(308);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(304);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 151},
  [3] = {.lex_state = 151},
  [4] = {.lex_state = 151},
  [5] = {.lex_state = 151},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 151},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 151},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 151},
  [79] = {.lex_state = 151},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 151},
  [82] = {.lex_state = 151},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 151},
  [88] = {.lex_state = 151},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 151},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 151},
  [101] = {.lex_state = 151},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 151},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 151},
  [107] = {.lex_state = 151},
  [108] = {.lex_state = 151},
  [109] = {.lex_state = 151},
  [110] = {.lex_state = 151},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 151},
  [116] = {.lex_state = 151},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 151},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 151},
  [136] = {.lex_state = 151},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 151},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 151},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 151},
  [149] = {.lex_state = 151},
  [150] = {.lex_state = 151},
  [151] = {.lex_state = 151},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 151},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 151},
  [157] = {.lex_state = 151},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 151},
  [160] = {.lex_state = 151},
  [161] = {.lex_state = 151},
  [162] = {.lex_state = 151},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 151},
  [165] = {.lex_state = 151},
  [166] = {.lex_state = 151},
  [167] = {.lex_state = 151},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 151},
  [170] = {.lex_state = 151},
  [171] = {.lex_state = 151},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 151},
  [174] = {.lex_state = 151},
  [175] = {.lex_state = 151},
  [176] = {.lex_state = 151},
  [177] = {.lex_state = 151},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 151},
  [180] = {.lex_state = 151},
  [181] = {.lex_state = 151},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 151},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 151},
  [186] = {.lex_state = 151},
  [187] = {.lex_state = 151},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 151},
  [190] = {.lex_state = 151},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 151},
  [194] = {.lex_state = 151},
  [195] = {.lex_state = 151},
  [196] = {.lex_state = 151},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 151},
  [199] = {.lex_state = 151},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 151},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 151},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 151},
  [207] = {.lex_state = 151},
  [208] = {.lex_state = 151},
  [209] = {.lex_state = 151},
  [210] = {.lex_state = 151},
  [211] = {.lex_state = 151},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 151},
  [216] = {.lex_state = 151},
  [217] = {.lex_state = 151},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 151},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 151},
  [226] = {.lex_state = 151},
  [227] = {.lex_state = 151},
  [228] = {.lex_state = 151},
  [229] = {.lex_state = 151},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 151},
  [232] = {.lex_state = 151},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 151},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 151},
  [238] = {.lex_state = 151},
  [239] = {.lex_state = 151},
  [240] = {.lex_state = 151},
  [241] = {.lex_state = 151},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 151},
  [244] = {.lex_state = 151},
  [245] = {.lex_state = 151},
  [246] = {.lex_state = 151},
  [247] = {.lex_state = 151},
  [248] = {.lex_state = 151},
  [249] = {.lex_state = 151},
  [250] = {.lex_state = 151},
  [251] = {.lex_state = 151},
  [252] = {.lex_state = 151},
  [253] = {.lex_state = 151},
  [254] = {.lex_state = 151},
  [255] = {.lex_state = 151},
  [256] = {.lex_state = 151},
  [257] = {.lex_state = 151},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 151},
  [260] = {.lex_state = 151},
  [261] = {.lex_state = 151},
  [262] = {.lex_state = 151},
  [263] = {.lex_state = 151},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 151},
  [266] = {.lex_state = 151},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 2},
  [269] = {.lex_state = 151},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 151},
  [272] = {.lex_state = 151},
  [273] = {.lex_state = 151},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 151},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 151},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 151},
  [283] = {.lex_state = 151},
  [284] = {.lex_state = 151},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 151},
  [287] = {.lex_state = 151},
  [288] = {.lex_state = 151},
  [289] = {.lex_state = 151},
  [290] = {.lex_state = 151},
  [291] = {.lex_state = 151},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 151},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 151},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 151},
  [298] = {.lex_state = 151},
  [299] = {.lex_state = 151},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_root_type] = ACTIONS(1),
    [anon_sym_file_extension] = ACTIONS(1),
    [anon_sym_file_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_rpc_service] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_plus_token] = ACTIONS(1),
    [sym_minus_token] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym_decimal_lit_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [aux_sym_float_lit_token1] = ACTIONS(1),
    [anon_sym_infinity] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [sym_nan_token] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(261),
    [sym_include] = STATE(6),
    [sym_namespace_decl] = STATE(15),
    [sym_attribute_decl] = STATE(15),
    [sym_type_decl] = STATE(15),
    [sym_enum_decl] = STATE(15),
    [sym_union_decl] = STATE(15),
    [sym_object] = STATE(15),
    [sym_root_decl] = STATE(15),
    [sym_file_extension_decl] = STATE(15),
    [sym_file_identifier_decl] = STATE(15),
    [sym_rpc_decl] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(15),
    [aux_sym_type_decl_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_documentation] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_attribute] = ACTIONS(13),
    [anon_sym_table] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_root_type] = ACTIONS(23),
    [anon_sym_file_extension] = ACTIONS(25),
    [anon_sym_file_identifier] = ACTIONS(27),
    [anon_sym_rpc_service] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(47), 1,
      aux_sym_float_lit_token1,
    ACTIONS(51), 1,
      sym_nan_token,
    ACTIONS(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(101), 1,
      sym_float_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(204), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(135), 2,
      sym_object,
      sym_single_value,
    STATE(109), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(110), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [73] = 21,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(47), 1,
      aux_sym_float_lit_token1,
    ACTIONS(51), 1,
      sym_nan_token,
    ACTIONS(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(101), 1,
      sym_float_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(202), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(135), 2,
      sym_object,
      sym_single_value,
    STATE(109), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(110), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [146] = 21,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(47), 1,
      aux_sym_float_lit_token1,
    ACTIONS(51), 1,
      sym_nan_token,
    ACTIONS(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(101), 1,
      sym_float_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(190), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(135), 2,
      sym_object,
      sym_single_value,
    STATE(109), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(110), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [219] = 21,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(47), 1,
      aux_sym_float_lit_token1,
    ACTIONS(51), 1,
      sym_nan_token,
    ACTIONS(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(101), 1,
      sym_float_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(243), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(135), 2,
      sym_object,
      sym_single_value,
    STATE(109), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(110), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [292] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_attribute,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_union,
    ACTIONS(23), 1,
      anon_sym_root_type,
    ACTIONS(25), 1,
      anon_sym_file_extension,
    ACTIONS(27), 1,
      anon_sym_file_identifier,
    ACTIONS(29), 1,
      anon_sym_rpc_service,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(18), 2,
      sym_include,
      aux_sym_source_file_repeat1,
    STATE(14), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat2,
  [356] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(287), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [396] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(177), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [436] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(228), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [476] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(139), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [516] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(237), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [556] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(136), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [596] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_full_ident,
    STATE(247), 1,
      sym_type,
    ACTIONS(59), 22,
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
  [636] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_attribute,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_union,
    ACTIONS(23), 1,
      anon_sym_root_type,
    ACTIONS(25), 1,
      anon_sym_file_extension,
    ACTIONS(27), 1,
      anon_sym_file_identifier,
    ACTIONS(29), 1,
      anon_sym_rpc_service,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(16), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat2,
  [693] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_attribute,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_union,
    ACTIONS(23), 1,
      anon_sym_root_type,
    ACTIONS(25), 1,
      anon_sym_file_extension,
    ACTIONS(27), 1,
      anon_sym_file_identifier,
    ACTIONS(29), 1,
      anon_sym_rpc_service,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(16), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat2,
  [750] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_documentation,
    ACTIONS(68), 1,
      anon_sym_namespace,
    ACTIONS(71), 1,
      anon_sym_attribute,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_enum,
    ACTIONS(83), 1,
      anon_sym_union,
    ACTIONS(86), 1,
      anon_sym_root_type,
    ACTIONS(89), 1,
      anon_sym_file_extension,
    ACTIONS(92), 1,
      anon_sym_file_identifier,
    ACTIONS(95), 1,
      anon_sym_rpc_service,
    STATE(80), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(74), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(16), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_decl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat2,
  [807] = 18,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(47), 1,
      aux_sym_float_lit_token1,
    ACTIONS(51), 1,
      sym_nan_token,
    ACTIONS(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(101), 1,
      sym_float_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(238), 1,
      sym_single_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(109), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(110), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_include,
    STATE(18), 2,
      sym_include,
      aux_sym_source_file_repeat1,
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
  [896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 14,
      ts_builtin_sym_end,
      sym_documentation,
      anon_sym_include,
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
  [916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 13,
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
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 13,
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
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 13,
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
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 13,
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
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 13,
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
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 13,
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
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 13,
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
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 13,
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
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 13,
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
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 13,
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
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 13,
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
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 13,
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
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 13,
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
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 13,
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
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 13,
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
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 13,
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
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 13,
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
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 13,
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
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 13,
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
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 13,
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
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 13,
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
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 13,
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
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 13,
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
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 13,
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
  [1372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 13,
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
  [1391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 13,
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
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 13,
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
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 13,
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
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 13,
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
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 13,
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
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 13,
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
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 13,
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
  [1524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 13,
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
  [1543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 13,
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
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 13,
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
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 13,
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
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 13,
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
  [1619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 13,
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
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 13,
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
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 13,
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
  [1676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 13,
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
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 13,
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
  [1714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 13,
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
  [1733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 13,
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
  [1752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 13,
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
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 13,
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
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 13,
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
  [1809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 13,
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
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 13,
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
  [1847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 13,
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
  [1866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 13,
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
  [1885] = 10,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(49), 1,
      anon_sym_inf,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_infinity,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(100), 1,
      sym_int_lit,
    STATE(107), 1,
      sym_inf_token,
    STATE(116), 1,
      sym_float_lit,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(47), 2,
      aux_sym_float_lit_token1,
      sym_nan_token,
  [1918] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1938] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(214), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1958] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(218), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1978] = 9,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_decimal_lit_token1,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(124), 1,
      sym_plus_minus_constant,
    STATE(239), 1,
      sym_int_constant,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_documentation,
    STATE(76), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(225), 7,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_union,
      anon_sym_rpc_service,
  [2026] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(209), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2041] = 9,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_decimal_lit_token1,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(90), 1,
      sym_int_lit,
    STATE(124), 1,
      sym_plus_minus_constant,
    STATE(229), 1,
      sym_int_constant,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
  [2070] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(227), 3,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
      anon_sym_inf,
    ACTIONS(229), 4,
      sym_hex_lit,
      aux_sym_float_lit_token1,
      anon_sym_infinity,
      sym_nan_token,
  [2085] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_documentation,
    ACTIONS(235), 1,
      anon_sym_enum,
    ACTIONS(237), 1,
      anon_sym_union,
    ACTIONS(239), 1,
      anon_sym_rpc_service,
    STATE(76), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(233), 2,
      anon_sym_table,
      anon_sym_struct,
  [2108] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2121] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(243), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(95), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_documentation,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(200), 1,
      aux_sym_type_decl_repeat1,
    STATE(97), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(92), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2194] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(96), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2214] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2226] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_documentation,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_type_decl_repeat1,
    STATE(84), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2258] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(94), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_documentation,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(92), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_documentation,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_type_decl_repeat1,
    STATE(97), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(92), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(92), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(92), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_documentation,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(200), 1,
      aux_sym_type_decl_repeat1,
    STATE(97), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_documentation,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      aux_sym_type_decl_repeat1,
    STATE(85), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2430] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_documentation,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_type_decl_repeat1,
    STATE(93), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2450] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2462] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_documentation,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_type_decl_repeat1,
    STATE(226), 1,
      aux_sym_object_repeat1,
  [2492] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(170), 1,
      sym_union_field_decl,
    STATE(171), 1,
      sym_full_ident,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
  [2541] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2552] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2563] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2574] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2585] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(193), 1,
      sym_union_field_decl,
    STATE(195), 1,
      sym_full_ident,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
  [2615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2653] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2672] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2683] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_documentation,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_type_decl_repeat1,
    STATE(227), 1,
      aux_sym_object_repeat1,
  [2713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_documentation,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_type_decl_repeat1,
    STATE(209), 1,
      aux_sym_object_repeat1,
  [2770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2808] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_COLON,
    STATE(74), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(214), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2825] = 6,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_decimal_lit_token1,
    STATE(88), 1,
      sym_decimal_lit,
    STATE(100), 1,
      sym_int_lit,
  [2844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(160), 1,
      sym_union_field_decl,
    STATE(166), 1,
      sym_full_ident,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
  [2882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2901] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [2920] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(179), 1,
      sym_union_field_decl,
    STATE(180), 1,
      sym_full_ident,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
  [2977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [2996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      sym_documentation,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_type_decl_repeat1,
    STATE(185), 1,
      aux_sym_object_repeat1,
  [3015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(154), 1,
      sym_enumval_decl,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
  [3031] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(369), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3041] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(284), 1,
      sym_metadata,
  [3057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(176), 1,
      sym_enumval_decl,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_documentation,
    STATE(76), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(377), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3087] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_metadata,
  [3103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_documentation,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym_type_decl_repeat1,
    STATE(245), 1,
      sym_union_field_decl,
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_documentation,
    STATE(138), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(385), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(232), 1,
      sym_enumval_decl,
  [3149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(184), 1,
      sym_enumval_decl,
  [3165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_type_decl_repeat1,
    STATE(199), 1,
      sym_enumval_decl,
  [3181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_string_constant_token1,
    ACTIONS(391), 1,
      sym_escape_sequence,
    STATE(147), 1,
      aux_sym_string_constant_repeat1,
  [3197] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_constant_token1,
    ACTIONS(399), 1,
      sym_escape_sequence,
    STATE(152), 1,
      aux_sym_string_constant_repeat1,
  [3223] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3233] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(113), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3243] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3253] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_string_constant_token1,
    ACTIONS(408), 1,
      sym_escape_sequence,
    STATE(152), 1,
      aux_sym_string_constant_repeat1,
  [3279] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(231), 1,
      sym_full_ident,
  [3292] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_enum_decl_repeat1,
  [3305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_documentation,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_type_decl_repeat1,
  [3318] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_union_decl_repeat2,
  [3331] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_union_decl_repeat1,
  [3344] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3357] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_union_decl_repeat2,
  [3370] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_union_decl_repeat1,
  [3383] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_union_decl_repeat1,
  [3396] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(259), 1,
      sym_metadata,
  [3409] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3422] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_union_decl_repeat2,
  [3435] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_metadata,
  [3448] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_union_decl_repeat2,
  [3461] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_union_decl_repeat1,
  [3474] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3487] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_union_decl_repeat2,
  [3500] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_union_decl_repeat1,
  [3513] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_union_decl_repeat2,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [3535] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(273), 1,
      sym_metadata,
  [3548] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_enum_decl_repeat1,
  [3561] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(477), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3572] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_enum_decl_repeat1,
  [3585] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_metadata,
  [3598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_documentation,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_type_decl_repeat1,
  [3611] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_union_decl_repeat1,
  [3624] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_union_decl_repeat2,
  [3637] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3648] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3661] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_metadata_repeat1,
  [3674] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_enum_decl_repeat1,
  [3687] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_object_repeat1,
  [3700] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_union_decl_repeat1,
  [3713] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    STATE(295), 1,
      sym_metadata,
  [3726] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3739] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_union_decl_repeat2,
  [3752] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    STATE(256), 1,
      sym_metadata,
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [3783] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_union_decl_repeat1,
  [3796] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_enum_decl_repeat1,
  [3809] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_union_decl_repeat2,
  [3822] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_enum_decl_repeat1,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_documentation,
    ACTIONS(536), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_type_decl_repeat1,
  [3848] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_enum_decl_repeat1,
  [3861] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_enum_decl_repeat1,
  [3874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_documentation,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_type_decl_repeat1,
  [3887] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [3900] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym_value_repeat1,
  [3913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [3922] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(275), 1,
      sym_metadata,
  [3935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [3944] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    STATE(278), 1,
      sym_metadata,
  [3957] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_union_decl_repeat1,
  [3970] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_enum_decl_repeat1,
  [3983] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_object_repeat1,
  [3996] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_object_repeat1,
  [4009] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      aux_sym_value_repeat1,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4049] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      sym_metadata,
  [4062] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_metadata_repeat1,
  [4075] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      aux_sym_value_repeat1,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(590), 1,
      sym_documentation,
    STATE(222), 1,
      aux_sym_type_decl_repeat1,
  [4137] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_metadata_repeat1,
  [4150] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_full_ident,
  [4163] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_EQ,
    ACTIONS(598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4174] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_object_repeat1,
  [4187] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      aux_sym_object_repeat1,
  [4200] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_metadata,
  [4213] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4221] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_and_value,
  [4231] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4239] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4247] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      sym_identifier,
  [4257] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(250), 1,
      sym_string_constant,
  [4267] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(244), 1,
      sym_field_and_value,
  [4277] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(231), 1,
      sym_full_ident,
  [4287] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4295] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4303] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4311] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4319] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(254), 1,
      sym_string_constant,
  [4329] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(249), 1,
      sym_full_ident,
  [4339] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4347] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4355] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4363] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4371] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(624), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4379] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(252), 1,
      sym_string_constant,
  [4389] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_SEMI,
  [4396] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_SEMI,
  [4403] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_SEMI,
  [4410] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SEMI,
  [4417] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COLON,
  [4424] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_SEMI,
  [4431] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [4438] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_SEMI,
  [4445] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
  [4452] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_identifier,
  [4459] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
  [4466] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
  [4473] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
  [4480] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
  [4487] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
  [4494] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_identifier,
  [4501] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
  [4508] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
  [4515] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_identifier,
  [4522] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
  [4529] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
  [4536] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_identifier,
  [4543] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COLON,
  [4550] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [4557] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
  [4564] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
  [4571] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SEMI,
  [4578] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_identifier,
  [4585] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
  [4592] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
  [4599] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_identifier,
  [4606] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_identifier,
  [4613] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_identifier,
  [4620] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [4627] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SEMI,
  [4634] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [4641] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
  [4648] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COLON,
  [4655] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
  [4662] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [4669] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [4676] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [4683] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [4690] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_identifier,
  [4697] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [4704] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_identifier,
  [4711] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
  [4718] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
  [4725] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COLON,
  [4732] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [4739] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 356,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 436,
  [SMALL_STATE(10)] = 476,
  [SMALL_STATE(11)] = 516,
  [SMALL_STATE(12)] = 556,
  [SMALL_STATE(13)] = 596,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 693,
  [SMALL_STATE(16)] = 750,
  [SMALL_STATE(17)] = 807,
  [SMALL_STATE(18)] = 870,
  [SMALL_STATE(19)] = 896,
  [SMALL_STATE(20)] = 916,
  [SMALL_STATE(21)] = 935,
  [SMALL_STATE(22)] = 954,
  [SMALL_STATE(23)] = 973,
  [SMALL_STATE(24)] = 992,
  [SMALL_STATE(25)] = 1011,
  [SMALL_STATE(26)] = 1030,
  [SMALL_STATE(27)] = 1049,
  [SMALL_STATE(28)] = 1068,
  [SMALL_STATE(29)] = 1087,
  [SMALL_STATE(30)] = 1106,
  [SMALL_STATE(31)] = 1125,
  [SMALL_STATE(32)] = 1144,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1182,
  [SMALL_STATE(35)] = 1201,
  [SMALL_STATE(36)] = 1220,
  [SMALL_STATE(37)] = 1239,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1277,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1315,
  [SMALL_STATE(42)] = 1334,
  [SMALL_STATE(43)] = 1353,
  [SMALL_STATE(44)] = 1372,
  [SMALL_STATE(45)] = 1391,
  [SMALL_STATE(46)] = 1410,
  [SMALL_STATE(47)] = 1429,
  [SMALL_STATE(48)] = 1448,
  [SMALL_STATE(49)] = 1467,
  [SMALL_STATE(50)] = 1486,
  [SMALL_STATE(51)] = 1505,
  [SMALL_STATE(52)] = 1524,
  [SMALL_STATE(53)] = 1543,
  [SMALL_STATE(54)] = 1562,
  [SMALL_STATE(55)] = 1581,
  [SMALL_STATE(56)] = 1600,
  [SMALL_STATE(57)] = 1619,
  [SMALL_STATE(58)] = 1638,
  [SMALL_STATE(59)] = 1657,
  [SMALL_STATE(60)] = 1676,
  [SMALL_STATE(61)] = 1695,
  [SMALL_STATE(62)] = 1714,
  [SMALL_STATE(63)] = 1733,
  [SMALL_STATE(64)] = 1752,
  [SMALL_STATE(65)] = 1771,
  [SMALL_STATE(66)] = 1790,
  [SMALL_STATE(67)] = 1809,
  [SMALL_STATE(68)] = 1828,
  [SMALL_STATE(69)] = 1847,
  [SMALL_STATE(70)] = 1866,
  [SMALL_STATE(71)] = 1885,
  [SMALL_STATE(72)] = 1918,
  [SMALL_STATE(73)] = 1938,
  [SMALL_STATE(74)] = 1958,
  [SMALL_STATE(75)] = 1978,
  [SMALL_STATE(76)] = 2007,
  [SMALL_STATE(77)] = 2026,
  [SMALL_STATE(78)] = 2041,
  [SMALL_STATE(79)] = 2070,
  [SMALL_STATE(80)] = 2085,
  [SMALL_STATE(81)] = 2108,
  [SMALL_STATE(82)] = 2121,
  [SMALL_STATE(83)] = 2134,
  [SMALL_STATE(84)] = 2154,
  [SMALL_STATE(85)] = 2174,
  [SMALL_STATE(86)] = 2194,
  [SMALL_STATE(87)] = 2214,
  [SMALL_STATE(88)] = 2226,
  [SMALL_STATE(89)] = 2238,
  [SMALL_STATE(90)] = 2258,
  [SMALL_STATE(91)] = 2270,
  [SMALL_STATE(92)] = 2290,
  [SMALL_STATE(93)] = 2310,
  [SMALL_STATE(94)] = 2330,
  [SMALL_STATE(95)] = 2350,
  [SMALL_STATE(96)] = 2370,
  [SMALL_STATE(97)] = 2390,
  [SMALL_STATE(98)] = 2410,
  [SMALL_STATE(99)] = 2430,
  [SMALL_STATE(100)] = 2450,
  [SMALL_STATE(101)] = 2462,
  [SMALL_STATE(102)] = 2473,
  [SMALL_STATE(103)] = 2492,
  [SMALL_STATE(104)] = 2503,
  [SMALL_STATE(105)] = 2522,
  [SMALL_STATE(106)] = 2541,
  [SMALL_STATE(107)] = 2552,
  [SMALL_STATE(108)] = 2563,
  [SMALL_STATE(109)] = 2574,
  [SMALL_STATE(110)] = 2585,
  [SMALL_STATE(111)] = 2596,
  [SMALL_STATE(112)] = 2615,
  [SMALL_STATE(113)] = 2634,
  [SMALL_STATE(114)] = 2653,
  [SMALL_STATE(115)] = 2672,
  [SMALL_STATE(116)] = 2683,
  [SMALL_STATE(117)] = 2694,
  [SMALL_STATE(118)] = 2713,
  [SMALL_STATE(119)] = 2732,
  [SMALL_STATE(120)] = 2751,
  [SMALL_STATE(121)] = 2770,
  [SMALL_STATE(122)] = 2789,
  [SMALL_STATE(123)] = 2808,
  [SMALL_STATE(124)] = 2825,
  [SMALL_STATE(125)] = 2844,
  [SMALL_STATE(126)] = 2863,
  [SMALL_STATE(127)] = 2882,
  [SMALL_STATE(128)] = 2901,
  [SMALL_STATE(129)] = 2920,
  [SMALL_STATE(130)] = 2939,
  [SMALL_STATE(131)] = 2958,
  [SMALL_STATE(132)] = 2977,
  [SMALL_STATE(133)] = 2996,
  [SMALL_STATE(134)] = 3015,
  [SMALL_STATE(135)] = 3031,
  [SMALL_STATE(136)] = 3041,
  [SMALL_STATE(137)] = 3057,
  [SMALL_STATE(138)] = 3073,
  [SMALL_STATE(139)] = 3087,
  [SMALL_STATE(140)] = 3103,
  [SMALL_STATE(141)] = 3119,
  [SMALL_STATE(142)] = 3133,
  [SMALL_STATE(143)] = 3149,
  [SMALL_STATE(144)] = 3165,
  [SMALL_STATE(145)] = 3181,
  [SMALL_STATE(146)] = 3197,
  [SMALL_STATE(147)] = 3207,
  [SMALL_STATE(148)] = 3223,
  [SMALL_STATE(149)] = 3233,
  [SMALL_STATE(150)] = 3243,
  [SMALL_STATE(151)] = 3253,
  [SMALL_STATE(152)] = 3263,
  [SMALL_STATE(153)] = 3279,
  [SMALL_STATE(154)] = 3292,
  [SMALL_STATE(155)] = 3305,
  [SMALL_STATE(156)] = 3318,
  [SMALL_STATE(157)] = 3331,
  [SMALL_STATE(158)] = 3344,
  [SMALL_STATE(159)] = 3357,
  [SMALL_STATE(160)] = 3370,
  [SMALL_STATE(161)] = 3383,
  [SMALL_STATE(162)] = 3396,
  [SMALL_STATE(163)] = 3409,
  [SMALL_STATE(164)] = 3422,
  [SMALL_STATE(165)] = 3435,
  [SMALL_STATE(166)] = 3448,
  [SMALL_STATE(167)] = 3461,
  [SMALL_STATE(168)] = 3474,
  [SMALL_STATE(169)] = 3487,
  [SMALL_STATE(170)] = 3500,
  [SMALL_STATE(171)] = 3513,
  [SMALL_STATE(172)] = 3526,
  [SMALL_STATE(173)] = 3535,
  [SMALL_STATE(174)] = 3548,
  [SMALL_STATE(175)] = 3561,
  [SMALL_STATE(176)] = 3572,
  [SMALL_STATE(177)] = 3585,
  [SMALL_STATE(178)] = 3598,
  [SMALL_STATE(179)] = 3611,
  [SMALL_STATE(180)] = 3624,
  [SMALL_STATE(181)] = 3637,
  [SMALL_STATE(182)] = 3648,
  [SMALL_STATE(183)] = 3661,
  [SMALL_STATE(184)] = 3674,
  [SMALL_STATE(185)] = 3687,
  [SMALL_STATE(186)] = 3700,
  [SMALL_STATE(187)] = 3713,
  [SMALL_STATE(188)] = 3726,
  [SMALL_STATE(189)] = 3739,
  [SMALL_STATE(190)] = 3752,
  [SMALL_STATE(191)] = 3765,
  [SMALL_STATE(192)] = 3774,
  [SMALL_STATE(193)] = 3783,
  [SMALL_STATE(194)] = 3796,
  [SMALL_STATE(195)] = 3809,
  [SMALL_STATE(196)] = 3822,
  [SMALL_STATE(197)] = 3835,
  [SMALL_STATE(198)] = 3848,
  [SMALL_STATE(199)] = 3861,
  [SMALL_STATE(200)] = 3874,
  [SMALL_STATE(201)] = 3887,
  [SMALL_STATE(202)] = 3900,
  [SMALL_STATE(203)] = 3913,
  [SMALL_STATE(204)] = 3922,
  [SMALL_STATE(205)] = 3935,
  [SMALL_STATE(206)] = 3944,
  [SMALL_STATE(207)] = 3957,
  [SMALL_STATE(208)] = 3970,
  [SMALL_STATE(209)] = 3983,
  [SMALL_STATE(210)] = 3996,
  [SMALL_STATE(211)] = 4009,
  [SMALL_STATE(212)] = 4022,
  [SMALL_STATE(213)] = 4031,
  [SMALL_STATE(214)] = 4040,
  [SMALL_STATE(215)] = 4049,
  [SMALL_STATE(216)] = 4062,
  [SMALL_STATE(217)] = 4075,
  [SMALL_STATE(218)] = 4088,
  [SMALL_STATE(219)] = 4097,
  [SMALL_STATE(220)] = 4106,
  [SMALL_STATE(221)] = 4115,
  [SMALL_STATE(222)] = 4124,
  [SMALL_STATE(223)] = 4137,
  [SMALL_STATE(224)] = 4150,
  [SMALL_STATE(225)] = 4163,
  [SMALL_STATE(226)] = 4174,
  [SMALL_STATE(227)] = 4187,
  [SMALL_STATE(228)] = 4200,
  [SMALL_STATE(229)] = 4213,
  [SMALL_STATE(230)] = 4221,
  [SMALL_STATE(231)] = 4231,
  [SMALL_STATE(232)] = 4239,
  [SMALL_STATE(233)] = 4247,
  [SMALL_STATE(234)] = 4257,
  [SMALL_STATE(235)] = 4267,
  [SMALL_STATE(236)] = 4277,
  [SMALL_STATE(237)] = 4287,
  [SMALL_STATE(238)] = 4295,
  [SMALL_STATE(239)] = 4303,
  [SMALL_STATE(240)] = 4311,
  [SMALL_STATE(241)] = 4319,
  [SMALL_STATE(242)] = 4329,
  [SMALL_STATE(243)] = 4339,
  [SMALL_STATE(244)] = 4347,
  [SMALL_STATE(245)] = 4355,
  [SMALL_STATE(246)] = 4363,
  [SMALL_STATE(247)] = 4371,
  [SMALL_STATE(248)] = 4379,
  [SMALL_STATE(249)] = 4389,
  [SMALL_STATE(250)] = 4396,
  [SMALL_STATE(251)] = 4403,
  [SMALL_STATE(252)] = 4410,
  [SMALL_STATE(253)] = 4417,
  [SMALL_STATE(254)] = 4424,
  [SMALL_STATE(255)] = 4431,
  [SMALL_STATE(256)] = 4438,
  [SMALL_STATE(257)] = 4445,
  [SMALL_STATE(258)] = 4452,
  [SMALL_STATE(259)] = 4459,
  [SMALL_STATE(260)] = 4466,
  [SMALL_STATE(261)] = 4473,
  [SMALL_STATE(262)] = 4480,
  [SMALL_STATE(263)] = 4487,
  [SMALL_STATE(264)] = 4494,
  [SMALL_STATE(265)] = 4501,
  [SMALL_STATE(266)] = 4508,
  [SMALL_STATE(267)] = 4515,
  [SMALL_STATE(268)] = 4522,
  [SMALL_STATE(269)] = 4529,
  [SMALL_STATE(270)] = 4536,
  [SMALL_STATE(271)] = 4543,
  [SMALL_STATE(272)] = 4550,
  [SMALL_STATE(273)] = 4557,
  [SMALL_STATE(274)] = 4564,
  [SMALL_STATE(275)] = 4571,
  [SMALL_STATE(276)] = 4578,
  [SMALL_STATE(277)] = 4585,
  [SMALL_STATE(278)] = 4592,
  [SMALL_STATE(279)] = 4599,
  [SMALL_STATE(280)] = 4606,
  [SMALL_STATE(281)] = 4613,
  [SMALL_STATE(282)] = 4620,
  [SMALL_STATE(283)] = 4627,
  [SMALL_STATE(284)] = 4634,
  [SMALL_STATE(285)] = 4641,
  [SMALL_STATE(286)] = 4648,
  [SMALL_STATE(287)] = 4655,
  [SMALL_STATE(288)] = 4662,
  [SMALL_STATE(289)] = 4669,
  [SMALL_STATE(290)] = 4676,
  [SMALL_STATE(291)] = 4683,
  [SMALL_STATE(292)] = 4690,
  [SMALL_STATE(293)] = 4697,
  [SMALL_STATE(294)] = 4704,
  [SMALL_STATE(295)] = 4711,
  [SMALL_STATE(296)] = 4718,
  [SMALL_STATE(297)] = 4725,
  [SMALL_STATE(298)] = 4732,
  [SMALL_STATE(299)] = 4739,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(242),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(233),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(294),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(270),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(276),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(280),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(234),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(248),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(258),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 38),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 11, 0, 38),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, 0, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 4, 0, 9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 5, 0, 10),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_decl, 3, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 5, 0, 11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 5, 0, 12),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 14),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 3, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 18),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 19),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 20),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 21),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 13),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 22),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 23),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 6, 0, 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, 0, 24),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 26),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 27),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 30),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 7, 0, 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 31),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 32),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 33),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_decl, 3, 0, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension_decl, 3, 0, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 24),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 36),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 37),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier_decl, 3, 0, 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 40),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 41),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 42),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 24),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 38),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 9, 0, 43),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 9, 0, 44),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 24),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 15),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_lit, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(253),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_constant, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inf_token, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 45),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 47),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat2, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(236),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 4, 0, 8),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 2, 0, 25),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 1, 0, 8),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 8),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 35),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 8),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 35),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 35),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 46),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 8, 0, 35),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 46),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 48),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 9, 0, 48),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 1, 0, 16),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 3, 0, 16),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 4, 0, 28),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 3, 0, 8),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 4, 0, 25),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 3, 0, 17),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
