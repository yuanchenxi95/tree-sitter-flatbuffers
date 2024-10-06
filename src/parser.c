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
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  sym_decimal_lit = 52,
  sym_octal_lit = 53,
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
  sym_union_dcl = 68,
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
  sym_float_lit = 90,
  sym_inf_token = 91,
  sym_string_constant = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_type_decl_repeat1 = 94,
  aux_sym_enum_decl_repeat1 = 95,
  aux_sym_union_dcl_repeat1 = 96,
  aux_sym_union_dcl_repeat2 = 97,
  aux_sym_object_repeat1 = 98,
  aux_sym_value_repeat1 = 99,
  aux_sym_rpc_decl_repeat1 = 100,
  aux_sym_metadata_repeat1 = 101,
  aux_sym_full_ident_repeat1 = 102,
  aux_sym_string_constant_repeat1 = 103,
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
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
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
  [sym_union_dcl] = "union_dcl",
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
  [sym_float_lit] = "float_lit",
  [sym_inf_token] = "inf_token",
  [sym_string_constant] = "string_constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_decl_repeat1] = "type_decl_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_union_dcl_repeat1] = "union_dcl_repeat1",
  [aux_sym_union_dcl_repeat2] = "union_dcl_repeat2",
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
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
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
  [sym_union_dcl] = sym_union_dcl,
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
  [sym_float_lit] = sym_float_lit,
  [sym_inf_token] = sym_inf_token,
  [sym_string_constant] = sym_string_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_decl_repeat1] = aux_sym_type_decl_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_union_dcl_repeat1] = aux_sym_union_dcl_repeat1,
  [aux_sym_union_dcl_repeat2] = aux_sym_union_dcl_repeat2,
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
  [sym_union_dcl] = {
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
  [aux_sym_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_dcl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_dcl_repeat2] = {
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
  [58] = 16,
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
  [74] = 27,
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
  [116] = 76,
  [117] = 91,
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
  [181] = 148,
  [182] = 182,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '"', 162,
        '(', 222,
        ')', 223,
        '+', 290,
        ',', 169,
        '-', 291,
        '.', 289,
        '/', 5,
        '0', 297,
        ':', 168,
        ';', 159,
        '=', 176,
        '[', 174,
        '\\', 18,
        ']', 175,
        'a', 123,
        'b', 95,
        'd', 93,
        'e', 86,
        'f', 22,
        'i', 80,
        'l', 96,
        'n', 23,
        'r', 100,
        's', 62,
        't', 24,
        'u', 28,
        '{', 165,
        '}', 166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 162,
        '+', 290,
        '-', 291,
        '.', 143,
        '/', 6,
        '0', 297,
        '[', 174,
        'f', 232,
        'i', 254,
        'n', 233,
        't', 270,
        '{', 165,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '}') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 222,
        ')', 223,
        ',', 169,
        '.', 288,
        '/', 6,
        ':', 168,
        ';', 159,
        '=', 176,
        '[', 174,
        ']', 175,
        'b', 266,
        'd', 262,
        'f', 252,
        'i', 259,
        'l', 267,
        's', 246,
        'u', 235,
        '{', 165,
        '}', 166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(319);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(215);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(213);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(217);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '"', 162,
        '(', 222,
        ')', 223,
        '+', 290,
        ',', 169,
        '-', 291,
        '.', 289,
        '/', 5,
        '0', 297,
        ':', 168,
        ';', 159,
        '=', 176,
        '[', 174,
        ']', 175,
        'a', 123,
        'b', 95,
        'd', 93,
        'e', 86,
        'f', 22,
        'i', 80,
        'l', 96,
        'n', 23,
        'r', 100,
        's', 62,
        't', 24,
        'u', 28,
        '{', 165,
        '}', 166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      ADVANCE_MAP(
        '"', 162,
        '(', 222,
        ')', 223,
        '+', 290,
        ',', 169,
        '-', 291,
        '.', 143,
        '/', 6,
        '0', 297,
        ':', 168,
        ';', 159,
        '=', 176,
        ']', 175,
        'i', 85,
        'n', 27,
        '{', 165,
        '}', 166,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(155);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_documentation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(230);
      if (lookahead == '3') ADVANCE(224);
      if (lookahead == '6') ADVANCE(227);
      if (lookahead == '8') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(231);
      if (lookahead == '3') ADVANCE(225);
      if (lookahead == '6') ADVANCE(228);
      if (lookahead == '8') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(226);
      if (lookahead == '6') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(264);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == 'y') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_plus_token);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_minus_token);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(146);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_infinity);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_infinity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_nan_token);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_nan_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(319);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 155},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [35] = {.lex_state = 155},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 155},
  [41] = {.lex_state = 155},
  [42] = {.lex_state = 155},
  [43] = {.lex_state = 155},
  [44] = {.lex_state = 155},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 155},
  [47] = {.lex_state = 155},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 155},
  [50] = {.lex_state = 155},
  [51] = {.lex_state = 155},
  [52] = {.lex_state = 155},
  [53] = {.lex_state = 155},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 155},
  [56] = {.lex_state = 155},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 155},
  [59] = {.lex_state = 155},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 155},
  [70] = {.lex_state = 155},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 155},
  [73] = {.lex_state = 155},
  [74] = {.lex_state = 155},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 155},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 155},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 155},
  [81] = {.lex_state = 155},
  [82] = {.lex_state = 155},
  [83] = {.lex_state = 155},
  [84] = {.lex_state = 155},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 155},
  [87] = {.lex_state = 155},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 155},
  [90] = {.lex_state = 155},
  [91] = {.lex_state = 155},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 155},
  [95] = {.lex_state = 155},
  [96] = {.lex_state = 155},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 155},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 155},
  [102] = {.lex_state = 155},
  [103] = {.lex_state = 155},
  [104] = {.lex_state = 155},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 155},
  [107] = {.lex_state = 155},
  [108] = {.lex_state = 155},
  [109] = {.lex_state = 155},
  [110] = {.lex_state = 155},
  [111] = {.lex_state = 155},
  [112] = {.lex_state = 155},
  [113] = {.lex_state = 155},
  [114] = {.lex_state = 155},
  [115] = {.lex_state = 155},
  [116] = {.lex_state = 155},
  [117] = {.lex_state = 155},
  [118] = {.lex_state = 155},
  [119] = {.lex_state = 155},
  [120] = {.lex_state = 155},
  [121] = {.lex_state = 155},
  [122] = {.lex_state = 155},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 155},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 155},
  [131] = {.lex_state = 155},
  [132] = {.lex_state = 155},
  [133] = {.lex_state = 155},
  [134] = {.lex_state = 155},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 155},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 155},
  [140] = {.lex_state = 155},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 155},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 155},
  [150] = {.lex_state = 155},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 155},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 155},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 155},
  [157] = {.lex_state = 155},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 155},
  [162] = {.lex_state = 155},
  [163] = {.lex_state = 155},
  [164] = {.lex_state = 155},
  [165] = {.lex_state = 155},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 155},
  [168] = {.lex_state = 155},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 155},
  [171] = {.lex_state = 155},
  [172] = {.lex_state = 155},
  [173] = {.lex_state = 155},
  [174] = {.lex_state = 155},
  [175] = {.lex_state = 155},
  [176] = {.lex_state = 155},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 155},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 155},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 155},
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
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [aux_sym_float_lit_token1] = ACTIONS(1),
    [anon_sym_infinity] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [sym_nan_token] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(165),
    [sym_include] = STATE(9),
    [anon_sym_include] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_hex_lit,
    ACTIONS(25), 1,
      aux_sym_float_lit_token1,
    ACTIONS(29), 1,
      sym_nan_token,
    STATE(35), 1,
      sym_plus_minus_constant,
    STATE(44), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_float_lit,
    STATE(55), 1,
      sym_inf_token,
    STATE(104), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(19), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(27), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(69), 2,
      sym_object,
      sym_single_value,
    STATE(47), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
    STATE(50), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
  [70] = 20,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_hex_lit,
    ACTIONS(25), 1,
      aux_sym_float_lit_token1,
    ACTIONS(29), 1,
      sym_nan_token,
    STATE(35), 1,
      sym_plus_minus_constant,
    STATE(44), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_float_lit,
    STATE(55), 1,
      sym_inf_token,
    STATE(96), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(19), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(27), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(69), 2,
      sym_object,
      sym_single_value,
    STATE(47), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
    STATE(50), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
  [140] = 20,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_hex_lit,
    ACTIONS(25), 1,
      aux_sym_float_lit_token1,
    ACTIONS(29), 1,
      sym_nan_token,
    STATE(35), 1,
      sym_plus_minus_constant,
    STATE(44), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_float_lit,
    STATE(55), 1,
      sym_inf_token,
    STATE(143), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(19), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(27), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(69), 2,
      sym_object,
      sym_single_value,
    STATE(47), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
    STATE(50), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
  [210] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_full_ident,
    STATE(59), 1,
      sym_type,
    ACTIONS(33), 22,
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
  [250] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_full_ident,
    STATE(86), 1,
      sym_type,
    ACTIONS(33), 22,
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
  [290] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_full_ident,
    STATE(152), 1,
      sym_type,
    ACTIONS(33), 22,
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
  [330] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_full_ident,
    STATE(120), 1,
      sym_type,
    ACTIONS(33), 22,
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
  [370] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_documentation,
    ACTIONS(39), 1,
      anon_sym_namespace,
    ACTIONS(41), 1,
      anon_sym_attribute,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_enum,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_root_type,
    ACTIONS(53), 1,
      anon_sym_file_extension,
    ACTIONS(55), 1,
      anon_sym_file_identifier,
    ACTIONS(57), 1,
      anon_sym_rpc_service,
    ACTIONS(43), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(12), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_dcl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [424] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_documentation,
    ACTIONS(64), 1,
      anon_sym_namespace,
    ACTIONS(67), 1,
      anon_sym_attribute,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_enum,
    ACTIONS(79), 1,
      anon_sym_union,
    ACTIONS(82), 1,
      anon_sym_root_type,
    ACTIONS(85), 1,
      anon_sym_file_extension,
    ACTIONS(88), 1,
      anon_sym_file_identifier,
    ACTIONS(91), 1,
      anon_sym_rpc_service,
    ACTIONS(70), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(10), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_dcl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [478] = 17,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_hex_lit,
    ACTIONS(25), 1,
      aux_sym_float_lit_token1,
    ACTIONS(29), 1,
      sym_nan_token,
    STATE(35), 1,
      sym_plus_minus_constant,
    STATE(44), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_float_lit,
    STATE(55), 1,
      sym_inf_token,
    STATE(134), 1,
      sym_single_value,
    ACTIONS(17), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(19), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(27), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(47), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
    STATE(50), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
  [538] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_namespace,
    ACTIONS(41), 1,
      anon_sym_attribute,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_enum,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_root_type,
    ACTIONS(53), 1,
      anon_sym_file_extension,
    ACTIONS(55), 1,
      anon_sym_file_identifier,
    ACTIONS(57), 1,
      anon_sym_rpc_service,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_documentation,
    ACTIONS(43), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(10), 11,
      sym_namespace_decl,
      sym_attribute_decl,
      sym_type_decl,
      sym_enum_decl,
      sym_union_dcl,
      sym_object,
      sym_root_decl,
      sym_file_extension_decl,
      sym_file_identifier_decl,
      sym_rpc_decl,
      aux_sym_source_file_repeat1,
  [592] = 2,
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
  [611] = 2,
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
  [630] = 2,
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
  [649] = 2,
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
  [668] = 2,
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
  [687] = 2,
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
  [706] = 2,
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
  [725] = 2,
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
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 13,
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
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 13,
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
  [782] = 2,
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
  [801] = 2,
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
  [820] = 2,
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
  [839] = 2,
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
  [858] = 2,
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
  [877] = 2,
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
  [896] = 2,
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
  [915] = 2,
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
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 13,
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
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 13,
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
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 13,
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
  [991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 13,
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
  [1010] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_hex_lit,
    ACTIONS(27), 1,
      anon_sym_inf,
    ACTIONS(142), 1,
      anon_sym_infinity,
    STATE(45), 1,
      sym_int_lit,
    STATE(52), 1,
      sym_float_lit,
    STATE(55), 1,
      sym_inf_token,
    ACTIONS(21), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(25), 2,
      aux_sym_float_lit_token1,
      sym_nan_token,
  [1040] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(144), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1060] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(148), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1080] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(153), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1100] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(148), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1115] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_octal_lit,
    STATE(44), 1,
      sym_int_lit,
    STATE(70), 1,
      sym_plus_minus_constant,
    STATE(130), 1,
      sym_int_constant,
    ACTIONS(17), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(23), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [1139] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(155), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [1152] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(157), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [1165] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(159), 3,
      sym_decimal_lit,
      sym_octal_lit,
      anon_sym_inf,
    ACTIONS(161), 4,
      sym_hex_lit,
      aux_sym_float_lit_token1,
      anon_sym_infinity,
      sym_nan_token,
  [1180] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(163), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1192] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1204] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(167), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1216] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1227] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1238] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1249] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1260] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1271] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1282] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1293] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_COLON,
    STATE(36), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1310] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1321] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1332] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(57), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1346] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1356] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_metadata,
  [1372] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(67), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      aux_sym_string_constant_token1,
    ACTIONS(208), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_string_constant_repeat1,
  [1402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      aux_sym_string_constant_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym_string_constant_repeat1,
  [1418] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(57), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1432] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1446] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(65), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1460] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1474] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_string_constant_token1,
    ACTIONS(237), 1,
      sym_escape_sequence,
    STATE(61), 1,
      aux_sym_string_constant_repeat1,
  [1504] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(239), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1514] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_octal_lit,
    STATE(45), 1,
      sym_int_lit,
    ACTIONS(23), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [1528] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(65), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1542] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(241), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1552] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1562] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(126), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1572] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(119), 1,
      sym_enumval_decl,
  [1585] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_object_repeat1,
  [1598] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_field_decl,
  [1611] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_union_dcl_repeat1,
  [1624] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(122), 1,
      sym_full_ident,
  [1637] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_union_dcl_repeat2,
  [1650] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_union_dcl_repeat1,
  [1663] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_union_dcl_repeat2,
  [1676] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_metadata_repeat1,
  [1689] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_metadata,
  [1702] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(94), 1,
      sym_union_field_decl,
    STATE(118), 1,
      sym_full_ident,
  [1715] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_metadata,
  [1728] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_metadata_repeat1,
  [1741] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_enumval_decl,
  [1754] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_enum_decl_repeat1,
  [1767] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_enum_decl_repeat1,
  [1780] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [1793] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_union_field_decl,
  [1806] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym_full_ident,
  [1819] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_union_dcl_repeat1,
  [1832] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1843] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_metadata,
  [1856] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(106), 1,
      sym_full_ident,
    STATE(111), 1,
      sym_union_field_decl,
  [1869] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_metadata_repeat1,
  [1882] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_union_field_decl,
  [1895] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_enumval_decl,
  [1908] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_enum_decl_repeat1,
  [1921] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_enum_decl_repeat1,
  [1934] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_union_dcl_repeat1,
  [1947] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_value_repeat1,
  [1960] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym_full_ident,
  [1973] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_union_dcl_repeat2,
  [1986] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_metadata,
  [1999] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_union_dcl_repeat2,
  [2012] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_metadata,
  [2025] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_value_repeat1,
  [2038] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_union_dcl_repeat1,
  [2051] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2064] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_value_repeat1,
  [2077] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2088] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_enum_decl_repeat1,
  [2101] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_object_repeat1,
  [2114] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2127] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_union_dcl_repeat2,
  [2140] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2148] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2156] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2164] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2172] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(139), 1,
      sym_field_and_value,
  [2182] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2190] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2198] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(115), 1,
      sym_enumval_decl,
  [2208] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_field_decl,
  [2218] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(122), 1,
      sym_full_ident,
  [2228] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2236] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2244] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2252] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      sym_string_constant,
  [2262] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_string_constant,
  [2272] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2280] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2288] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(119), 1,
      sym_enumval_decl,
  [2298] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string_constant,
  [2308] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(83), 1,
      sym_field_and_value,
  [2318] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2326] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2334] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2342] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2350] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2358] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2366] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(156), 1,
      sym_full_ident,
  [2376] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(90), 1,
      sym_enumval_decl,
  [2386] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      sym_identifier,
  [2396] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [2403] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [2410] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
  [2417] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [2424] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
  [2431] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
  [2438] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_SEMI,
  [2445] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [2452] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [2459] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
  [2466] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [2473] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
  [2480] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_identifier,
  [2487] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [2494] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
  [2501] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_COLON,
  [2508] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [2515] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
  [2522] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [2529] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [2536] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2543] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [2550] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
  [2557] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [2564] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [2571] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [2578] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
  [2585] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SEMI,
  [2592] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
  [2599] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
  [2606] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [2613] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
  [2620] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [2627] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_identifier,
  [2634] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 250,
  [SMALL_STATE(7)] = 290,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 478,
  [SMALL_STATE(12)] = 538,
  [SMALL_STATE(13)] = 592,
  [SMALL_STATE(14)] = 611,
  [SMALL_STATE(15)] = 630,
  [SMALL_STATE(16)] = 649,
  [SMALL_STATE(17)] = 668,
  [SMALL_STATE(18)] = 687,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 725,
  [SMALL_STATE(21)] = 744,
  [SMALL_STATE(22)] = 763,
  [SMALL_STATE(23)] = 782,
  [SMALL_STATE(24)] = 801,
  [SMALL_STATE(25)] = 820,
  [SMALL_STATE(26)] = 839,
  [SMALL_STATE(27)] = 858,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 896,
  [SMALL_STATE(30)] = 915,
  [SMALL_STATE(31)] = 934,
  [SMALL_STATE(32)] = 953,
  [SMALL_STATE(33)] = 972,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1010,
  [SMALL_STATE(36)] = 1040,
  [SMALL_STATE(37)] = 1060,
  [SMALL_STATE(38)] = 1080,
  [SMALL_STATE(39)] = 1100,
  [SMALL_STATE(40)] = 1115,
  [SMALL_STATE(41)] = 1139,
  [SMALL_STATE(42)] = 1152,
  [SMALL_STATE(43)] = 1165,
  [SMALL_STATE(44)] = 1180,
  [SMALL_STATE(45)] = 1192,
  [SMALL_STATE(46)] = 1204,
  [SMALL_STATE(47)] = 1216,
  [SMALL_STATE(48)] = 1227,
  [SMALL_STATE(49)] = 1238,
  [SMALL_STATE(50)] = 1249,
  [SMALL_STATE(51)] = 1260,
  [SMALL_STATE(52)] = 1271,
  [SMALL_STATE(53)] = 1282,
  [SMALL_STATE(54)] = 1293,
  [SMALL_STATE(55)] = 1310,
  [SMALL_STATE(56)] = 1321,
  [SMALL_STATE(57)] = 1332,
  [SMALL_STATE(58)] = 1346,
  [SMALL_STATE(59)] = 1356,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1386,
  [SMALL_STATE(62)] = 1402,
  [SMALL_STATE(63)] = 1418,
  [SMALL_STATE(64)] = 1432,
  [SMALL_STATE(65)] = 1446,
  [SMALL_STATE(66)] = 1460,
  [SMALL_STATE(67)] = 1474,
  [SMALL_STATE(68)] = 1488,
  [SMALL_STATE(69)] = 1504,
  [SMALL_STATE(70)] = 1514,
  [SMALL_STATE(71)] = 1528,
  [SMALL_STATE(72)] = 1542,
  [SMALL_STATE(73)] = 1552,
  [SMALL_STATE(74)] = 1562,
  [SMALL_STATE(75)] = 1572,
  [SMALL_STATE(76)] = 1585,
  [SMALL_STATE(77)] = 1598,
  [SMALL_STATE(78)] = 1611,
  [SMALL_STATE(79)] = 1624,
  [SMALL_STATE(80)] = 1637,
  [SMALL_STATE(81)] = 1650,
  [SMALL_STATE(82)] = 1663,
  [SMALL_STATE(83)] = 1676,
  [SMALL_STATE(84)] = 1689,
  [SMALL_STATE(85)] = 1702,
  [SMALL_STATE(86)] = 1715,
  [SMALL_STATE(87)] = 1728,
  [SMALL_STATE(88)] = 1741,
  [SMALL_STATE(89)] = 1754,
  [SMALL_STATE(90)] = 1767,
  [SMALL_STATE(91)] = 1780,
  [SMALL_STATE(92)] = 1793,
  [SMALL_STATE(93)] = 1806,
  [SMALL_STATE(94)] = 1819,
  [SMALL_STATE(95)] = 1832,
  [SMALL_STATE(96)] = 1843,
  [SMALL_STATE(97)] = 1856,
  [SMALL_STATE(98)] = 1869,
  [SMALL_STATE(99)] = 1882,
  [SMALL_STATE(100)] = 1895,
  [SMALL_STATE(101)] = 1908,
  [SMALL_STATE(102)] = 1921,
  [SMALL_STATE(103)] = 1934,
  [SMALL_STATE(104)] = 1947,
  [SMALL_STATE(105)] = 1960,
  [SMALL_STATE(106)] = 1973,
  [SMALL_STATE(107)] = 1986,
  [SMALL_STATE(108)] = 1999,
  [SMALL_STATE(109)] = 2012,
  [SMALL_STATE(110)] = 2025,
  [SMALL_STATE(111)] = 2038,
  [SMALL_STATE(112)] = 2051,
  [SMALL_STATE(113)] = 2064,
  [SMALL_STATE(114)] = 2077,
  [SMALL_STATE(115)] = 2088,
  [SMALL_STATE(116)] = 2101,
  [SMALL_STATE(117)] = 2114,
  [SMALL_STATE(118)] = 2127,
  [SMALL_STATE(119)] = 2140,
  [SMALL_STATE(120)] = 2148,
  [SMALL_STATE(121)] = 2156,
  [SMALL_STATE(122)] = 2164,
  [SMALL_STATE(123)] = 2172,
  [SMALL_STATE(124)] = 2182,
  [SMALL_STATE(125)] = 2190,
  [SMALL_STATE(126)] = 2198,
  [SMALL_STATE(127)] = 2208,
  [SMALL_STATE(128)] = 2218,
  [SMALL_STATE(129)] = 2228,
  [SMALL_STATE(130)] = 2236,
  [SMALL_STATE(131)] = 2244,
  [SMALL_STATE(132)] = 2252,
  [SMALL_STATE(133)] = 2262,
  [SMALL_STATE(134)] = 2272,
  [SMALL_STATE(135)] = 2280,
  [SMALL_STATE(136)] = 2288,
  [SMALL_STATE(137)] = 2298,
  [SMALL_STATE(138)] = 2308,
  [SMALL_STATE(139)] = 2318,
  [SMALL_STATE(140)] = 2326,
  [SMALL_STATE(141)] = 2334,
  [SMALL_STATE(142)] = 2342,
  [SMALL_STATE(143)] = 2350,
  [SMALL_STATE(144)] = 2358,
  [SMALL_STATE(145)] = 2366,
  [SMALL_STATE(146)] = 2376,
  [SMALL_STATE(147)] = 2386,
  [SMALL_STATE(148)] = 2396,
  [SMALL_STATE(149)] = 2403,
  [SMALL_STATE(150)] = 2410,
  [SMALL_STATE(151)] = 2417,
  [SMALL_STATE(152)] = 2424,
  [SMALL_STATE(153)] = 2431,
  [SMALL_STATE(154)] = 2438,
  [SMALL_STATE(155)] = 2445,
  [SMALL_STATE(156)] = 2452,
  [SMALL_STATE(157)] = 2459,
  [SMALL_STATE(158)] = 2466,
  [SMALL_STATE(159)] = 2473,
  [SMALL_STATE(160)] = 2480,
  [SMALL_STATE(161)] = 2487,
  [SMALL_STATE(162)] = 2494,
  [SMALL_STATE(163)] = 2501,
  [SMALL_STATE(164)] = 2508,
  [SMALL_STATE(165)] = 2515,
  [SMALL_STATE(166)] = 2522,
  [SMALL_STATE(167)] = 2529,
  [SMALL_STATE(168)] = 2536,
  [SMALL_STATE(169)] = 2543,
  [SMALL_STATE(170)] = 2550,
  [SMALL_STATE(171)] = 2557,
  [SMALL_STATE(172)] = 2564,
  [SMALL_STATE(173)] = 2571,
  [SMALL_STATE(174)] = 2578,
  [SMALL_STATE(175)] = 2585,
  [SMALL_STATE(176)] = 2592,
  [SMALL_STATE(177)] = 2599,
  [SMALL_STATE(178)] = 2606,
  [SMALL_STATE(179)] = 2613,
  [SMALL_STATE(180)] = 2620,
  [SMALL_STATE(181)] = 2627,
  [SMALL_STATE(182)] = 2634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 5, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_decl, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 6, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_decl, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 8, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension_decl, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier_decl, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_constant, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inf_token, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat2, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [417] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
