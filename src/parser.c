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
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
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
  aux_sym_source_file_repeat2 = 94,
  aux_sym_type_decl_repeat1 = 95,
  aux_sym_enum_decl_repeat1 = 96,
  aux_sym_union_dcl_repeat1 = 97,
  aux_sym_union_dcl_repeat2 = 98,
  aux_sym_object_repeat1 = 99,
  aux_sym_value_repeat1 = 100,
  aux_sym_rpc_decl_repeat1 = 101,
  aux_sym_metadata_repeat1 = 102,
  aux_sym_full_ident_repeat1 = 103,
  aux_sym_string_constant_repeat1 = 104,
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [aux_sym_source_file_repeat2] = {
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
  [58] = 58,
  [59] = 59,
  [60] = 20,
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
  [76] = 22,
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
  [118] = 81,
  [119] = 85,
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
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      ADVANCE_MAP(
        '"', 157,
        '(', 217,
        ')', 218,
        '+', 285,
        ',', 164,
        '-', 286,
        '.', 284,
        '/', 4,
        '0', 292,
        ':', 163,
        ';', 154,
        '=', 171,
        '[', 169,
        '\\', 17,
        ']', 170,
        'a', 118,
        'b', 90,
        'd', 88,
        'e', 81,
        'f', 21,
        'i', 77,
        'l', 91,
        'n', 22,
        'r', 95,
        's', 59,
        't', 23,
        'u', 26,
        '{', 160,
        '}', 161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(149);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(161);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 217,
        ')', 218,
        ',', 164,
        '.', 283,
        '/', 5,
        ':', 163,
        ';', 154,
        '=', 171,
        '[', 169,
        ']', 170,
        'b', 261,
        'd', 257,
        'f', 247,
        'i', 254,
        'l', 262,
        's', 241,
        'u', 230,
        '{', 160,
        '}', 161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
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
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(202);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(198);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 132:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 133:
      if (lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
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
      if (eof) ADVANCE(151);
      ADVANCE_MAP(
        '"', 157,
        '(', 217,
        ')', 218,
        '+', 285,
        ',', 164,
        '-', 286,
        '.', 284,
        '/', 4,
        '0', 292,
        ':', 163,
        ';', 154,
        '=', 171,
        '[', 169,
        ']', 170,
        'a', 118,
        'b', 90,
        'd', 88,
        'e', 81,
        'f', 21,
        'i', 77,
        'l', 91,
        'n', 22,
        'r', 95,
        's', 59,
        't', 23,
        'u', 26,
        '{', 160,
        '}', 161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(149);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      ADVANCE_MAP(
        '"', 157,
        '(', 217,
        ')', 218,
        '+', 285,
        ',', 164,
        '-', 286,
        '.', 138,
        '/', 5,
        '0', 292,
        ':', 163,
        ';', 154,
        '=', 171,
        '[', 169,
        ']', 170,
        'f', 227,
        'i', 249,
        'n', 228,
        't', 265,
        '{', 160,
        '}', 161,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_documentation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_root_type);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_file_extension);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_file_identifier);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == '3') ADVANCE(219);
      if (lookahead == '6') ADVANCE(222);
      if (lookahead == '8') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '3') ADVANCE(220);
      if (lookahead == '6') ADVANCE(223);
      if (lookahead == '8') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '3') ADVANCE(221);
      if (lookahead == '6') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_rpc_service);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'y') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_plus_token);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_minus_token);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(293);
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
          lookahead == 'e') ADVANCE(137);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_nan_token);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_nan_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
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
      if (lookahead == '/') ADVANCE(152);
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
  [2] = {.lex_state = 150},
  [3] = {.lex_state = 150},
  [4] = {.lex_state = 150},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 150},
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 150},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 150},
  [43] = {.lex_state = 150},
  [44] = {.lex_state = 150},
  [45] = {.lex_state = 150},
  [46] = {.lex_state = 150},
  [47] = {.lex_state = 150},
  [48] = {.lex_state = 150},
  [49] = {.lex_state = 150},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 150},
  [52] = {.lex_state = 150},
  [53] = {.lex_state = 150},
  [54] = {.lex_state = 150},
  [55] = {.lex_state = 150},
  [56] = {.lex_state = 150},
  [57] = {.lex_state = 150},
  [58] = {.lex_state = 150},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 150},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 150},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 150},
  [71] = {.lex_state = 150},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 150},
  [75] = {.lex_state = 150},
  [76] = {.lex_state = 150},
  [77] = {.lex_state = 150},
  [78] = {.lex_state = 150},
  [79] = {.lex_state = 150},
  [80] = {.lex_state = 150},
  [81] = {.lex_state = 150},
  [82] = {.lex_state = 150},
  [83] = {.lex_state = 150},
  [84] = {.lex_state = 150},
  [85] = {.lex_state = 150},
  [86] = {.lex_state = 150},
  [87] = {.lex_state = 150},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 150},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 150},
  [92] = {.lex_state = 150},
  [93] = {.lex_state = 150},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 150},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 150},
  [98] = {.lex_state = 150},
  [99] = {.lex_state = 150},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 150},
  [105] = {.lex_state = 150},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 150},
  [108] = {.lex_state = 150},
  [109] = {.lex_state = 150},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 150},
  [112] = {.lex_state = 150},
  [113] = {.lex_state = 150},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 150},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 150},
  [119] = {.lex_state = 150},
  [120] = {.lex_state = 150},
  [121] = {.lex_state = 150},
  [122] = {.lex_state = 150},
  [123] = {.lex_state = 150},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 150},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 150},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 150},
  [133] = {.lex_state = 150},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 150},
  [136] = {.lex_state = 150},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 150},
  [142] = {.lex_state = 150},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 150},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 150},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 150},
  [152] = {.lex_state = 150},
  [153] = {.lex_state = 150},
  [154] = {.lex_state = 150},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 150},
  [158] = {.lex_state = 150},
  [159] = {.lex_state = 150},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 150},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 150},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 150},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 150},
  [168] = {.lex_state = 150},
  [169] = {.lex_state = 150},
  [170] = {.lex_state = 150},
  [171] = {.lex_state = 150},
  [172] = {.lex_state = 150},
  [173] = {.lex_state = 150},
  [174] = {.lex_state = 150},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 150},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 150},
  [180] = {.lex_state = 150},
  [181] = {.lex_state = 150},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 150},
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
    [sym_source_file] = STATE(184),
    [sym_include] = STATE(5),
    [sym_namespace_decl] = STATE(10),
    [sym_attribute_decl] = STATE(10),
    [sym_type_decl] = STATE(10),
    [sym_enum_decl] = STATE(10),
    [sym_union_dcl] = STATE(10),
    [sym_object] = STATE(10),
    [sym_root_decl] = STATE(10),
    [sym_file_extension_decl] = STATE(10),
    [sym_file_identifier_decl] = STATE(10),
    [sym_rpc_decl] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(10),
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
  [0] = 20,
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
    STATE(40), 1,
      sym_plus_minus_constant,
    STATE(48), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_inf_token,
    STATE(52), 1,
      sym_float_lit,
    STATE(103), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(70), 2,
      sym_object,
      sym_single_value,
    STATE(56), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(57), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [70] = 20,
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
    STATE(40), 1,
      sym_plus_minus_constant,
    STATE(48), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_inf_token,
    STATE(52), 1,
      sym_float_lit,
    STATE(109), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(70), 2,
      sym_object,
      sym_single_value,
    STATE(56), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(57), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [140] = 20,
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
    STATE(40), 1,
      sym_plus_minus_constant,
    STATE(48), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_inf_token,
    STATE(52), 1,
      sym_float_lit,
    STATE(145), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(70), 2,
      sym_object,
      sym_single_value,
    STATE(56), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(57), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [210] = 16,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(57), 1,
      sym_documentation,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(14), 2,
      sym_include,
      aux_sym_source_file_repeat1,
    STATE(13), 11,
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
      aux_sym_source_file_repeat2,
  [271] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_full_ident,
    STATE(82), 1,
      sym_type,
    ACTIONS(61), 22,
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
  [311] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_full_ident,
    STATE(66), 1,
      sym_type,
    ACTIONS(61), 22,
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
  [351] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_full_ident,
    STATE(122), 1,
      sym_type,
    ACTIONS(61), 22,
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
  [391] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_full_ident,
    STATE(177), 1,
      sym_type,
    ACTIONS(61), 22,
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
  [431] = 14,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(63), 1,
      sym_documentation,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(11), 11,
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
      aux_sym_source_file_repeat2,
  [485] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_documentation,
    ACTIONS(70), 1,
      anon_sym_namespace,
    ACTIONS(73), 1,
      anon_sym_attribute,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_enum,
    ACTIONS(85), 1,
      anon_sym_union,
    ACTIONS(88), 1,
      anon_sym_root_type,
    ACTIONS(91), 1,
      anon_sym_file_extension,
    ACTIONS(94), 1,
      anon_sym_file_identifier,
    ACTIONS(97), 1,
      anon_sym_rpc_service,
    ACTIONS(76), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(11), 11,
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
      aux_sym_source_file_repeat2,
  [539] = 17,
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
    STATE(40), 1,
      sym_plus_minus_constant,
    STATE(48), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_inf_token,
    STATE(52), 1,
      sym_float_lit,
    STATE(136), 1,
      sym_single_value,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(41), 2,
      sym_true,
      sym_false,
    ACTIONS(43), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(49), 2,
      anon_sym_infinity,
      anon_sym_inf,
    STATE(56), 3,
      sym_full_ident,
      sym_scalar,
      sym_string_constant,
    STATE(57), 3,
      sym_bool_constant,
      sym_int_constant,
      sym_float_constant,
  [599] = 14,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(63), 1,
      sym_documentation,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_table,
      anon_sym_struct,
    STATE(11), 11,
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
      aux_sym_source_file_repeat2,
  [653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_include,
    STATE(14), 2,
      sym_include,
      aux_sym_source_file_repeat1,
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
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 14,
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
  [699] = 2,
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
  [718] = 2,
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
  [737] = 2,
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
  [756] = 2,
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
  [775] = 2,
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
  [794] = 2,
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
  [813] = 2,
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
  [832] = 2,
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
  [851] = 2,
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
  [870] = 2,
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
  [889] = 2,
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
  [908] = 2,
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
  [927] = 2,
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
  [946] = 2,
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
  [965] = 2,
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
  [984] = 2,
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
  [1003] = 2,
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
  [1022] = 2,
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
  [1041] = 2,
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
  [1060] = 2,
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
  [1079] = 2,
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
  [1098] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(151), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1118] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(155), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1138] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(157), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1158] = 9,
    ACTIONS(45), 1,
      sym_hex_lit,
    ACTIONS(49), 1,
      anon_sym_inf,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_infinity,
    STATE(47), 1,
      sym_int_lit,
    STATE(49), 1,
      sym_inf_token,
    STATE(58), 1,
      sym_float_lit,
    ACTIONS(43), 2,
      sym_decimal_lit,
      sym_octal_lit,
    ACTIONS(47), 2,
      aux_sym_float_lit_token1,
      sym_nan_token,
  [1188] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(157), 9,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1203] = 7,
    ACTIONS(43), 1,
      sym_octal_lit,
    ACTIONS(53), 1,
      sym_comment,
    STATE(48), 1,
      sym_int_lit,
    STATE(71), 1,
      sym_plus_minus_constant,
    STATE(135), 1,
      sym_int_constant,
    ACTIONS(39), 2,
      sym_plus_token,
      sym_minus_token,
    ACTIONS(45), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [1227] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(164), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [1240] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_decimal_lit,
      sym_octal_lit,
      anon_sym_inf,
    ACTIONS(168), 4,
      sym_hex_lit,
      aux_sym_float_lit_token1,
      anon_sym_infinity,
      sym_nan_token,
  [1255] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(170), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [1268] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1280] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(174), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1292] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1304] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1315] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(37), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1332] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1343] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1354] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1365] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(188), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1376] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1387] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1398] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1409] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1420] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(59), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1434] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1444] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(64), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1458] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(59), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1472] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(63), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1486] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_string_constant_token1,
    ACTIONS(222), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_string_constant_repeat1,
  [1516] = 5,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      anon_sym_EQ,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_metadata,
  [1532] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(73), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      aux_sym_string_constant_token1,
    ACTIONS(236), 1,
      sym_escape_sequence,
    STATE(65), 1,
      aux_sym_string_constant_repeat1,
  [1562] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(62), 2,
      sym_rpc_method,
      aux_sym_rpc_decl_repeat1,
  [1576] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1586] = 4,
    ACTIONS(43), 1,
      sym_octal_lit,
    ACTIONS(53), 1,
      sym_comment,
    STATE(47), 1,
      sym_int_lit,
    ACTIONS(45), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [1600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_constant_token1,
    ACTIONS(247), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_string_constant_repeat1,
  [1616] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(63), 2,
      sym_field_decl,
      aux_sym_type_decl_repeat1,
  [1630] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1640] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1650] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [1660] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_enum_decl_repeat1,
  [1673] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_union_dcl_repeat2,
  [1686] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_union_dcl_repeat1,
  [1699] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_union_dcl_repeat2,
  [1712] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_object_repeat1,
  [1725] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_metadata,
  [1738] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_metadata,
  [1751] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_metadata_repeat1,
  [1764] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [1777] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(279), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1788] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_enum_decl_repeat1,
  [1801] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_field_decl,
  [1814] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_union_dcl_repeat1,
  [1827] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(123), 1,
      sym_full_ident,
  [1840] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_union_dcl_repeat2,
  [1853] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_union_dcl_repeat1,
  [1866] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_union_dcl_repeat2,
  [1879] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(95), 1,
      sym_union_field_decl,
    STATE(99), 1,
      sym_full_ident,
  [1892] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_union_dcl_repeat1,
  [1905] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(137), 1,
      sym_enumval_decl,
  [1918] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1929] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_enum_decl_repeat1,
  [1942] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_union_dcl_repeat2,
  [1955] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_union_field_decl,
  [1968] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_full_ident,
  [1981] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(79), 1,
      sym_union_field_decl,
    STATE(80), 1,
      sym_full_ident,
  [1994] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_metadata,
  [2007] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_metadata_repeat1,
  [2020] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_metadata,
  [2033] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(137), 1,
      sym_enumval_decl,
  [2046] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_enum_decl_repeat1,
  [2059] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_metadata_repeat1,
  [2072] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_value_repeat1,
  [2085] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_enumval_decl,
  [2098] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_metadata,
  [2111] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2124] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_value_repeat1,
  [2137] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_field_decl,
  [2150] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_value_repeat1,
  [2163] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_union_dcl_repeat1,
  [2176] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(123), 1,
      sym_full_ident,
  [2189] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym_object_repeat1,
  [2202] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2215] = 4,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_enum_decl_repeat1,
  [2228] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2236] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2244] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2252] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2260] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2268] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(159), 1,
      sym_full_ident,
  [2278] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(141), 1,
      sym_field_and_value,
  [2288] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2296] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(121), 1,
      sym_union_field_decl,
  [2306] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(123), 1,
      sym_full_ident,
  [2316] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      sym_identifier,
  [2326] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(169), 1,
      sym_string_constant,
  [2336] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(171), 1,
      sym_string_constant,
  [2346] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2354] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2362] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2370] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2378] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(104), 1,
      sym_field_and_value,
  [2388] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2396] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(137), 1,
      sym_enumval_decl,
  [2406] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2414] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2422] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2430] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2438] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2446] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2454] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(87), 1,
      sym_enumval_decl,
  [2464] = 3,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(98), 1,
      sym_enumval_decl,
  [2474] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_comment,
    STATE(158), 1,
      sym_string_constant,
  [2484] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
  [2491] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SEMI,
  [2498] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [2505] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
  [2512] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [2519] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
  [2526] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
  [2533] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [2540] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [2547] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2554] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
  [2561] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
  [2568] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_identifier,
  [2575] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [2582] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
  [2589] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [2596] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
  [2603] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [2610] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SEMI,
  [2617] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SEMI,
  [2624] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
  [2631] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SEMI,
  [2638] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SEMI,
  [2645] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
  [2652] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
  [2659] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_identifier,
  [2666] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
  [2673] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
  [2680] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_identifier,
  [2687] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [2694] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [2701] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [2708] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [2715] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [2722] = 2,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 271,
  [SMALL_STATE(7)] = 311,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 391,
  [SMALL_STATE(10)] = 431,
  [SMALL_STATE(11)] = 485,
  [SMALL_STATE(12)] = 539,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 653,
  [SMALL_STATE(15)] = 679,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 718,
  [SMALL_STATE(18)] = 737,
  [SMALL_STATE(19)] = 756,
  [SMALL_STATE(20)] = 775,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 813,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 851,
  [SMALL_STATE(25)] = 870,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 908,
  [SMALL_STATE(28)] = 927,
  [SMALL_STATE(29)] = 946,
  [SMALL_STATE(30)] = 965,
  [SMALL_STATE(31)] = 984,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1041,
  [SMALL_STATE(35)] = 1060,
  [SMALL_STATE(36)] = 1079,
  [SMALL_STATE(37)] = 1098,
  [SMALL_STATE(38)] = 1118,
  [SMALL_STATE(39)] = 1138,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1188,
  [SMALL_STATE(42)] = 1203,
  [SMALL_STATE(43)] = 1227,
  [SMALL_STATE(44)] = 1240,
  [SMALL_STATE(45)] = 1255,
  [SMALL_STATE(46)] = 1268,
  [SMALL_STATE(47)] = 1280,
  [SMALL_STATE(48)] = 1292,
  [SMALL_STATE(49)] = 1304,
  [SMALL_STATE(50)] = 1315,
  [SMALL_STATE(51)] = 1332,
  [SMALL_STATE(52)] = 1343,
  [SMALL_STATE(53)] = 1354,
  [SMALL_STATE(54)] = 1365,
  [SMALL_STATE(55)] = 1376,
  [SMALL_STATE(56)] = 1387,
  [SMALL_STATE(57)] = 1398,
  [SMALL_STATE(58)] = 1409,
  [SMALL_STATE(59)] = 1420,
  [SMALL_STATE(60)] = 1434,
  [SMALL_STATE(61)] = 1444,
  [SMALL_STATE(62)] = 1458,
  [SMALL_STATE(63)] = 1472,
  [SMALL_STATE(64)] = 1486,
  [SMALL_STATE(65)] = 1500,
  [SMALL_STATE(66)] = 1516,
  [SMALL_STATE(67)] = 1532,
  [SMALL_STATE(68)] = 1546,
  [SMALL_STATE(69)] = 1562,
  [SMALL_STATE(70)] = 1576,
  [SMALL_STATE(71)] = 1586,
  [SMALL_STATE(72)] = 1600,
  [SMALL_STATE(73)] = 1616,
  [SMALL_STATE(74)] = 1630,
  [SMALL_STATE(75)] = 1640,
  [SMALL_STATE(76)] = 1650,
  [SMALL_STATE(77)] = 1660,
  [SMALL_STATE(78)] = 1673,
  [SMALL_STATE(79)] = 1686,
  [SMALL_STATE(80)] = 1699,
  [SMALL_STATE(81)] = 1712,
  [SMALL_STATE(82)] = 1725,
  [SMALL_STATE(83)] = 1738,
  [SMALL_STATE(84)] = 1751,
  [SMALL_STATE(85)] = 1764,
  [SMALL_STATE(86)] = 1777,
  [SMALL_STATE(87)] = 1788,
  [SMALL_STATE(88)] = 1801,
  [SMALL_STATE(89)] = 1814,
  [SMALL_STATE(90)] = 1827,
  [SMALL_STATE(91)] = 1840,
  [SMALL_STATE(92)] = 1853,
  [SMALL_STATE(93)] = 1866,
  [SMALL_STATE(94)] = 1879,
  [SMALL_STATE(95)] = 1892,
  [SMALL_STATE(96)] = 1905,
  [SMALL_STATE(97)] = 1918,
  [SMALL_STATE(98)] = 1929,
  [SMALL_STATE(99)] = 1942,
  [SMALL_STATE(100)] = 1955,
  [SMALL_STATE(101)] = 1968,
  [SMALL_STATE(102)] = 1981,
  [SMALL_STATE(103)] = 1994,
  [SMALL_STATE(104)] = 2007,
  [SMALL_STATE(105)] = 2020,
  [SMALL_STATE(106)] = 2033,
  [SMALL_STATE(107)] = 2046,
  [SMALL_STATE(108)] = 2059,
  [SMALL_STATE(109)] = 2072,
  [SMALL_STATE(110)] = 2085,
  [SMALL_STATE(111)] = 2098,
  [SMALL_STATE(112)] = 2111,
  [SMALL_STATE(113)] = 2124,
  [SMALL_STATE(114)] = 2137,
  [SMALL_STATE(115)] = 2150,
  [SMALL_STATE(116)] = 2163,
  [SMALL_STATE(117)] = 2176,
  [SMALL_STATE(118)] = 2189,
  [SMALL_STATE(119)] = 2202,
  [SMALL_STATE(120)] = 2215,
  [SMALL_STATE(121)] = 2228,
  [SMALL_STATE(122)] = 2236,
  [SMALL_STATE(123)] = 2244,
  [SMALL_STATE(124)] = 2252,
  [SMALL_STATE(125)] = 2260,
  [SMALL_STATE(126)] = 2268,
  [SMALL_STATE(127)] = 2278,
  [SMALL_STATE(128)] = 2288,
  [SMALL_STATE(129)] = 2296,
  [SMALL_STATE(130)] = 2306,
  [SMALL_STATE(131)] = 2316,
  [SMALL_STATE(132)] = 2326,
  [SMALL_STATE(133)] = 2336,
  [SMALL_STATE(134)] = 2346,
  [SMALL_STATE(135)] = 2354,
  [SMALL_STATE(136)] = 2362,
  [SMALL_STATE(137)] = 2370,
  [SMALL_STATE(138)] = 2378,
  [SMALL_STATE(139)] = 2388,
  [SMALL_STATE(140)] = 2396,
  [SMALL_STATE(141)] = 2406,
  [SMALL_STATE(142)] = 2414,
  [SMALL_STATE(143)] = 2422,
  [SMALL_STATE(144)] = 2430,
  [SMALL_STATE(145)] = 2438,
  [SMALL_STATE(146)] = 2446,
  [SMALL_STATE(147)] = 2454,
  [SMALL_STATE(148)] = 2464,
  [SMALL_STATE(149)] = 2474,
  [SMALL_STATE(150)] = 2484,
  [SMALL_STATE(151)] = 2491,
  [SMALL_STATE(152)] = 2498,
  [SMALL_STATE(153)] = 2505,
  [SMALL_STATE(154)] = 2512,
  [SMALL_STATE(155)] = 2519,
  [SMALL_STATE(156)] = 2526,
  [SMALL_STATE(157)] = 2533,
  [SMALL_STATE(158)] = 2540,
  [SMALL_STATE(159)] = 2547,
  [SMALL_STATE(160)] = 2554,
  [SMALL_STATE(161)] = 2561,
  [SMALL_STATE(162)] = 2568,
  [SMALL_STATE(163)] = 2575,
  [SMALL_STATE(164)] = 2582,
  [SMALL_STATE(165)] = 2589,
  [SMALL_STATE(166)] = 2596,
  [SMALL_STATE(167)] = 2603,
  [SMALL_STATE(168)] = 2610,
  [SMALL_STATE(169)] = 2617,
  [SMALL_STATE(170)] = 2624,
  [SMALL_STATE(171)] = 2631,
  [SMALL_STATE(172)] = 2638,
  [SMALL_STATE(173)] = 2645,
  [SMALL_STATE(174)] = 2652,
  [SMALL_STATE(175)] = 2659,
  [SMALL_STATE(176)] = 2666,
  [SMALL_STATE(177)] = 2673,
  [SMALL_STATE(178)] = 2680,
  [SMALL_STATE(179)] = 2687,
  [SMALL_STATE(180)] = 2694,
  [SMALL_STATE(181)] = 2701,
  [SMALL_STATE(182)] = 2708,
  [SMALL_STATE(183)] = 2715,
  [SMALL_STATE(184)] = 2722,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(126),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(131),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(155),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(182),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(166),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(150),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(175),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(132),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(156),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_decl, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_decl, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_decl, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 8, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_extension_decl, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 6, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_decl, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_dcl, 7, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_identifier_decl, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_minus_constant, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_constant, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_constant, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inf_token, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_value, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_constant, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat1, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat2, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_dcl_repeat2, 2, 0, 0), SHIFT_REPEAT(130),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_field_decl, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 5, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumval_decl, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_and_value, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 6, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_decl, 7, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 7, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_method, 8, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [460] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
