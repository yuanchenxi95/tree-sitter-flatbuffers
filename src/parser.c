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
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 85

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
  sym_value = 73,
  sym_enum_val_decl = 74,
  sym_field_decl = 75,
  sym_union_field_decl = 76,
  sym_type = 77,
  sym_rpc_decl = 78,
  sym_rpc_method = 79,
  sym_metadata = 80,
  sym_field_and_value = 81,
  sym_single_value = 82,
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
  [sym_value] = "value",
  [sym_enum_val_decl] = "enum_val_decl",
  [sym_field_decl] = "field_decl",
  [sym_union_field_decl] = "union_field_decl",
  [sym_type] = "type",
  [sym_rpc_decl] = "rpc_decl",
  [sym_rpc_method] = "rpc_method",
  [sym_metadata] = "metadata",
  [sym_field_and_value] = "field_and_value",
  [sym_single_value] = "single_value",
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
  [sym_value] = sym_value,
  [sym_enum_val_decl] = sym_enum_val_decl,
  [sym_field_decl] = sym_field_decl,
  [sym_union_field_decl] = sym_union_field_decl,
  [sym_type] = sym_type,
  [sym_rpc_decl] = sym_rpc_decl,
  [sym_rpc_method] = sym_rpc_method,
  [sym_metadata] = sym_metadata,
  [sym_field_and_value] = sym_field_and_value,
  [sym_single_value] = sym_single_value,
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_val_decl] = {
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
  [sym_single_value] = {
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
  field_array_value_item = 3,
  field_attribute_name = 4,
  field_documentation = 5,
  field_enum_int_constant = 6,
  field_enum_key = 7,
  field_enum_name = 8,
  field_enum_val_decl = 9,
  field_field_and_value = 10,
  field_field_key = 11,
  field_field_type = 12,
  field_field_value = 13,
  field_field_without_type = 14,
  field_file_extension_constant = 15,
  field_file_identifier_constant = 16,
  field_full_ident = 17,
  field_include_name = 18,
  field_metadata = 19,
  field_namespace_ident = 20,
  field_object_value = 21,
  field_root_type_ident = 22,
  field_rpc_method = 23,
  field_rpc_method_name = 24,
  field_rpc_name = 25,
  field_rpc_parameter = 26,
  field_rpc_return_type = 27,
  field_scalar_value = 28,
  field_single_value = 29,
  field_string_constant = 30,
  field_table_or_struct_name = 31,
  field_union_field_decl = 32,
  field_union_field_key = 33,
  field_union_field_value = 34,
  field_union_name = 35,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array_type] = "array_type",
  [field_array_value] = "array_value",
  [field_array_value_item] = "array_value_item",
  [field_attribute_name] = "attribute_name",
  [field_documentation] = "documentation",
  [field_enum_int_constant] = "enum_int_constant",
  [field_enum_key] = "enum_key",
  [field_enum_name] = "enum_name",
  [field_enum_val_decl] = "enum_val_decl",
  [field_field_and_value] = "field_and_value",
  [field_field_key] = "field_key",
  [field_field_type] = "field_type",
  [field_field_value] = "field_value",
  [field_field_without_type] = "field_without_type",
  [field_file_extension_constant] = "file_extension_constant",
  [field_file_identifier_constant] = "file_identifier_constant",
  [field_full_ident] = "full_ident",
  [field_include_name] = "include_name",
  [field_metadata] = "metadata",
  [field_namespace_ident] = "namespace_ident",
  [field_object_value] = "object_value",
  [field_root_type_ident] = "root_type_ident",
  [field_rpc_method] = "rpc_method",
  [field_rpc_method_name] = "rpc_method_name",
  [field_rpc_name] = "rpc_name",
  [field_rpc_parameter] = "rpc_parameter",
  [field_rpc_return_type] = "rpc_return_type",
  [field_scalar_value] = "scalar_value",
  [field_single_value] = "single_value",
  [field_string_constant] = "string_constant",
  [field_table_or_struct_name] = "table_or_struct_name",
  [field_union_field_decl] = "union_field_decl",
  [field_union_field_key] = "union_field_key",
  [field_union_field_value] = "union_field_value",
  [field_union_name] = "union_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 1},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 1},
  [16] = {.index = 17, .length = 1},
  [17] = {.index = 18, .length = 2},
  [18] = {.index = 20, .length = 2},
  [19] = {.index = 22, .length = 2},
  [20] = {.index = 24, .length = 2},
  [21] = {.index = 26, .length = 2},
  [22] = {.index = 28, .length = 2},
  [23] = {.index = 30, .length = 2},
  [24] = {.index = 32, .length = 1},
  [25] = {.index = 33, .length = 1},
  [26] = {.index = 34, .length = 2},
  [27] = {.index = 36, .length = 2},
  [28] = {.index = 38, .length = 3},
  [29] = {.index = 41, .length = 1},
  [30] = {.index = 42, .length = 2},
  [31] = {.index = 44, .length = 1},
  [32] = {.index = 45, .length = 3},
  [33] = {.index = 48, .length = 2},
  [34] = {.index = 50, .length = 3},
  [35] = {.index = 53, .length = 3},
  [36] = {.index = 56, .length = 3},
  [37] = {.index = 59, .length = 3},
  [38] = {.index = 62, .length = 3},
  [39] = {.index = 65, .length = 3},
  [40] = {.index = 68, .length = 3},
  [41] = {.index = 71, .length = 2},
  [42] = {.index = 73, .length = 2},
  [43] = {.index = 75, .length = 2},
  [44] = {.index = 77, .length = 4},
  [45] = {.index = 81, .length = 3},
  [46] = {.index = 84, .length = 4},
  [47] = {.index = 88, .length = 4},
  [48] = {.index = 92, .length = 4},
  [49] = {.index = 96, .length = 4},
  [50] = {.index = 100, .length = 4},
  [51] = {.index = 104, .length = 4},
  [52] = {.index = 108, .length = 1},
  [53] = {.index = 109, .length = 1},
  [54] = {.index = 110, .length = 3},
  [55] = {.index = 113, .length = 3},
  [56] = {.index = 116, .length = 2},
  [57] = {.index = 118, .length = 1},
  [58] = {.index = 119, .length = 3},
  [59] = {.index = 122, .length = 2},
  [60] = {.index = 124, .length = 3},
  [61] = {.index = 127, .length = 5},
  [62] = {.index = 132, .length = 3},
  [63] = {.index = 135, .length = 5},
  [64] = {.index = 140, .length = 5},
  [65] = {.index = 145, .length = 5},
  [66] = {.index = 150, .length = 3},
  [67] = {.index = 153, .length = 4},
  [68] = {.index = 157, .length = 3},
  [69] = {.index = 160, .length = 4},
  [70] = {.index = 164, .length = 4},
  [71] = {.index = 168, .length = 4},
  [72] = {.index = 172, .length = 6},
  [73] = {.index = 178, .length = 3},
  [74] = {.index = 181, .length = 4},
  [75] = {.index = 185, .length = 4},
  [76] = {.index = 189, .length = 3},
  [77] = {.index = 192, .length = 5},
  [78] = {.index = 197, .length = 1},
  [79] = {.index = 198, .length = 5},
  [80] = {.index = 203, .length = 2},
  [81] = {.index = 205, .length = 5},
  [82] = {.index = 210, .length = 4},
  [83] = {.index = 214, .length = 4},
  [84] = {.index = 218, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_documentation, 0},
  [1] =
    {field_documentation, 0, .inherited = true},
    {field_documentation, 1, .inherited = true},
  [3] =
    {field_include_name, 1},
  [4] =
    {field_namespace_ident, 1},
  [5] =
    {field_attribute_name, 1},
  [6] =
    {field_documentation, 1, .inherited = true},
  [7] =
    {field_root_type_ident, 1},
  [8] =
    {field_file_extension_constant, 1},
  [9] =
    {field_file_identifier_constant, 1},
  [10] =
    {field_table_or_struct_name, 1},
  [11] =
    {field_field_key, 0},
  [12] =
    {field_documentation, 1, .inherited = true},
    {field_documentation, 2, .inherited = true},
  [14] =
    {field_full_ident, 0},
  [15] =
    {field_rpc_name, 1},
  [16] =
    {field_attribute_name, 2},
  [17] =
    {field_field_and_value, 1},
  [18] =
    {field_metadata, 2},
    {field_table_or_struct_name, 1},
  [20] =
    {field_union_field_decl, 3},
    {field_union_name, 1},
  [22] =
    {field_field_without_type, 3},
    {field_union_name, 1},
  [24] =
    {field_rpc_method, 3},
    {field_rpc_name, 1},
  [26] =
    {field_documentation, 0, .inherited = true},
    {field_table_or_struct_name, 2},
  [28] =
    {field_documentation, 0, .inherited = true},
    {field_rpc_name, 2},
  [30] =
    {field_field_key, 0},
    {field_field_value, 2},
  [32] =
    {field_scalar_value, 0},
  [33] =
    {field_string_constant, 0},
  [34] =
    {field_field_and_value, 1},
    {field_field_and_value, 2, .inherited = true},
  [36] =
    {field_field_and_value, 0, .inherited = true},
    {field_field_and_value, 1, .inherited = true},
  [38] =
    {field_array_type, 0},
    {field_array_type, 1},
    {field_array_type, 2},
  [41] =
    {field_enum_key, 0},
  [42] =
    {field_union_field_key, 0},
    {field_union_field_value, 2},
  [44] =
    {field_union_field_decl, 1},
  [45] =
    {field_union_field_decl, 3},
    {field_union_field_decl, 4, .inherited = true},
    {field_union_name, 1},
  [48] =
    {field_union_field_decl, 0, .inherited = true},
    {field_union_field_decl, 1, .inherited = true},
  [50] =
    {field_field_without_type, 3},
    {field_field_without_type, 4},
    {field_union_name, 1},
  [53] =
    {field_metadata, 2},
    {field_union_field_decl, 4},
    {field_union_name, 1},
  [56] =
    {field_field_without_type, 4},
    {field_metadata, 2},
    {field_union_name, 1},
  [59] =
    {field_documentation, 0, .inherited = true},
    {field_metadata, 3},
    {field_table_or_struct_name, 2},
  [62] =
    {field_documentation, 0, .inherited = true},
    {field_union_field_decl, 4},
    {field_union_name, 2},
  [65] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 4},
    {field_union_name, 2},
  [68] =
    {field_documentation, 0, .inherited = true},
    {field_rpc_method, 4},
    {field_rpc_name, 2},
  [71] =
    {field_field_key, 0},
    {field_field_type, 2},
  [73] =
    {field_enum_name, 1},
    {field_enum_val_decl, 5},
  [75] =
    {field_documentation, 0, .inherited = true},
    {field_enum_key, 1},
  [77] =
    {field_field_without_type, 3},
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_union_name, 1},
  [81] =
    {field_documentation, 0, .inherited = true},
    {field_union_field_key, 1},
    {field_union_field_value, 3},
  [84] =
    {field_metadata, 2},
    {field_union_field_decl, 4},
    {field_union_field_decl, 5, .inherited = true},
    {field_union_name, 1},
  [88] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_metadata, 2},
    {field_union_name, 1},
  [92] =
    {field_documentation, 0, .inherited = true},
    {field_union_field_decl, 4},
    {field_union_field_decl, 5, .inherited = true},
    {field_union_name, 2},
  [96] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_union_name, 2},
  [100] =
    {field_documentation, 0, .inherited = true},
    {field_metadata, 3},
    {field_union_field_decl, 5},
    {field_union_name, 2},
  [104] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 5},
    {field_metadata, 3},
    {field_union_name, 2},
  [108] =
    {field_object_value, 0},
  [109] =
    {field_single_value, 0},
  [110] =
    {field_field_key, 0},
    {field_field_type, 2},
    {field_metadata, 3},
  [113] =
    {field_documentation, 0, .inherited = true},
    {field_field_key, 1},
    {field_field_type, 3},
  [116] =
    {field_enum_int_constant, 2},
    {field_enum_key, 0},
  [118] =
    {field_enum_val_decl, 1},
  [119] =
    {field_enum_name, 1},
    {field_enum_val_decl, 5},
    {field_enum_val_decl, 6, .inherited = true},
  [122] =
    {field_enum_val_decl, 0, .inherited = true},
    {field_enum_val_decl, 1, .inherited = true},
  [124] =
    {field_enum_name, 1},
    {field_enum_val_decl, 6},
    {field_metadata, 4},
  [127] =
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_metadata, 2},
    {field_union_name, 1},
  [132] =
    {field_documentation, 0, .inherited = true},
    {field_enum_name, 2},
    {field_enum_val_decl, 6},
  [135] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 4},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_union_name, 2},
  [140] =
    {field_documentation, 0, .inherited = true},
    {field_metadata, 3},
    {field_union_field_decl, 5},
    {field_union_field_decl, 6, .inherited = true},
    {field_union_name, 2},
  [145] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_metadata, 3},
    {field_union_name, 2},
  [150] =
    {field_field_key, 0},
    {field_field_type, 2},
    {field_field_value, 4},
  [153] =
    {field_documentation, 0, .inherited = true},
    {field_field_key, 1},
    {field_field_type, 3},
    {field_metadata, 4},
  [157] =
    {field_documentation, 0, .inherited = true},
    {field_enum_int_constant, 3},
    {field_enum_key, 1},
  [160] =
    {field_enum_name, 1},
    {field_enum_val_decl, 6},
    {field_enum_val_decl, 7, .inherited = true},
    {field_metadata, 4},
  [164] =
    {field_documentation, 0, .inherited = true},
    {field_enum_name, 2},
    {field_enum_val_decl, 6},
    {field_enum_val_decl, 7, .inherited = true},
  [168] =
    {field_documentation, 0, .inherited = true},
    {field_enum_name, 2},
    {field_enum_val_decl, 7},
    {field_metadata, 5},
  [172] =
    {field_documentation, 0, .inherited = true},
    {field_field_without_type, 5},
    {field_field_without_type, 6},
    {field_field_without_type, 7},
    {field_metadata, 3},
    {field_union_name, 2},
  [178] =
    {field_array_value, 0},
    {field_array_value, 2},
    {field_array_value_item, 1},
  [181] =
    {field_field_key, 0},
    {field_field_type, 2},
    {field_field_value, 4},
    {field_metadata, 5},
  [185] =
    {field_documentation, 0, .inherited = true},
    {field_field_key, 1},
    {field_field_type, 3},
    {field_field_value, 5},
  [189] =
    {field_rpc_method_name, 0},
    {field_rpc_parameter, 2},
    {field_rpc_return_type, 5},
  [192] =
    {field_documentation, 0, .inherited = true},
    {field_enum_name, 2},
    {field_enum_val_decl, 7},
    {field_enum_val_decl, 8, .inherited = true},
    {field_metadata, 5},
  [197] =
    {field_array_value_item, 1},
  [198] =
    {field_array_value, 0},
    {field_array_value, 2},
    {field_array_value, 3},
    {field_array_value_item, 1},
    {field_array_value_item, 2, .inherited = true},
  [203] =
    {field_array_value_item, 0, .inherited = true},
    {field_array_value_item, 1, .inherited = true},
  [205] =
    {field_documentation, 0, .inherited = true},
    {field_field_key, 1},
    {field_field_type, 3},
    {field_field_value, 5},
    {field_metadata, 6},
  [210] =
    {field_metadata, 6},
    {field_rpc_method_name, 0},
    {field_rpc_parameter, 2},
    {field_rpc_return_type, 5},
  [214] =
    {field_documentation, 0, .inherited = true},
    {field_rpc_method_name, 1},
    {field_rpc_parameter, 3},
    {field_rpc_return_type, 6},
  [218] =
    {field_documentation, 0, .inherited = true},
    {field_metadata, 7},
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
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
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
  [162] = 136,
  [163] = 139,
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
  [179] = 24,
  [180] = 180,
  [181] = 22,
  [182] = 23,
  [183] = 29,
  [184] = 184,
  [185] = 185,
  [186] = 97,
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
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
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
  [260] = 202,
  [261] = 196,
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
  [279] = 100,
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
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
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
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 151},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 151},
  [99] = {.lex_state = 151},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 151},
  [103] = {.lex_state = 151},
  [104] = {.lex_state = 151},
  [105] = {.lex_state = 151},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 151},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 151},
  [123] = {.lex_state = 151},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 151},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 151},
  [133] = {.lex_state = 151},
  [134] = {.lex_state = 151},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 151},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 151},
  [149] = {.lex_state = 151},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 151},
  [152] = {.lex_state = 151},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 151},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 151},
  [157] = {.lex_state = 151},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 151},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 151},
  [166] = {.lex_state = 151},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 151},
  [171] = {.lex_state = 151},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 151},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 151},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 151},
  [182] = {.lex_state = 151},
  [183] = {.lex_state = 151},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 151},
  [188] = {.lex_state = 151},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 151},
  [191] = {.lex_state = 151},
  [192] = {.lex_state = 151},
  [193] = {.lex_state = 151},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 151},
  [196] = {.lex_state = 151},
  [197] = {.lex_state = 151},
  [198] = {.lex_state = 151},
  [199] = {.lex_state = 151},
  [200] = {.lex_state = 151},
  [201] = {.lex_state = 151},
  [202] = {.lex_state = 151},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 151},
  [206] = {.lex_state = 151},
  [207] = {.lex_state = 151},
  [208] = {.lex_state = 151},
  [209] = {.lex_state = 151},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 151},
  [212] = {.lex_state = 151},
  [213] = {.lex_state = 151},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 151},
  [216] = {.lex_state = 151},
  [217] = {.lex_state = 151},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 151},
  [221] = {.lex_state = 151},
  [222] = {.lex_state = 151},
  [223] = {.lex_state = 151},
  [224] = {.lex_state = 151},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 151},
  [227] = {.lex_state = 151},
  [228] = {.lex_state = 151},
  [229] = {.lex_state = 151},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 151},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 151},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 151},
  [236] = {.lex_state = 151},
  [237] = {.lex_state = 151},
  [238] = {.lex_state = 151},
  [239] = {.lex_state = 151},
  [240] = {.lex_state = 151},
  [241] = {.lex_state = 151},
  [242] = {.lex_state = 151},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 151},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 151},
  [250] = {.lex_state = 151},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 151},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 151},
  [259] = {.lex_state = 151},
  [260] = {.lex_state = 151},
  [261] = {.lex_state = 151},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 151},
  [264] = {.lex_state = 151},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 151},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 151},
  [269] = {.lex_state = 151},
  [270] = {.lex_state = 151},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 151},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 151},
  [275] = {.lex_state = 151},
  [276] = {.lex_state = 151},
  [277] = {.lex_state = 151},
  [278] = {.lex_state = 151},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 151},
  [282] = {.lex_state = 151},
  [283] = {.lex_state = 151},
  [284] = {.lex_state = 151},
  [285] = {.lex_state = 151},
  [286] = {.lex_state = 151},
  [287] = {.lex_state = 151},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 151},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 151},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 151},
  [296] = {.lex_state = 151},
  [297] = {.lex_state = 151},
  [298] = {.lex_state = 151},
  [299] = {.lex_state = 151},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 151},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 151},
  [305] = {.lex_state = 151},
  [306] = {.lex_state = 151},
  [307] = {.lex_state = 151},
  [308] = {.lex_state = 151},
  [309] = {.lex_state = 151},
  [310] = {.lex_state = 151},
  [311] = {.lex_state = 151},
  [312] = {.lex_state = 151},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 151},
  [316] = {.lex_state = 151},
  [317] = {.lex_state = 151},
  [318] = {.lex_state = 151},
  [319] = {.lex_state = 151},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 151},
  [322] = {.lex_state = 151},
  [323] = {.lex_state = 151},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 2},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 151},
  [329] = {.lex_state = 151},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 151},
  [332] = {.lex_state = 151},
  [333] = {.lex_state = 151},
  [334] = {.lex_state = 151},
  [335] = {.lex_state = 151},
  [336] = {.lex_state = 151},
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
    [sym_source_file] = STATE(301),
    [sym_include] = STATE(6),
    [sym_namespace_decl] = STATE(14),
    [sym_attribute_decl] = STATE(14),
    [sym_type_decl] = STATE(14),
    [sym_enum_decl] = STATE(14),
    [sym_union_decl] = STATE(14),
    [sym_object] = STATE(14),
    [sym_root_decl] = STATE(14),
    [sym_file_extension_decl] = STATE(14),
    [sym_file_identifier_decl] = STATE(14),
    [sym_rpc_decl] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(14),
    [aux_sym_type_decl_repeat1] = STATE(101),
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
  [0] = 24,
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
    STATE(92), 1,
      sym_plus_minus_constant,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(148), 1,
      sym_inf_token,
    STATE(151), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_scalar,
    STATE(156), 1,
      sym_float_lit,
    STATE(157), 1,
      sym_string_constant,
    STATE(165), 1,
      sym_object,
    STATE(166), 1,
      sym_single_value,
    STATE(231), 1,
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
    STATE(154), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [79] = 24,
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
    STATE(92), 1,
      sym_plus_minus_constant,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(148), 1,
      sym_inf_token,
    STATE(151), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_scalar,
    STATE(156), 1,
      sym_float_lit,
    STATE(157), 1,
      sym_string_constant,
    STATE(165), 1,
      sym_object,
    STATE(166), 1,
      sym_single_value,
    STATE(217), 1,
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
    STATE(154), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [158] = 24,
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
    STATE(92), 1,
      sym_plus_minus_constant,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(148), 1,
      sym_inf_token,
    STATE(151), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_scalar,
    STATE(156), 1,
      sym_float_lit,
    STATE(157), 1,
      sym_string_constant,
    STATE(165), 1,
      sym_object,
    STATE(166), 1,
      sym_single_value,
    STATE(233), 1,
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
    STATE(154), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [237] = 24,
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
    STATE(92), 1,
      sym_plus_minus_constant,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(148), 1,
      sym_inf_token,
    STATE(151), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_scalar,
    STATE(156), 1,
      sym_float_lit,
    STATE(157), 1,
      sym_string_constant,
    STATE(165), 1,
      sym_object,
    STATE(166), 1,
      sym_single_value,
    STATE(275), 1,
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
    STATE(154), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [316] = 17,
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
    STATE(101), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(18), 2,
      sym_include,
      aux_sym_source_file_repeat1,
    STATE(15), 11,
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
  [380] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(284), 1,
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
  [420] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(235), 1,
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
  [460] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(220), 1,
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
  [500] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(184), 1,
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
  [540] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(272), 1,
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
  [580] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(283), 1,
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
  [620] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_full_ident,
    STATE(170), 1,
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
  [660] = 15,
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
    STATE(101), 1,
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
  [717] = 15,
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
    STATE(101), 1,
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
  [774] = 15,
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
    STATE(101), 1,
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
  [831] = 20,
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
    STATE(92), 1,
      sym_plus_minus_constant,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(148), 1,
      sym_inf_token,
    STATE(151), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_scalar,
    STATE(156), 1,
      sym_float_lit,
    STATE(157), 1,
      sym_string_constant,
    STATE(264), 1,
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
    STATE(154), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [898] = 4,
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
  [924] = 2,
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
  [944] = 2,
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
  [963] = 2,
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
  [982] = 2,
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
  [1001] = 2,
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
  [1020] = 2,
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
  [1039] = 2,
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
  [1058] = 2,
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
  [1077] = 2,
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
  [1096] = 2,
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
  [1115] = 2,
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
  [1134] = 2,
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
  [1153] = 2,
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
  [1172] = 2,
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
  [1191] = 2,
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
  [1210] = 2,
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
  [1229] = 2,
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
  [1248] = 2,
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
  [1267] = 2,
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
  [1286] = 2,
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
  [1305] = 2,
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
  [1324] = 2,
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
  [1343] = 2,
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
  [1362] = 2,
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
  [1381] = 2,
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
  [1400] = 2,
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
  [1419] = 2,
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
  [1438] = 2,
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
  [1457] = 2,
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
  [1476] = 2,
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
  [1495] = 2,
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
  [1514] = 2,
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
  [1533] = 2,
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
  [1552] = 2,
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
  [1571] = 2,
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
  [1590] = 2,
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
  [1609] = 2,
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
  [1628] = 2,
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
  [1647] = 2,
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
  [1666] = 2,
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
  [1685] = 2,
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
  [1704] = 2,
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
  [1723] = 2,
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
  [1742] = 2,
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
  [1761] = 2,
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
  [1780] = 2,
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
  [1799] = 2,
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
  [1818] = 2,
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
  [1837] = 2,
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
  [1856] = 2,
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
  [1875] = 2,
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
  [1894] = 2,
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
  [1913] = 2,
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
  [1932] = 2,
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
  [1951] = 2,
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
  [1970] = 2,
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
  [1989] = 2,
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
  [2008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 13,
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
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 13,
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
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 13,
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
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 13,
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
  [2084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 13,
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
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 13,
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
  [2122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 13,
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
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 13,
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
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 13,
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
  [2179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 13,
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
  [2198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 13,
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
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 13,
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
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 13,
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
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 13,
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
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 13,
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
  [2293] = 2,
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
  [2312] = 10,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(49), 1,
      anon_sym_inf,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_infinity,
    STATE(115), 1,
      sym_int_lit,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(133), 1,
      sym_float_lit,
    STATE(148), 1,
      sym_inf_token,
    ACTIONS(43), 2,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
    ACTIONS(47), 2,
      aux_sym_float_lit_token1,
      sym_nan_token,
  [2345] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(237), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2365] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(95), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(242), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2385] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(93), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(246), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2405] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(237), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_documentation,
    STATE(97), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(251), 7,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_union,
      anon_sym_rpc_service,
  [2439] = 9,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_decimal_lit_token1,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(134), 1,
      sym_plus_minus_constant,
    STATE(266), 1,
      sym_int_constant,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
  [2468] = 9,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_decimal_lit_token1,
    STATE(123), 1,
      sym_decimal_lit,
    STATE(125), 1,
      sym_int_lit,
    STATE(134), 1,
      sym_plus_minus_constant,
    STATE(276), 1,
      sym_int_constant,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 8,
      sym_documentation,
      anon_sym_table,
      anon_sym_struct,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_union,
      anon_sym_rpc_service,
  [2511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(257), 1,
      anon_sym_table,
    ACTIONS(259), 1,
      anon_sym_struct,
    ACTIONS(261), 1,
      anon_sym_enum,
    ACTIONS(263), 1,
      anon_sym_union,
    ACTIONS(265), 1,
      anon_sym_rpc_service,
    STATE(97), 1,
      aux_sym_type_decl_repeat1,
  [2536] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(267), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2549] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(269), 3,
      aux_sym_decimal_lit_token1,
      anon_sym_0,
      anon_sym_inf,
    ACTIONS(271), 4,
      sym_hex_lit,
      aux_sym_float_lit_token1,
      anon_sym_infinity,
      sym_nan_token,
  [2564] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2577] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(275), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [2590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(251), 1,
      aux_sym_type_decl_repeat1,
    STATE(110), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(106), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2650] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(127), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_documentation,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(251), 1,
      aux_sym_type_decl_repeat1,
    STATE(110), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2690] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_type_decl_repeat1,
    STATE(107), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2710] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(113), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2730] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(118), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2770] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(124), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_type_decl_repeat1,
    STATE(110), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(116), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_documentation,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2902] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2914] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2946] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_type_decl_repeat1,
    STATE(119), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [2978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_decl_repeat1,
    STATE(121), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat2,
  [2998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(207), 1,
      sym_union_field_decl,
    STATE(208), 1,
      sym_full_ident,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
  [3055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3074] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3085] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3096] = 6,
    ACTIONS(43), 1,
      anon_sym_0,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym_decimal_lit_token1,
    STATE(115), 1,
      sym_int_lit,
    STATE(123), 1,
      sym_decimal_lit,
  [3115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_type_decl_repeat1,
    STATE(202), 1,
      aux_sym_object_repeat1,
  [3153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_type_decl_repeat1,
    STATE(196), 1,
      aux_sym_object_repeat1,
  [3210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(191), 1,
      sym_union_field_decl,
    STATE(192), 1,
      sym_full_ident,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
  [3229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(221), 1,
      sym_union_field_decl,
    STATE(222), 1,
      sym_full_ident,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
  [3286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3305] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3316] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(242), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3352] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(379), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3363] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3393] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3404] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3415] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3434] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3464] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3475] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(238), 1,
      sym_union_field_decl,
    STATE(239), 1,
      sym_full_ident,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
  [3505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3524] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(401), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      aux_sym_type_decl_repeat1,
    STATE(260), 1,
      aux_sym_object_repeat1,
  [3573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_type_decl_repeat1,
    STATE(261), 1,
      aux_sym_object_repeat1,
  [3592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3611] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3621] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(413), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      aux_sym_string_constant_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    STATE(167), 1,
      aux_sym_string_constant_repeat1,
  [3647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(241), 1,
      sym_enum_val_decl,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
  [3663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_string_constant_token1,
    ACTIONS(427), 1,
      sym_escape_sequence,
    STATE(172), 1,
      aux_sym_string_constant_repeat1,
  [3679] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_metadata,
  [3695] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      aux_sym_string_constant_token1,
    ACTIONS(441), 1,
      sym_escape_sequence,
    STATE(167), 1,
      aux_sym_string_constant_repeat1,
  [3721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(227), 1,
      sym_enum_val_decl,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
  [3737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
    STATE(281), 1,
      sym_enum_val_decl,
  [3753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(200), 1,
      sym_enum_val_decl,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
  [3769] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(244), 1,
      aux_sym_type_decl_repeat1,
    STATE(274), 1,
      sym_union_field_decl,
  [3785] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    STATE(180), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3809] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_documentation,
    STATE(97), 1,
      aux_sym_type_decl_repeat1,
    ACTIONS(447), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3833] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3843] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3853] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3863] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(297), 1,
      sym_metadata,
  [3879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(206), 1,
      sym_enum_val_decl,
    STATE(243), 1,
      aux_sym_type_decl_repeat1,
  [3895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(453), 1,
      sym_documentation,
    STATE(186), 1,
      aux_sym_type_decl_repeat1,
  [3908] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_union_decl_repeat2,
  [3921] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_union_decl_repeat1,
  [3934] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(277), 1,
      sym_full_ident,
  [3947] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_union_decl_repeat2,
  [3960] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_union_decl_repeat1,
  [3973] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_union_decl_repeat2,
  [3986] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_metadata,
  [3999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4008] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_metadata_repeat1,
  [4021] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_object_repeat1,
  [4034] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_object_repeat1,
  [4047] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [4060] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4071] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_enum_decl_repeat1,
  [4084] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_union_decl_repeat1,
  [4097] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_object_repeat1,
  [4110] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4123] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4136] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_union_decl_repeat2,
  [4149] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_enum_decl_repeat1,
  [4162] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_union_decl_repeat1,
  [4175] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_union_decl_repeat2,
  [4188] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_metadata,
  [4201] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4214] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      sym_metadata,
  [4227] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_union_decl_repeat1,
  [4240] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      sym_metadata,
  [4253] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4266] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_union_decl_repeat2,
  [4279] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(285), 1,
      sym_metadata,
  [4292] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    STATE(308), 1,
      sym_metadata,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4323] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    STATE(306), 1,
      sym_metadata,
  [4336] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_union_decl_repeat1,
  [4349] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_union_decl_repeat2,
  [4362] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [4375] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [4388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_type_decl_repeat1,
  [4401] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [4414] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_enum_decl_repeat1,
  [4427] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COLON,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4438] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_metadata_repeat1,
  [4451] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4464] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_value_repeat1,
  [4477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4486] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym_metadata,
  [4499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4508] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_metadata,
  [4521] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      sym_metadata,
  [4534] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_metadata_repeat1,
  [4547] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_union_decl_repeat1,
  [4560] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_union_decl_repeat2,
  [4573] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(621), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4584] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_enum_decl_repeat1,
  [4597] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_enum_decl_repeat1,
  [4610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_type_decl_repeat1,
  [4623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_type_decl_repeat1,
  [4636] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_value_repeat1,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4676] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    STATE(323), 1,
      sym_metadata,
  [4689] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_union_decl_repeat1,
  [4702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_documentation,
    ACTIONS(652), 1,
      sym_identifier,
    STATE(186), 1,
      aux_sym_type_decl_repeat1,
  [4715] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      aux_sym_value_repeat1,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 3,
      sym_documentation,
      anon_sym_RBRACE,
      sym_identifier,
  [4764] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_full_ident,
  [4777] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_union_decl_repeat2,
  [4790] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_union_decl_repeat1,
  [4803] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_object_repeat1,
  [4816] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_object_repeat1,
  [4829] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(277), 1,
      sym_full_ident,
  [4842] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(334), 1,
      sym_string_constant,
  [4852] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4860] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(268), 1,
      sym_field_and_value,
  [4870] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4878] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(286), 1,
      sym_full_ident,
  [4888] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4896] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4904] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [4912] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(229), 1,
      sym_field_and_value,
  [4922] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4930] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    ACTIONS(698), 1,
      sym_identifier,
  [4940] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4948] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4956] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4964] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4972] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(332), 1,
      sym_string_constant,
  [4982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym_documentation,
      sym_identifier,
  [4990] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(277), 1,
      sym_full_ident,
  [5000] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5008] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(333), 1,
      sym_string_constant,
  [5018] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5026] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
  [5033] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
  [5040] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SEMI,
  [5047] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
  [5054] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_identifier,
  [5061] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
  [5068] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
  [5075] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym_identifier,
  [5082] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [5089] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
  [5096] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_identifier,
  [5103] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [5110] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COLON,
  [5117] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SEMI,
  [5124] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SEMI,
  [5131] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_SEMI,
  [5138] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_identifier,
  [5145] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(744), 1,
      ts_builtin_sym_end,
  [5152] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_identifier,
  [5159] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(748), 1,
      sym_identifier,
  [5166] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
  [5173] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
  [5180] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
  [5187] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_COLON,
  [5194] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [5201] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [5208] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COLON,
  [5215] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [5222] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
  [5229] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_identifier,
  [5236] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_identifier,
  [5243] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [5250] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
  [5257] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
  [5264] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
  [5271] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACE,
  [5278] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym_identifier,
  [5285] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [5292] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [5299] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [5306] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
  [5313] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_identifier,
  [5320] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [5327] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_identifier,
  [5334] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [5341] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DQUOTE,
  [5348] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
  [5355] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
  [5362] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [5369] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [5376] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [5383] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_COLON,
  [5390] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 316,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 500,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 580,
  [SMALL_STATE(13)] = 620,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 717,
  [SMALL_STATE(16)] = 774,
  [SMALL_STATE(17)] = 831,
  [SMALL_STATE(18)] = 898,
  [SMALL_STATE(19)] = 924,
  [SMALL_STATE(20)] = 944,
  [SMALL_STATE(21)] = 963,
  [SMALL_STATE(22)] = 982,
  [SMALL_STATE(23)] = 1001,
  [SMALL_STATE(24)] = 1020,
  [SMALL_STATE(25)] = 1039,
  [SMALL_STATE(26)] = 1058,
  [SMALL_STATE(27)] = 1077,
  [SMALL_STATE(28)] = 1096,
  [SMALL_STATE(29)] = 1115,
  [SMALL_STATE(30)] = 1134,
  [SMALL_STATE(31)] = 1153,
  [SMALL_STATE(32)] = 1172,
  [SMALL_STATE(33)] = 1191,
  [SMALL_STATE(34)] = 1210,
  [SMALL_STATE(35)] = 1229,
  [SMALL_STATE(36)] = 1248,
  [SMALL_STATE(37)] = 1267,
  [SMALL_STATE(38)] = 1286,
  [SMALL_STATE(39)] = 1305,
  [SMALL_STATE(40)] = 1324,
  [SMALL_STATE(41)] = 1343,
  [SMALL_STATE(42)] = 1362,
  [SMALL_STATE(43)] = 1381,
  [SMALL_STATE(44)] = 1400,
  [SMALL_STATE(45)] = 1419,
  [SMALL_STATE(46)] = 1438,
  [SMALL_STATE(47)] = 1457,
  [SMALL_STATE(48)] = 1476,
  [SMALL_STATE(49)] = 1495,
  [SMALL_STATE(50)] = 1514,
  [SMALL_STATE(51)] = 1533,
  [SMALL_STATE(52)] = 1552,
  [SMALL_STATE(53)] = 1571,
  [SMALL_STATE(54)] = 1590,
  [SMALL_STATE(55)] = 1609,
  [SMALL_STATE(56)] = 1628,
  [SMALL_STATE(57)] = 1647,
  [SMALL_STATE(58)] = 1666,
  [SMALL_STATE(59)] = 1685,
  [SMALL_STATE(60)] = 1704,
  [SMALL_STATE(61)] = 1723,
  [SMALL_STATE(62)] = 1742,
  [SMALL_STATE(63)] = 1761,
  [SMALL_STATE(64)] = 1780,
  [SMALL_STATE(65)] = 1799,
  [SMALL_STATE(66)] = 1818,
  [SMALL_STATE(67)] = 1837,
  [SMALL_STATE(68)] = 1856,
  [SMALL_STATE(69)] = 1875,
  [SMALL_STATE(70)] = 1894,
  [SMALL_STATE(71)] = 1913,
  [SMALL_STATE(72)] = 1932,
  [SMALL_STATE(73)] = 1951,
  [SMALL_STATE(74)] = 1970,
  [SMALL_STATE(75)] = 1989,
  [SMALL_STATE(76)] = 2008,
  [SMALL_STATE(77)] = 2027,
  [SMALL_STATE(78)] = 2046,
  [SMALL_STATE(79)] = 2065,
  [SMALL_STATE(80)] = 2084,
  [SMALL_STATE(81)] = 2103,
  [SMALL_STATE(82)] = 2122,
  [SMALL_STATE(83)] = 2141,
  [SMALL_STATE(84)] = 2160,
  [SMALL_STATE(85)] = 2179,
  [SMALL_STATE(86)] = 2198,
  [SMALL_STATE(87)] = 2217,
  [SMALL_STATE(88)] = 2236,
  [SMALL_STATE(89)] = 2255,
  [SMALL_STATE(90)] = 2274,
  [SMALL_STATE(91)] = 2293,
  [SMALL_STATE(92)] = 2312,
  [SMALL_STATE(93)] = 2345,
  [SMALL_STATE(94)] = 2365,
  [SMALL_STATE(95)] = 2385,
  [SMALL_STATE(96)] = 2405,
  [SMALL_STATE(97)] = 2420,
  [SMALL_STATE(98)] = 2439,
  [SMALL_STATE(99)] = 2468,
  [SMALL_STATE(100)] = 2497,
  [SMALL_STATE(101)] = 2511,
  [SMALL_STATE(102)] = 2536,
  [SMALL_STATE(103)] = 2549,
  [SMALL_STATE(104)] = 2564,
  [SMALL_STATE(105)] = 2577,
  [SMALL_STATE(106)] = 2590,
  [SMALL_STATE(107)] = 2610,
  [SMALL_STATE(108)] = 2630,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2670,
  [SMALL_STATE(111)] = 2690,
  [SMALL_STATE(112)] = 2710,
  [SMALL_STATE(113)] = 2730,
  [SMALL_STATE(114)] = 2750,
  [SMALL_STATE(115)] = 2770,
  [SMALL_STATE(116)] = 2782,
  [SMALL_STATE(117)] = 2802,
  [SMALL_STATE(118)] = 2822,
  [SMALL_STATE(119)] = 2842,
  [SMALL_STATE(120)] = 2862,
  [SMALL_STATE(121)] = 2882,
  [SMALL_STATE(122)] = 2902,
  [SMALL_STATE(123)] = 2914,
  [SMALL_STATE(124)] = 2926,
  [SMALL_STATE(125)] = 2946,
  [SMALL_STATE(126)] = 2958,
  [SMALL_STATE(127)] = 2978,
  [SMALL_STATE(128)] = 2998,
  [SMALL_STATE(129)] = 3017,
  [SMALL_STATE(130)] = 3036,
  [SMALL_STATE(131)] = 3055,
  [SMALL_STATE(132)] = 3074,
  [SMALL_STATE(133)] = 3085,
  [SMALL_STATE(134)] = 3096,
  [SMALL_STATE(135)] = 3115,
  [SMALL_STATE(136)] = 3134,
  [SMALL_STATE(137)] = 3153,
  [SMALL_STATE(138)] = 3172,
  [SMALL_STATE(139)] = 3191,
  [SMALL_STATE(140)] = 3210,
  [SMALL_STATE(141)] = 3229,
  [SMALL_STATE(142)] = 3248,
  [SMALL_STATE(143)] = 3267,
  [SMALL_STATE(144)] = 3286,
  [SMALL_STATE(145)] = 3305,
  [SMALL_STATE(146)] = 3316,
  [SMALL_STATE(147)] = 3333,
  [SMALL_STATE(148)] = 3352,
  [SMALL_STATE(149)] = 3363,
  [SMALL_STATE(150)] = 3374,
  [SMALL_STATE(151)] = 3393,
  [SMALL_STATE(152)] = 3404,
  [SMALL_STATE(153)] = 3415,
  [SMALL_STATE(154)] = 3434,
  [SMALL_STATE(155)] = 3445,
  [SMALL_STATE(156)] = 3464,
  [SMALL_STATE(157)] = 3475,
  [SMALL_STATE(158)] = 3486,
  [SMALL_STATE(159)] = 3505,
  [SMALL_STATE(160)] = 3524,
  [SMALL_STATE(161)] = 3535,
  [SMALL_STATE(162)] = 3554,
  [SMALL_STATE(163)] = 3573,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3611,
  [SMALL_STATE(166)] = 3621,
  [SMALL_STATE(167)] = 3631,
  [SMALL_STATE(168)] = 3647,
  [SMALL_STATE(169)] = 3663,
  [SMALL_STATE(170)] = 3679,
  [SMALL_STATE(171)] = 3695,
  [SMALL_STATE(172)] = 3705,
  [SMALL_STATE(173)] = 3721,
  [SMALL_STATE(174)] = 3737,
  [SMALL_STATE(175)] = 3753,
  [SMALL_STATE(176)] = 3769,
  [SMALL_STATE(177)] = 3785,
  [SMALL_STATE(178)] = 3795,
  [SMALL_STATE(179)] = 3809,
  [SMALL_STATE(180)] = 3819,
  [SMALL_STATE(181)] = 3833,
  [SMALL_STATE(182)] = 3843,
  [SMALL_STATE(183)] = 3853,
  [SMALL_STATE(184)] = 3863,
  [SMALL_STATE(185)] = 3879,
  [SMALL_STATE(186)] = 3895,
  [SMALL_STATE(187)] = 3908,
  [SMALL_STATE(188)] = 3921,
  [SMALL_STATE(189)] = 3934,
  [SMALL_STATE(190)] = 3947,
  [SMALL_STATE(191)] = 3960,
  [SMALL_STATE(192)] = 3973,
  [SMALL_STATE(193)] = 3986,
  [SMALL_STATE(194)] = 3999,
  [SMALL_STATE(195)] = 4008,
  [SMALL_STATE(196)] = 4021,
  [SMALL_STATE(197)] = 4034,
  [SMALL_STATE(198)] = 4047,
  [SMALL_STATE(199)] = 4060,
  [SMALL_STATE(200)] = 4071,
  [SMALL_STATE(201)] = 4084,
  [SMALL_STATE(202)] = 4097,
  [SMALL_STATE(203)] = 4110,
  [SMALL_STATE(204)] = 4123,
  [SMALL_STATE(205)] = 4136,
  [SMALL_STATE(206)] = 4149,
  [SMALL_STATE(207)] = 4162,
  [SMALL_STATE(208)] = 4175,
  [SMALL_STATE(209)] = 4188,
  [SMALL_STATE(210)] = 4201,
  [SMALL_STATE(211)] = 4214,
  [SMALL_STATE(212)] = 4227,
  [SMALL_STATE(213)] = 4240,
  [SMALL_STATE(214)] = 4253,
  [SMALL_STATE(215)] = 4266,
  [SMALL_STATE(216)] = 4279,
  [SMALL_STATE(217)] = 4292,
  [SMALL_STATE(218)] = 4305,
  [SMALL_STATE(219)] = 4314,
  [SMALL_STATE(220)] = 4323,
  [SMALL_STATE(221)] = 4336,
  [SMALL_STATE(222)] = 4349,
  [SMALL_STATE(223)] = 4362,
  [SMALL_STATE(224)] = 4375,
  [SMALL_STATE(225)] = 4388,
  [SMALL_STATE(226)] = 4401,
  [SMALL_STATE(227)] = 4414,
  [SMALL_STATE(228)] = 4427,
  [SMALL_STATE(229)] = 4438,
  [SMALL_STATE(230)] = 4451,
  [SMALL_STATE(231)] = 4464,
  [SMALL_STATE(232)] = 4477,
  [SMALL_STATE(233)] = 4486,
  [SMALL_STATE(234)] = 4499,
  [SMALL_STATE(235)] = 4508,
  [SMALL_STATE(236)] = 4521,
  [SMALL_STATE(237)] = 4534,
  [SMALL_STATE(238)] = 4547,
  [SMALL_STATE(239)] = 4560,
  [SMALL_STATE(240)] = 4573,
  [SMALL_STATE(241)] = 4584,
  [SMALL_STATE(242)] = 4597,
  [SMALL_STATE(243)] = 4610,
  [SMALL_STATE(244)] = 4623,
  [SMALL_STATE(245)] = 4636,
  [SMALL_STATE(246)] = 4649,
  [SMALL_STATE(247)] = 4658,
  [SMALL_STATE(248)] = 4667,
  [SMALL_STATE(249)] = 4676,
  [SMALL_STATE(250)] = 4689,
  [SMALL_STATE(251)] = 4702,
  [SMALL_STATE(252)] = 4715,
  [SMALL_STATE(253)] = 4728,
  [SMALL_STATE(254)] = 4737,
  [SMALL_STATE(255)] = 4746,
  [SMALL_STATE(256)] = 4755,
  [SMALL_STATE(257)] = 4764,
  [SMALL_STATE(258)] = 4777,
  [SMALL_STATE(259)] = 4790,
  [SMALL_STATE(260)] = 4803,
  [SMALL_STATE(261)] = 4816,
  [SMALL_STATE(262)] = 4829,
  [SMALL_STATE(263)] = 4842,
  [SMALL_STATE(264)] = 4852,
  [SMALL_STATE(265)] = 4860,
  [SMALL_STATE(266)] = 4870,
  [SMALL_STATE(267)] = 4878,
  [SMALL_STATE(268)] = 4888,
  [SMALL_STATE(269)] = 4896,
  [SMALL_STATE(270)] = 4904,
  [SMALL_STATE(271)] = 4912,
  [SMALL_STATE(272)] = 4922,
  [SMALL_STATE(273)] = 4930,
  [SMALL_STATE(274)] = 4940,
  [SMALL_STATE(275)] = 4948,
  [SMALL_STATE(276)] = 4956,
  [SMALL_STATE(277)] = 4964,
  [SMALL_STATE(278)] = 4972,
  [SMALL_STATE(279)] = 4982,
  [SMALL_STATE(280)] = 4990,
  [SMALL_STATE(281)] = 5000,
  [SMALL_STATE(282)] = 5008,
  [SMALL_STATE(283)] = 5018,
  [SMALL_STATE(284)] = 5026,
  [SMALL_STATE(285)] = 5033,
  [SMALL_STATE(286)] = 5040,
  [SMALL_STATE(287)] = 5047,
  [SMALL_STATE(288)] = 5054,
  [SMALL_STATE(289)] = 5061,
  [SMALL_STATE(290)] = 5068,
  [SMALL_STATE(291)] = 5075,
  [SMALL_STATE(292)] = 5082,
  [SMALL_STATE(293)] = 5089,
  [SMALL_STATE(294)] = 5096,
  [SMALL_STATE(295)] = 5103,
  [SMALL_STATE(296)] = 5110,
  [SMALL_STATE(297)] = 5117,
  [SMALL_STATE(298)] = 5124,
  [SMALL_STATE(299)] = 5131,
  [SMALL_STATE(300)] = 5138,
  [SMALL_STATE(301)] = 5145,
  [SMALL_STATE(302)] = 5152,
  [SMALL_STATE(303)] = 5159,
  [SMALL_STATE(304)] = 5166,
  [SMALL_STATE(305)] = 5173,
  [SMALL_STATE(306)] = 5180,
  [SMALL_STATE(307)] = 5187,
  [SMALL_STATE(308)] = 5194,
  [SMALL_STATE(309)] = 5201,
  [SMALL_STATE(310)] = 5208,
  [SMALL_STATE(311)] = 5215,
  [SMALL_STATE(312)] = 5222,
  [SMALL_STATE(313)] = 5229,
  [SMALL_STATE(314)] = 5236,
  [SMALL_STATE(315)] = 5243,
  [SMALL_STATE(316)] = 5250,
  [SMALL_STATE(317)] = 5257,
  [SMALL_STATE(318)] = 5264,
  [SMALL_STATE(319)] = 5271,
  [SMALL_STATE(320)] = 5278,
  [SMALL_STATE(321)] = 5285,
  [SMALL_STATE(322)] = 5292,
  [SMALL_STATE(323)] = 5299,
  [SMALL_STATE(324)] = 5306,
  [SMALL_STATE(325)] = 5313,
  [SMALL_STATE(326)] = 5320,
  [SMALL_STATE(327)] = 5327,
  [SMALL_STATE(328)] = 5334,
  [SMALL_STATE(329)] = 5341,
  [SMALL_STATE(330)] = 5348,
  [SMALL_STATE(331)] = 5355,
  [SMALL_STATE(332)] = 5362,
  [SMALL_STATE(333)] = 5369,
  [SMALL_STATE(334)] = 5376,
  [SMALL_STATE(335)] = 5383,
  [SMALL_STATE(336)] = 5390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(100),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(267),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(273),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(314),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(136),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(313),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(302),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(320),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(278),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(263),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(289),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 18),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 11, 0, 77),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_decl, 3, 0, 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension_decl, 3, 0, 8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier_decl, 3, 0, 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, 0, 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 4, 0, 14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 5, 0, 15),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 5, 0, 18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 5, 0, 19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 20),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 21),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 22),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 32),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 34),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 35),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 21),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 37),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 38),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 6, 0, 39),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 6, 0, 40),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, 0, 42),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 44),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 35),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 46),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 47),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 7, 0, 37),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 38),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 48),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 49),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 50),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 7, 0, 51),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_decl, 3, 0, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 42),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 58),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 60),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 46),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 61),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 62),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 48),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 63),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 50),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 64),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 8, 0, 65),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 58),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 60),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 69),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 62),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 70),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 71),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 9, 0, 64),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_decl, 9, 0, 72),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 3, 0, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 69),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 70),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 71),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 77),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 2), SHIFT_REPEAT(100),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 1, 0, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 28),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 13),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(279),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(290),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_lit, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_constant, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inf_token, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 13),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 24),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 25),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 52),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 53),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 73),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 79),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 2), SHIFT_REPEAT(279),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 4, 0, 41),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 2), SHIFT_REPEAT(178),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_val_decl, 2, 0, 43),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 54),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 55),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 59),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 59), SHIFT_REPEAT(174),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 1, 0, 11),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 66),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 67),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 27), SHIFT_REPEAT(265),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 27),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_val_decl, 1, 0, 29),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 74),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 75),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 76),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat1, 2, 0, 33),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat1, 2, 0, 33), SHIFT_REPEAT(176),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 80), SHIFT_REPEAT(5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 80),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 8, 0, 81),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 82),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 83),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 9, 0, 84),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat2, 2, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat2, 2, 0, 0), SHIFT_REPEAT(280),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 3, 0, 23),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_val_decl, 4, 0, 68),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 16),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 26),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 16),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 3, 0, 30),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_decl_repeat1, 2, 0, 31),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 78),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_val_decl, 3, 0, 56),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 57),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 4, 0, 45),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [744] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
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
