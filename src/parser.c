#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_HDF5 = 1,
  anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DATATYPE = 4,
  anon_sym_LBRACE = 5,
  sym_anon_named_type_name = 6,
  anon_sym_H5T_STD_I8BE = 7,
  anon_sym_H5T_STD_I8LE = 8,
  anon_sym_H5T_STD_I16BE = 9,
  anon_sym_H5T_STD_I16LE = 10,
  anon_sym_H5T_STD_I32BE = 11,
  anon_sym_H5T_STD_I32LE = 12,
  anon_sym_H5T_STD_I64BE = 13,
  anon_sym_H5T_STD_I64LE = 14,
  anon_sym_H5T_STD_U8BE = 15,
  anon_sym_H5T_STD_U8LE = 16,
  anon_sym_H5T_STD_U16BE = 17,
  anon_sym_H5T_STD_U16LE = 18,
  anon_sym_H5T_STD_U32BE = 19,
  anon_sym_H5T_STD_U32LE = 20,
  anon_sym_H5T_STD_U64BE = 21,
  anon_sym_H5T_STD_U64LE = 22,
  anon_sym_H5T_NATIVE_CHAR = 23,
  anon_sym_H5T_NATIVE_UCHAR = 24,
  anon_sym_H5T_NATIVE_SHORT = 25,
  anon_sym_H5T_NATIVE_USHORT = 26,
  anon_sym_H5T_NATIVE_INT = 27,
  anon_sym_H5T_NATIVE_UINT = 28,
  anon_sym_H5T_NATIVE_LONG = 29,
  anon_sym_H5T_NATIVE_ULONG = 30,
  anon_sym_H5T_NATIVE_LLONG = 31,
  anon_sym_H5T_NATIVE_ULLONG = 32,
  anon_sym_H5T_IEEE_F32BE = 33,
  anon_sym_H5T_IEEE_F32LE = 34,
  anon_sym_H5T_IEEE_F64BE = 35,
  anon_sym_H5T_IEEE_F64LE = 36,
  anon_sym_H5T_NATIVE_FLOAT = 37,
  anon_sym_H5T_NATIVE_DOUBLE = 38,
  anon_sym_H5T_NATIVE_LDOUBLE = 39,
  anon_sym_H5T_STRING = 40,
  anon_sym_STRSIZE = 41,
  anon_sym_SEMI = 42,
  anon_sym_STRPAD = 43,
  anon_sym_CSET = 44,
  anon_sym_CTYPE = 45,
  anon_sym_H5T_STR_NULLTERM = 46,
  anon_sym_H5T_STR_NULLPAD = 47,
  anon_sym_H5T_STR_SPACEPAD = 48,
  anon_sym_H5T_CSET_ASCII = 49,
  anon_sym_H5T_CSET_UTF8 = 50,
  anon_sym_H5T_C_S1 = 51,
  anon_sym_H5T_FORTRAN_S1 = 52,
  anon_sym_H5T_STD_B8BE = 53,
  anon_sym_H5T_STD_B8LE = 54,
  anon_sym_H5T_STD_B16BE = 55,
  anon_sym_H5T_STD_B16LE = 56,
  anon_sym_H5T_STD_B32BE = 57,
  anon_sym_H5T_STD_B32LE = 58,
  anon_sym_H5T_STD_B64BE = 59,
  anon_sym_H5T_STD_B64LE = 60,
  anon_sym_ATTRIBUTE = 61,
  anon_sym_H5T_ENUM = 62,
  anon_sym_SLASH = 63,
  anon_sym_NULL = 64,
  sym_scalar_space = 65,
  anon_sym_SIMPLE = 66,
  anon_sym_DATASPACE = 67,
  anon_sym_LPAREN = 68,
  anon_sym_RPAREN = 69,
  anon_sym_COMMA = 70,
  anon_sym_H5S_UNLIMITED = 71,
  anon_sym_DATA = 72,
  sym__float = 73,
  anon_sym_COLON = 74,
  anon_sym_DATASET = 75,
  anon_sym_GROUP = 76,
  anon_sym_OBJECTID_LBRACE = 77,
  anon_sym_REGION_TYPE = 78,
  anon_sym_POINT = 79,
  anon_sym_BLOCK = 80,
  anon_sym_LBRACK = 81,
  anon_sym_RBRACK = 82,
  anon_sym_HARDLINK = 83,
  anon_sym_COMMENT = 84,
  anon_sym_OFFSET = 85,
  anon_sym_SIZE = 86,
  anon_sym_HEADER = 87,
  anon_sym_RAW = 88,
  anon_sym_CHECKSUM = 89,
  anon_sym_FLETCHER32 = 90,
  anon_sym_COMPRESSION = 91,
  anon_sym_SCALEOFFSET = 92,
  anon_sym_MIN = 93,
  anon_sym_BITS = 94,
  anon_sym_USER_REGISTERED_FILTER = 95,
  anon_sym_UNKNOWN_FILTER = 96,
  anon_sym_PARAMS = 97,
  anon_sym_SOFTLINK = 98,
  anon_sym_LINKTARGET = 99,
  anon_sym_EXTERNAL_LINK = 100,
  anon_sym_TARGETFILE = 101,
  anon_sym_TARGETPATH = 102,
  anon_sym_DQUOTE = 103,
  aux_sym__string_content_token1 = 104,
  sym__escape_sequence = 105,
  anon_sym_0 = 106,
  sym_pos_int = 107,
  aux_sym_hex_value_token1 = 108,
  aux_sym_hex_value_token2 = 109,
  sym_file = 110,
  sym_file_name = 111,
  sym_root_group = 112,
  sym_datatype = 113,
  sym_anon_named_datatype = 114,
  sym_atomic_type = 115,
  sym_h5t_integer = 116,
  sym_h5t_float = 117,
  sym_h5t_bitfield = 118,
  sym_attribute = 119,
  sym_attr_name = 120,
  sym_dataset_type = 121,
  sym_enum_symbol = 122,
  sym_path_name = 123,
  sym_path_part = 124,
  sym_dataspace = 125,
  sym_null_space = 126,
  sym_simple_space = 127,
  sym_dataset_space = 128,
  sym_current_dims = 129,
  sym_max_dims = 130,
  sym_max_dim_list = 131,
  sym_max_dim = 132,
  sym_data = 133,
  sym_scalar_space_data = 134,
  sym_any_element = 135,
  sym_any_data_seq = 136,
  sym_atomic_element = 137,
  sym_integer_data = 138,
  sym_float_data = 139,
  sym_string_data = 140,
  sym_bitfield_data = 141,
  sym_opaque_data = 142,
  sym_enum_data = 143,
  sym_reference_data = 144,
  sym_object_ref_data = 145,
  sym_object_type = 146,
  sym_object_id = 147,
  sym_object_num = 148,
  sym_data_region_data = 149,
  sym_data_region_type = 150,
  sym_data_region_data_type = 151,
  sym_data_region_data_list = 152,
  sym_data_region_data_info = 153,
  sym_region_info = 154,
  sym_region_vals = 155,
  sym_bound_pair = 156,
  sym_lower_bound = 157,
  sym_upper_bound = 158,
  sym_point_info = 159,
  sym_point_vals = 160,
  sym_compound_element = 161,
  sym_simple_space_data = 162,
  sym_variable_length_element = 163,
  sym_array_element = 164,
  sym_named_datatype = 165,
  sym_type_name = 166,
  sym_hardlink = 167,
  sym_group = 168,
  sym_group_comment = 169,
  sym_group_name = 170,
  sym_group_attribute = 171,
  sym_group_member = 172,
  sym_dataset = 173,
  sym_dataset_info = 174,
  sym_dataset_name = 175,
  sym_dims = 176,
  sym_dims_values = 177,
  sym_dataset_attribute = 178,
  sym_softlink = 179,
  sym_softlink_name = 180,
  sym_target = 181,
  sym_external_link = 182,
  sym_external_link_name = 183,
  sym_targetfile = 184,
  sym_targetpath = 185,
  sym_targetobj = 186,
  sym_identifier = 187,
  sym__string = 188,
  aux_sym__string_content = 189,
  sym_int_value = 190,
  sym_hex_value = 191,
  aux_sym_root_group_repeat1 = 192,
  aux_sym_root_group_repeat2 = 193,
  aux_sym_root_group_repeat3 = 194,
  aux_sym_path_name_repeat1 = 195,
  aux_sym_dataset_info_repeat1 = 196,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HDF5] = "HDF5",
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE] = "GROUP \"/\" {",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DATATYPE] = "DATATYPE",
  [anon_sym_LBRACE] = "{",
  [sym_anon_named_type_name] = "anon_named_type_name",
  [anon_sym_H5T_STD_I8BE] = "H5T_STD_I8BE",
  [anon_sym_H5T_STD_I8LE] = "H5T_STD_I8LE",
  [anon_sym_H5T_STD_I16BE] = "H5T_STD_I16BE",
  [anon_sym_H5T_STD_I16LE] = "H5T_STD_I16LE",
  [anon_sym_H5T_STD_I32BE] = "H5T_STD_I32BE",
  [anon_sym_H5T_STD_I32LE] = "H5T_STD_I32LE",
  [anon_sym_H5T_STD_I64BE] = "H5T_STD_I64BE",
  [anon_sym_H5T_STD_I64LE] = "H5T_STD_I64LE",
  [anon_sym_H5T_STD_U8BE] = "H5T_STD_U8BE",
  [anon_sym_H5T_STD_U8LE] = "H5T_STD_U8LE",
  [anon_sym_H5T_STD_U16BE] = "H5T_STD_U16BE",
  [anon_sym_H5T_STD_U16LE] = "H5T_STD_U16LE",
  [anon_sym_H5T_STD_U32BE] = "H5T_STD_U32BE",
  [anon_sym_H5T_STD_U32LE] = "H5T_STD_U32LE",
  [anon_sym_H5T_STD_U64BE] = "H5T_STD_U64BE",
  [anon_sym_H5T_STD_U64LE] = "H5T_STD_U64LE",
  [anon_sym_H5T_NATIVE_CHAR] = "H5T_NATIVE_CHAR",
  [anon_sym_H5T_NATIVE_UCHAR] = "H5T_NATIVE_UCHAR",
  [anon_sym_H5T_NATIVE_SHORT] = "H5T_NATIVE_SHORT",
  [anon_sym_H5T_NATIVE_USHORT] = "H5T_NATIVE_USHORT",
  [anon_sym_H5T_NATIVE_INT] = "H5T_NATIVE_INT",
  [anon_sym_H5T_NATIVE_UINT] = "H5T_NATIVE_UINT",
  [anon_sym_H5T_NATIVE_LONG] = "H5T_NATIVE_LONG",
  [anon_sym_H5T_NATIVE_ULONG] = "H5T_NATIVE_ULONG",
  [anon_sym_H5T_NATIVE_LLONG] = "H5T_NATIVE_LLONG",
  [anon_sym_H5T_NATIVE_ULLONG] = "H5T_NATIVE_ULLONG",
  [anon_sym_H5T_IEEE_F32BE] = "H5T_IEEE_F32BE",
  [anon_sym_H5T_IEEE_F32LE] = "H5T_IEEE_F32LE",
  [anon_sym_H5T_IEEE_F64BE] = "H5T_IEEE_F64BE",
  [anon_sym_H5T_IEEE_F64LE] = "H5T_IEEE_F64LE",
  [anon_sym_H5T_NATIVE_FLOAT] = "H5T_NATIVE_FLOAT",
  [anon_sym_H5T_NATIVE_DOUBLE] = "H5T_NATIVE_DOUBLE",
  [anon_sym_H5T_NATIVE_LDOUBLE] = "H5T_NATIVE_LDOUBLE",
  [anon_sym_H5T_STRING] = "H5T_STRING",
  [anon_sym_STRSIZE] = "STRSIZE",
  [anon_sym_SEMI] = ";",
  [anon_sym_STRPAD] = "STRPAD",
  [anon_sym_CSET] = "CSET",
  [anon_sym_CTYPE] = "CTYPE",
  [anon_sym_H5T_STR_NULLTERM] = "H5T_STR_NULLTERM",
  [anon_sym_H5T_STR_NULLPAD] = "H5T_STR_NULLPAD",
  [anon_sym_H5T_STR_SPACEPAD] = "H5T_STR_SPACEPAD",
  [anon_sym_H5T_CSET_ASCII] = "H5T_CSET_ASCII",
  [anon_sym_H5T_CSET_UTF8] = "H5T_CSET_UTF8",
  [anon_sym_H5T_C_S1] = "H5T_C_S1",
  [anon_sym_H5T_FORTRAN_S1] = "H5T_FORTRAN_S1",
  [anon_sym_H5T_STD_B8BE] = "H5T_STD_B8BE",
  [anon_sym_H5T_STD_B8LE] = "H5T_STD_B8LE",
  [anon_sym_H5T_STD_B16BE] = "H5T_STD_B16BE",
  [anon_sym_H5T_STD_B16LE] = "H5T_STD_B16LE",
  [anon_sym_H5T_STD_B32BE] = "H5T_STD_B32BE",
  [anon_sym_H5T_STD_B32LE] = "H5T_STD_B32LE",
  [anon_sym_H5T_STD_B64BE] = "H5T_STD_B64BE",
  [anon_sym_H5T_STD_B64LE] = "H5T_STD_B64LE",
  [anon_sym_ATTRIBUTE] = "ATTRIBUTE",
  [anon_sym_H5T_ENUM] = "H5T_ENUM",
  [anon_sym_SLASH] = "/",
  [anon_sym_NULL] = "NULL",
  [sym_scalar_space] = "scalar_space",
  [anon_sym_SIMPLE] = "SIMPLE",
  [anon_sym_DATASPACE] = "DATASPACE",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_H5S_UNLIMITED] = "H5S_UNLIMITED",
  [anon_sym_DATA] = "DATA",
  [sym__float] = "_float",
  [anon_sym_COLON] = ":",
  [anon_sym_DATASET] = "DATASET",
  [anon_sym_GROUP] = "GROUP",
  [anon_sym_OBJECTID_LBRACE] = "OBJECTID {",
  [anon_sym_REGION_TYPE] = "REGION_TYPE",
  [anon_sym_POINT] = "POINT",
  [anon_sym_BLOCK] = "BLOCK",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_HARDLINK] = "HARDLINK",
  [anon_sym_COMMENT] = "COMMENT",
  [anon_sym_OFFSET] = "OFFSET",
  [anon_sym_SIZE] = "SIZE",
  [anon_sym_HEADER] = "HEADER",
  [anon_sym_RAW] = "RAW",
  [anon_sym_CHECKSUM] = "CHECKSUM",
  [anon_sym_FLETCHER32] = "FLETCHER32",
  [anon_sym_COMPRESSION] = "COMPRESSION",
  [anon_sym_SCALEOFFSET] = "SCALEOFFSET",
  [anon_sym_MIN] = "MIN",
  [anon_sym_BITS] = "BITS",
  [anon_sym_USER_REGISTERED_FILTER] = "USER_REGISTERED_FILTER",
  [anon_sym_UNKNOWN_FILTER] = "UNKNOWN_FILTER",
  [anon_sym_PARAMS] = "PARAMS",
  [anon_sym_SOFTLINK] = "SOFTLINK",
  [anon_sym_LINKTARGET] = "LINKTARGET",
  [anon_sym_EXTERNAL_LINK] = "EXTERNAL_LINK",
  [anon_sym_TARGETFILE] = "TARGETFILE",
  [anon_sym_TARGETPATH] = "TARGETPATH",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_0] = "0",
  [sym_pos_int] = "pos_int",
  [aux_sym_hex_value_token1] = "hex_value_token1",
  [aux_sym_hex_value_token2] = "hex_value_token2",
  [sym_file] = "file",
  [sym_file_name] = "file_name",
  [sym_root_group] = "root_group",
  [sym_datatype] = "datatype",
  [sym_anon_named_datatype] = "anon_named_datatype",
  [sym_atomic_type] = "atomic_type",
  [sym_h5t_integer] = "h5t_integer",
  [sym_h5t_float] = "h5t_float",
  [sym_h5t_bitfield] = "h5t_bitfield",
  [sym_attribute] = "attribute",
  [sym_attr_name] = "attr_name",
  [sym_dataset_type] = "dataset_type",
  [sym_enum_symbol] = "enum_symbol",
  [sym_path_name] = "path_name",
  [sym_path_part] = "path_part",
  [sym_dataspace] = "dataspace",
  [sym_null_space] = "null_space",
  [sym_simple_space] = "simple_space",
  [sym_dataset_space] = "dataset_space",
  [sym_current_dims] = "current_dims",
  [sym_max_dims] = "max_dims",
  [sym_max_dim_list] = "max_dim_list",
  [sym_max_dim] = "max_dim",
  [sym_data] = "data",
  [sym_scalar_space_data] = "scalar_space_data",
  [sym_any_element] = "any_element",
  [sym_any_data_seq] = "any_data_seq",
  [sym_atomic_element] = "atomic_element",
  [sym_integer_data] = "integer_data",
  [sym_float_data] = "float_data",
  [sym_string_data] = "string_data",
  [sym_bitfield_data] = "bitfield_data",
  [sym_opaque_data] = "opaque_data",
  [sym_enum_data] = "enum_data",
  [sym_reference_data] = "reference_data",
  [sym_object_ref_data] = "object_ref_data",
  [sym_object_type] = "object_type",
  [sym_object_id] = "object_id",
  [sym_object_num] = "object_num",
  [sym_data_region_data] = "data_region_data",
  [sym_data_region_type] = "data_region_type",
  [sym_data_region_data_type] = "data_region_data_type",
  [sym_data_region_data_list] = "data_region_data_list",
  [sym_data_region_data_info] = "data_region_data_info",
  [sym_region_info] = "region_info",
  [sym_region_vals] = "region_vals",
  [sym_bound_pair] = "bound_pair",
  [sym_lower_bound] = "lower_bound",
  [sym_upper_bound] = "upper_bound",
  [sym_point_info] = "point_info",
  [sym_point_vals] = "point_vals",
  [sym_compound_element] = "compound_element",
  [sym_simple_space_data] = "simple_space_data",
  [sym_variable_length_element] = "variable_length_element",
  [sym_array_element] = "array_element",
  [sym_named_datatype] = "named_datatype",
  [sym_type_name] = "type_name",
  [sym_hardlink] = "hardlink",
  [sym_group] = "group",
  [sym_group_comment] = "group_comment",
  [sym_group_name] = "group_name",
  [sym_group_attribute] = "group_attribute",
  [sym_group_member] = "group_member",
  [sym_dataset] = "dataset",
  [sym_dataset_info] = "dataset_info",
  [sym_dataset_name] = "dataset_name",
  [sym_dims] = "dims",
  [sym_dims_values] = "dims_values",
  [sym_dataset_attribute] = "dataset_attribute",
  [sym_softlink] = "softlink",
  [sym_softlink_name] = "softlink_name",
  [sym_target] = "target",
  [sym_external_link] = "external_link",
  [sym_external_link_name] = "external_link_name",
  [sym_targetfile] = "targetfile",
  [sym_targetpath] = "targetpath",
  [sym_targetobj] = "targetobj",
  [sym_identifier] = "identifier",
  [sym__string] = "_string",
  [aux_sym__string_content] = "_string_content",
  [sym_int_value] = "int_value",
  [sym_hex_value] = "hex_value",
  [aux_sym_root_group_repeat1] = "root_group_repeat1",
  [aux_sym_root_group_repeat2] = "root_group_repeat2",
  [aux_sym_root_group_repeat3] = "root_group_repeat3",
  [aux_sym_path_name_repeat1] = "path_name_repeat1",
  [aux_sym_dataset_info_repeat1] = "dataset_info_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_HDF5] = anon_sym_HDF5,
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE] = anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DATATYPE] = anon_sym_DATATYPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_anon_named_type_name] = sym_anon_named_type_name,
  [anon_sym_H5T_STD_I8BE] = anon_sym_H5T_STD_I8BE,
  [anon_sym_H5T_STD_I8LE] = anon_sym_H5T_STD_I8LE,
  [anon_sym_H5T_STD_I16BE] = anon_sym_H5T_STD_I16BE,
  [anon_sym_H5T_STD_I16LE] = anon_sym_H5T_STD_I16LE,
  [anon_sym_H5T_STD_I32BE] = anon_sym_H5T_STD_I32BE,
  [anon_sym_H5T_STD_I32LE] = anon_sym_H5T_STD_I32LE,
  [anon_sym_H5T_STD_I64BE] = anon_sym_H5T_STD_I64BE,
  [anon_sym_H5T_STD_I64LE] = anon_sym_H5T_STD_I64LE,
  [anon_sym_H5T_STD_U8BE] = anon_sym_H5T_STD_U8BE,
  [anon_sym_H5T_STD_U8LE] = anon_sym_H5T_STD_U8LE,
  [anon_sym_H5T_STD_U16BE] = anon_sym_H5T_STD_U16BE,
  [anon_sym_H5T_STD_U16LE] = anon_sym_H5T_STD_U16LE,
  [anon_sym_H5T_STD_U32BE] = anon_sym_H5T_STD_U32BE,
  [anon_sym_H5T_STD_U32LE] = anon_sym_H5T_STD_U32LE,
  [anon_sym_H5T_STD_U64BE] = anon_sym_H5T_STD_U64BE,
  [anon_sym_H5T_STD_U64LE] = anon_sym_H5T_STD_U64LE,
  [anon_sym_H5T_NATIVE_CHAR] = anon_sym_H5T_NATIVE_CHAR,
  [anon_sym_H5T_NATIVE_UCHAR] = anon_sym_H5T_NATIVE_UCHAR,
  [anon_sym_H5T_NATIVE_SHORT] = anon_sym_H5T_NATIVE_SHORT,
  [anon_sym_H5T_NATIVE_USHORT] = anon_sym_H5T_NATIVE_USHORT,
  [anon_sym_H5T_NATIVE_INT] = anon_sym_H5T_NATIVE_INT,
  [anon_sym_H5T_NATIVE_UINT] = anon_sym_H5T_NATIVE_UINT,
  [anon_sym_H5T_NATIVE_LONG] = anon_sym_H5T_NATIVE_LONG,
  [anon_sym_H5T_NATIVE_ULONG] = anon_sym_H5T_NATIVE_ULONG,
  [anon_sym_H5T_NATIVE_LLONG] = anon_sym_H5T_NATIVE_LLONG,
  [anon_sym_H5T_NATIVE_ULLONG] = anon_sym_H5T_NATIVE_ULLONG,
  [anon_sym_H5T_IEEE_F32BE] = anon_sym_H5T_IEEE_F32BE,
  [anon_sym_H5T_IEEE_F32LE] = anon_sym_H5T_IEEE_F32LE,
  [anon_sym_H5T_IEEE_F64BE] = anon_sym_H5T_IEEE_F64BE,
  [anon_sym_H5T_IEEE_F64LE] = anon_sym_H5T_IEEE_F64LE,
  [anon_sym_H5T_NATIVE_FLOAT] = anon_sym_H5T_NATIVE_FLOAT,
  [anon_sym_H5T_NATIVE_DOUBLE] = anon_sym_H5T_NATIVE_DOUBLE,
  [anon_sym_H5T_NATIVE_LDOUBLE] = anon_sym_H5T_NATIVE_LDOUBLE,
  [anon_sym_H5T_STRING] = anon_sym_H5T_STRING,
  [anon_sym_STRSIZE] = anon_sym_STRSIZE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STRPAD] = anon_sym_STRPAD,
  [anon_sym_CSET] = anon_sym_CSET,
  [anon_sym_CTYPE] = anon_sym_CTYPE,
  [anon_sym_H5T_STR_NULLTERM] = anon_sym_H5T_STR_NULLTERM,
  [anon_sym_H5T_STR_NULLPAD] = anon_sym_H5T_STR_NULLPAD,
  [anon_sym_H5T_STR_SPACEPAD] = anon_sym_H5T_STR_SPACEPAD,
  [anon_sym_H5T_CSET_ASCII] = anon_sym_H5T_CSET_ASCII,
  [anon_sym_H5T_CSET_UTF8] = anon_sym_H5T_CSET_UTF8,
  [anon_sym_H5T_C_S1] = anon_sym_H5T_C_S1,
  [anon_sym_H5T_FORTRAN_S1] = anon_sym_H5T_FORTRAN_S1,
  [anon_sym_H5T_STD_B8BE] = anon_sym_H5T_STD_B8BE,
  [anon_sym_H5T_STD_B8LE] = anon_sym_H5T_STD_B8LE,
  [anon_sym_H5T_STD_B16BE] = anon_sym_H5T_STD_B16BE,
  [anon_sym_H5T_STD_B16LE] = anon_sym_H5T_STD_B16LE,
  [anon_sym_H5T_STD_B32BE] = anon_sym_H5T_STD_B32BE,
  [anon_sym_H5T_STD_B32LE] = anon_sym_H5T_STD_B32LE,
  [anon_sym_H5T_STD_B64BE] = anon_sym_H5T_STD_B64BE,
  [anon_sym_H5T_STD_B64LE] = anon_sym_H5T_STD_B64LE,
  [anon_sym_ATTRIBUTE] = anon_sym_ATTRIBUTE,
  [anon_sym_H5T_ENUM] = anon_sym_H5T_ENUM,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_scalar_space] = sym_scalar_space,
  [anon_sym_SIMPLE] = anon_sym_SIMPLE,
  [anon_sym_DATASPACE] = anon_sym_DATASPACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_H5S_UNLIMITED] = anon_sym_H5S_UNLIMITED,
  [anon_sym_DATA] = anon_sym_DATA,
  [sym__float] = sym__float,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DATASET] = anon_sym_DATASET,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [anon_sym_OBJECTID_LBRACE] = anon_sym_OBJECTID_LBRACE,
  [anon_sym_REGION_TYPE] = anon_sym_REGION_TYPE,
  [anon_sym_POINT] = anon_sym_POINT,
  [anon_sym_BLOCK] = anon_sym_BLOCK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_HARDLINK] = anon_sym_HARDLINK,
  [anon_sym_COMMENT] = anon_sym_COMMENT,
  [anon_sym_OFFSET] = anon_sym_OFFSET,
  [anon_sym_SIZE] = anon_sym_SIZE,
  [anon_sym_HEADER] = anon_sym_HEADER,
  [anon_sym_RAW] = anon_sym_RAW,
  [anon_sym_CHECKSUM] = anon_sym_CHECKSUM,
  [anon_sym_FLETCHER32] = anon_sym_FLETCHER32,
  [anon_sym_COMPRESSION] = anon_sym_COMPRESSION,
  [anon_sym_SCALEOFFSET] = anon_sym_SCALEOFFSET,
  [anon_sym_MIN] = anon_sym_MIN,
  [anon_sym_BITS] = anon_sym_BITS,
  [anon_sym_USER_REGISTERED_FILTER] = anon_sym_USER_REGISTERED_FILTER,
  [anon_sym_UNKNOWN_FILTER] = anon_sym_UNKNOWN_FILTER,
  [anon_sym_PARAMS] = anon_sym_PARAMS,
  [anon_sym_SOFTLINK] = anon_sym_SOFTLINK,
  [anon_sym_LINKTARGET] = anon_sym_LINKTARGET,
  [anon_sym_EXTERNAL_LINK] = anon_sym_EXTERNAL_LINK,
  [anon_sym_TARGETFILE] = anon_sym_TARGETFILE,
  [anon_sym_TARGETPATH] = anon_sym_TARGETPATH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_0] = anon_sym_0,
  [sym_pos_int] = sym_pos_int,
  [aux_sym_hex_value_token1] = aux_sym_hex_value_token1,
  [aux_sym_hex_value_token2] = aux_sym_hex_value_token2,
  [sym_file] = sym_file,
  [sym_file_name] = sym_file_name,
  [sym_root_group] = sym_root_group,
  [sym_datatype] = sym_datatype,
  [sym_anon_named_datatype] = sym_anon_named_datatype,
  [sym_atomic_type] = sym_atomic_type,
  [sym_h5t_integer] = sym_h5t_integer,
  [sym_h5t_float] = sym_h5t_float,
  [sym_h5t_bitfield] = sym_h5t_bitfield,
  [sym_attribute] = sym_attribute,
  [sym_attr_name] = sym_attr_name,
  [sym_dataset_type] = sym_dataset_type,
  [sym_enum_symbol] = sym_enum_symbol,
  [sym_path_name] = sym_path_name,
  [sym_path_part] = sym_path_part,
  [sym_dataspace] = sym_dataspace,
  [sym_null_space] = sym_null_space,
  [sym_simple_space] = sym_simple_space,
  [sym_dataset_space] = sym_dataset_space,
  [sym_current_dims] = sym_current_dims,
  [sym_max_dims] = sym_max_dims,
  [sym_max_dim_list] = sym_max_dim_list,
  [sym_max_dim] = sym_max_dim,
  [sym_data] = sym_data,
  [sym_scalar_space_data] = sym_scalar_space_data,
  [sym_any_element] = sym_any_element,
  [sym_any_data_seq] = sym_any_data_seq,
  [sym_atomic_element] = sym_atomic_element,
  [sym_integer_data] = sym_integer_data,
  [sym_float_data] = sym_float_data,
  [sym_string_data] = sym_string_data,
  [sym_bitfield_data] = sym_bitfield_data,
  [sym_opaque_data] = sym_opaque_data,
  [sym_enum_data] = sym_enum_data,
  [sym_reference_data] = sym_reference_data,
  [sym_object_ref_data] = sym_object_ref_data,
  [sym_object_type] = sym_object_type,
  [sym_object_id] = sym_object_id,
  [sym_object_num] = sym_object_num,
  [sym_data_region_data] = sym_data_region_data,
  [sym_data_region_type] = sym_data_region_type,
  [sym_data_region_data_type] = sym_data_region_data_type,
  [sym_data_region_data_list] = sym_data_region_data_list,
  [sym_data_region_data_info] = sym_data_region_data_info,
  [sym_region_info] = sym_region_info,
  [sym_region_vals] = sym_region_vals,
  [sym_bound_pair] = sym_bound_pair,
  [sym_lower_bound] = sym_lower_bound,
  [sym_upper_bound] = sym_upper_bound,
  [sym_point_info] = sym_point_info,
  [sym_point_vals] = sym_point_vals,
  [sym_compound_element] = sym_compound_element,
  [sym_simple_space_data] = sym_simple_space_data,
  [sym_variable_length_element] = sym_variable_length_element,
  [sym_array_element] = sym_array_element,
  [sym_named_datatype] = sym_named_datatype,
  [sym_type_name] = sym_type_name,
  [sym_hardlink] = sym_hardlink,
  [sym_group] = sym_group,
  [sym_group_comment] = sym_group_comment,
  [sym_group_name] = sym_group_name,
  [sym_group_attribute] = sym_group_attribute,
  [sym_group_member] = sym_group_member,
  [sym_dataset] = sym_dataset,
  [sym_dataset_info] = sym_dataset_info,
  [sym_dataset_name] = sym_dataset_name,
  [sym_dims] = sym_dims,
  [sym_dims_values] = sym_dims_values,
  [sym_dataset_attribute] = sym_dataset_attribute,
  [sym_softlink] = sym_softlink,
  [sym_softlink_name] = sym_softlink_name,
  [sym_target] = sym_target,
  [sym_external_link] = sym_external_link,
  [sym_external_link_name] = sym_external_link_name,
  [sym_targetfile] = sym_targetfile,
  [sym_targetpath] = sym_targetpath,
  [sym_targetobj] = sym_targetobj,
  [sym_identifier] = sym_identifier,
  [sym__string] = sym__string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_int_value] = sym_int_value,
  [sym_hex_value] = sym_hex_value,
  [aux_sym_root_group_repeat1] = aux_sym_root_group_repeat1,
  [aux_sym_root_group_repeat2] = aux_sym_root_group_repeat2,
  [aux_sym_root_group_repeat3] = aux_sym_root_group_repeat3,
  [aux_sym_path_name_repeat1] = aux_sym_path_name_repeat1,
  [aux_sym_dataset_info_repeat1] = aux_sym_dataset_info_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_HDF5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATATYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_anon_named_type_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_H5T_STD_I8BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I8LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I16BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I16LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I32BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I32LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I64BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_I64LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U8BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U8LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U16BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U16LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U32BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U32LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U64BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_U64LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_CHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_UCHAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_SHORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_USHORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_UINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_LONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_ULONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_LLONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_ULLONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_IEEE_F32BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_IEEE_F32LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_IEEE_F64BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_IEEE_F64LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_NATIVE_LDOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRSIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRPAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STR_NULLTERM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STR_NULLPAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STR_SPACEPAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_CSET_ASCII] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_CSET_UTF8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_C_S1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_FORTRAN_S1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B8BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B8LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B16BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B16LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B32BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B32LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B64BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_STD_B64LE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTRIBUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5T_ENUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_scalar_space] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SIMPLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASPACE] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H5S_UNLIMITED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATA] = {
    .visible = true,
    .named = false,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATASET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJECTID_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REGION_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLOCK] = {
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
  [anon_sym_HARDLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFFSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEADER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RAW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHECKSUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLETCHER32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPRESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCALEOFFSET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BITS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USER_REGISTERED_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNKNOWN_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARAMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOFTLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINKTARGET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERNAL_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGETFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGETPATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [sym_pos_int] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_root_group] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_anon_named_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_h5t_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_h5t_float] = {
    .visible = true,
    .named = true,
  },
  [sym_h5t_bitfield] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_path_name] = {
    .visible = true,
    .named = true,
  },
  [sym_path_part] = {
    .visible = true,
    .named = true,
  },
  [sym_dataspace] = {
    .visible = true,
    .named = true,
  },
  [sym_null_space] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_space] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_space] = {
    .visible = true,
    .named = true,
  },
  [sym_current_dims] = {
    .visible = true,
    .named = true,
  },
  [sym_max_dims] = {
    .visible = true,
    .named = true,
  },
  [sym_max_dim_list] = {
    .visible = true,
    .named = true,
  },
  [sym_max_dim] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_space_data] = {
    .visible = true,
    .named = true,
  },
  [sym_any_element] = {
    .visible = true,
    .named = true,
  },
  [sym_any_data_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_element] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_data] = {
    .visible = true,
    .named = true,
  },
  [sym_float_data] = {
    .visible = true,
    .named = true,
  },
  [sym_string_data] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_data] = {
    .visible = true,
    .named = true,
  },
  [sym_opaque_data] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_data] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_data] = {
    .visible = true,
    .named = true,
  },
  [sym_object_ref_data] = {
    .visible = true,
    .named = true,
  },
  [sym_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_object_id] = {
    .visible = true,
    .named = true,
  },
  [sym_object_num] = {
    .visible = true,
    .named = true,
  },
  [sym_data_region_data] = {
    .visible = true,
    .named = true,
  },
  [sym_data_region_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_region_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_region_data_list] = {
    .visible = true,
    .named = true,
  },
  [sym_data_region_data_info] = {
    .visible = true,
    .named = true,
  },
  [sym_region_info] = {
    .visible = true,
    .named = true,
  },
  [sym_region_vals] = {
    .visible = true,
    .named = true,
  },
  [sym_bound_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_lower_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_upper_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_point_info] = {
    .visible = true,
    .named = true,
  },
  [sym_point_vals] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_element] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_space_data] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_length_element] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym_named_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_hardlink] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_group_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_group_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_group_member] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_info] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dims] = {
    .visible = true,
    .named = true,
  },
  [sym_dims_values] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_softlink] = {
    .visible = true,
    .named = true,
  },
  [sym_softlink_name] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link_name] = {
    .visible = true,
    .named = true,
  },
  [sym_targetfile] = {
    .visible = true,
    .named = true,
  },
  [sym_targetpath] = {
    .visible = true,
    .named = true,
  },
  [sym_targetobj] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_int_value] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_group_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dataset_info_repeat1] = {
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
  [66] = 36,
  [67] = 35,
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
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 39,
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
  [131] = 101,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(445);
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '(') ADVANCE(513);
      if (lookahead == ')') ADVANCE(514);
      if (lookahead == ',') ADVANCE(515);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == '/') ADVANCE(508);
      if (lookahead == '0') ADVANCE(559);
      if (lookahead == ':') ADVANCE(524);
      if (lookahead == ';') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'B') ADVANCE(213);
      if (lookahead == 'C') ADVANCE(200);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(250);
      if (lookahead == 'G') ADVANCE(331);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'M') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(269);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == '\\') ADVANCE(437);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == '{') ADVANCE(450);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(444)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\\') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '(') ADVANCE(513);
      if (lookahead == ',') ADVANCE(515);
      if (lookahead == '/') ADVANCE(508);
      if (lookahead == '0') ADVANCE(557);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(345);
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == '{') ADVANCE(450);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == '0') ADVANCE(558);
      if (lookahead == 'A') ADVANCE(379);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(415);
      if (lookahead == 'G') ADVANCE(331);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == '{') ADVANCE(450);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(442);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(560);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= 'F')) ADVANCE(442);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(496);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(497);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(540);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(348);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(446);
      END_STATE();
    case 32:
      if (lookahead == '5') ADVANCE(349);
      END_STATE();
    case 33:
      if (lookahead == '6') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == '6') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == '8') ADVANCE(495);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(412);
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(517);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(322);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(264);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(360);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(518);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'O') ADVANCE(215);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(382);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(332);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'U') ADVANCE(387);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(251);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(325);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'E') ADVANCE(297);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(287);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(386);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(328);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(329);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(381);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(375);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(390);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(346);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(347);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(230);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(230);
      if (lookahead == 'F') ADVANCE(183);
      END_STATE();
    case 70:
      if (lookahead == 'B') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(408);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(126);
      if (lookahead == 'L') ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(129);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(132);
      if (lookahead == 'L') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 'B') ADVANCE(140);
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 83:
      if (lookahead == 'B') ADVANCE(142);
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 84:
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'L') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 86:
      if (lookahead == 'B') ADVANCE(248);
      END_STATE();
    case 87:
      if (lookahead == 'B') ADVANCE(249);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(358);
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == 'F') ADVANCE(302);
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(366);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(231);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(202);
      if (lookahead == 'D') ADVANCE(298);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'O') ADVANCE(184);
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(235);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(383);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(222);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'L') ADVANCE(252);
      if (lookahead == 'S') ADVANCE(205);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(488);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(2);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(516);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(492);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(493);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(253);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(421);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(421);
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(275);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(432);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(536);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(490);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(511);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(486);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(449);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(506);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(512);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(551);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(528);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(498);
      END_STATE();
    case 121:
      if (lookahead == 'E') ADVANCE(499);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 123:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 124:
      if (lookahead == 'E') ADVANCE(460);
      END_STATE();
    case 125:
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 126:
      if (lookahead == 'E') ADVANCE(500);
      END_STATE();
    case 127:
      if (lookahead == 'E') ADVANCE(501);
      END_STATE();
    case 128:
      if (lookahead == 'E') ADVANCE(502);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(503);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 131:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 133:
      if (lookahead == 'E') ADVANCE(455);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(457);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(459);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(462);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(464);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(478);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(479);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(480);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(481);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(483);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(484);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(364);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(380);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(427);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(423);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(367);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(368);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(370);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(370);
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(327);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(330);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(371);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(372);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(385);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(288);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 180:
      if (lookahead == 'F') ADVANCE(31);
      END_STATE();
    case 181:
      if (lookahead == 'F') ADVANCE(25);
      END_STATE();
    case 182:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 183:
      if (lookahead == 'F') ADVANCE(357);
      END_STATE();
    case 184:
      if (lookahead == 'F') ADVANCE(400);
      END_STATE();
    case 185:
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'P') ADVANCE(62);
      END_STATE();
    case 186:
      if (lookahead == 'F') ADVANCE(218);
      END_STATE();
    case 187:
      if (lookahead == 'F') ADVANCE(359);
      END_STATE();
    case 188:
      if (lookahead == 'F') ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == 'F') ADVANCE(229);
      END_STATE();
    case 190:
      if (lookahead == 'G') ADVANCE(485);
      END_STATE();
    case 191:
      if (lookahead == 'G') ADVANCE(474);
      END_STATE();
    case 192:
      if (lookahead == 'G') ADVANCE(476);
      END_STATE();
    case 193:
      if (lookahead == 'G') ADVANCE(475);
      END_STATE();
    case 194:
      if (lookahead == 'G') ADVANCE(477);
      END_STATE();
    case 195:
      if (lookahead == 'G') ADVANCE(214);
      END_STATE();
    case 196:
      if (lookahead == 'G') ADVANCE(220);
      END_STATE();
    case 197:
      if (lookahead == 'G') ADVANCE(163);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(172);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(174);
      END_STATE();
    case 200:
      if (lookahead == 'H') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == 'S') ADVANCE(153);
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 201:
      if (lookahead == 'H') ADVANCE(552);
      END_STATE();
    case 202:
      if (lookahead == 'H') ADVANCE(60);
      END_STATE();
    case 203:
      if (lookahead == 'H') ADVANCE(305);
      END_STATE();
    case 204:
      if (lookahead == 'H') ADVANCE(61);
      END_STATE();
    case 205:
      if (lookahead == 'H') ADVANCE(307);
      END_STATE();
    case 206:
      if (lookahead == 'H') ADVANCE(164);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(272);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(419);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(411);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(494);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(293);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(300);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(389);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(362);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == '_') ADVANCE(292);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(211);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(392);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 225:
      if (lookahead == 'I') ADVANCE(301);
      END_STATE();
    case 226:
      if (lookahead == 'I') ADVANCE(247);
      END_STATE();
    case 227:
      if (lookahead == 'I') ADVANCE(282);
      END_STATE();
    case 228:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 229:
      if (lookahead == 'I') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 'J') ADVANCE(150);
      END_STATE();
    case 231:
      if (lookahead == 'K') ADVANCE(530);
      END_STATE();
    case 232:
      if (lookahead == 'K') ADVANCE(533);
      END_STATE();
    case 233:
      if (lookahead == 'K') ADVANCE(548);
      END_STATE();
    case 234:
      if (lookahead == 'K') ADVANCE(550);
      END_STATE();
    case 235:
      if (lookahead == 'K') ADVANCE(354);
      END_STATE();
    case 236:
      if (lookahead == 'K') ADVANCE(274);
      END_STATE();
    case 237:
      if (lookahead == 'K') ADVANCE(399);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(509);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(315);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(238);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(217);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(431);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(308);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(239);
      END_STATE();
    case 246:
      if (lookahead == 'L') ADVANCE(113);
      END_STATE();
    case 247:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 248:
      if (lookahead == 'L') ADVANCE(148);
      END_STATE();
    case 249:
      if (lookahead == 'L') ADVANCE(149);
      END_STATE();
    case 250:
      if (lookahead == 'L') ADVANCE(154);
      END_STATE();
    case 251:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(281);
      END_STATE();
    case 253:
      if (lookahead == 'L') ADVANCE(224);
      END_STATE();
    case 254:
      if (lookahead == 'L') ADVANCE(227);
      END_STATE();
    case 255:
      if (lookahead == 'L') ADVANCE(396);
      END_STATE();
    case 256:
      if (lookahead == 'L') ADVANCE(228);
      END_STATE();
    case 257:
      if (lookahead == 'L') ADVANCE(397);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(266);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(539);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(507);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(491);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(319);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(319);
      if (lookahead == 'Z') ADVANCE(111);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(351);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(177);
      END_STATE();
    case 266:
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'P') ADVANCE(338);
      END_STATE();
    case 267:
      if (lookahead == 'M') ADVANCE(265);
      END_STATE();
    case 268:
      if (lookahead == 'M') ADVANCE(223);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(543);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(541);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(237);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(295);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(191);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(430);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(192);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(242);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(405);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(193);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(233);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(426);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(194);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(234);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(365);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(428);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(369);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(373);
      END_STATE();
    case 290:
      if (lookahead == 'N') ADVANCE(374);
      END_STATE();
    case 291:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 292:
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead == 'S') ADVANCE(320);
      END_STATE();
    case 293:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 294:
      if (lookahead == 'O') ADVANCE(404);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(413);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(402);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(276);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(344);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(277);
      END_STATE();
    case 304:
      if (lookahead == 'O') ADVANCE(284);
      END_STATE();
    case 305:
      if (lookahead == 'O') ADVANCE(341);
      END_STATE();
    case 306:
      if (lookahead == 'O') ADVANCE(406);
      END_STATE();
    case 307:
      if (lookahead == 'O') ADVANCE(342);
      END_STATE();
    case 308:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 309:
      if (lookahead == 'O') ADVANCE(410);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(526);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(3);
      END_STATE();
    case 312:
      if (lookahead == 'P') ADVANCE(112);
      END_STATE();
    case 313:
      if (lookahead == 'P') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 314:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 315:
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 316:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 317:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 318:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 319:
      if (lookahead == 'P') ADVANCE(246);
      END_STATE();
    case 320:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 321:
      if (lookahead == 'P') ADVANCE(62);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(313);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(537);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(510);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(546);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(468);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(469);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(545);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(197);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(208);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(429);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(261);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 339:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 340:
      if (lookahead == 'R') ADVANCE(175);
      END_STATE();
    case 341:
      if (lookahead == 'R') ADVANCE(376);
      END_STATE();
    case 342:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 343:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 344:
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 345:
      if (lookahead == 'R') ADVANCE(306);
      END_STATE();
    case 346:
      if (lookahead == 'R') ADVANCE(198);
      END_STATE();
    case 347:
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(420);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(544);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(547);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(403);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(361);
      END_STATE();
    case 357:
      if (lookahead == 'S') ADVANCE(161);
      END_STATE();
    case 358:
      if (lookahead == 'S') ADVANCE(169);
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 360:
      if (lookahead == 'S') ADVANCE(166);
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 361:
      if (lookahead == 'S') ADVANCE(225);
      END_STATE();
    case 362:
      if (lookahead == 'S') ADVANCE(395);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(489);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(529);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(535);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(534);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(542);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(472);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(473);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(470);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(471);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(384);
      END_STATE();
    case 379:
      if (lookahead == 'T') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 380:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 381:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 382:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 383:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 384:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 385:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 386:
      if (lookahead == 'T') ADVANCE(210);
      END_STATE();
    case 387:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 388:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 389:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 390:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 391:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 392:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 393:
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 394:
      if (lookahead == 'T') ADVANCE(157);
      END_STATE();
    case 395:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 396:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 397:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 398:
      if (lookahead == 'T') ADVANCE(418);
      END_STATE();
    case 399:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 400:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 401:
      if (lookahead == 'U') ADVANCE(241);
      END_STATE();
    case 402:
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 403:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 404:
      if (lookahead == 'U') ADVANCE(310);
      END_STATE();
    case 405:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 406:
      if (lookahead == 'U') ADVANCE(311);
      END_STATE();
    case 407:
      if (lookahead == 'U') ADVANCE(279);
      END_STATE();
    case 408:
      if (lookahead == 'U') ADVANCE(391);
      END_STATE();
    case 409:
      if (lookahead == 'U') ADVANCE(245);
      END_STATE();
    case 410:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 411:
      if (lookahead == 'V') ADVANCE(160);
      END_STATE();
    case 412:
      if (lookahead == 'W') ADVANCE(538);
      END_STATE();
    case 413:
      if (lookahead == 'W') ADVANCE(283);
      END_STATE();
    case 414:
      if (lookahead == 'X') ADVANCE(394);
      END_STATE();
    case 415:
      if (lookahead == 'X') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 416:
      if (lookahead == 'Y') ADVANCE(312);
      END_STATE();
    case 417:
      if (lookahead == 'Y') ADVANCE(317);
      END_STATE();
    case 418:
      if (lookahead == 'Y') ADVANCE(318);
      END_STATE();
    case 419:
      if (lookahead == 'Z') ADVANCE(114);
      END_STATE();
    case 420:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 421:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 422:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 423:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 424:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 425:
      if (lookahead == '_') ADVANCE(407);
      END_STATE();
    case 426:
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 427:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 428:
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 429:
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 430:
      if (lookahead == '_') ADVANCE(398);
      END_STATE();
    case 431:
      if (lookahead == '_') ADVANCE(256);
      END_STATE();
    case 432:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 433:
      if (lookahead == 'x') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 434:
      if (lookahead == '{') ADVANCE(527);
      END_STATE();
    case 435:
      if (lookahead == '{') ADVANCE(447);
      END_STATE();
    case 436:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 437:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 438:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 440:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 441:
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(563);
      END_STATE();
    case 442:
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 443:
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(441);
      END_STATE();
    case 444:
      if (eof) ADVANCE(445);
      if (lookahead == '"') ADVANCE(553);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '(') ADVANCE(513);
      if (lookahead == ')') ADVANCE(514);
      if (lookahead == ',') ADVANCE(515);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == '/') ADVANCE(508);
      if (lookahead == '0') ADVANCE(559);
      if (lookahead == ':') ADVANCE(524);
      if (lookahead == ';') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(378);
      if (lookahead == 'B') ADVANCE(213);
      if (lookahead == 'C') ADVANCE(200);
      if (lookahead == 'D') ADVANCE(47);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(250);
      if (lookahead == 'G') ADVANCE(331);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'M') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(269);
      if (lookahead == '[') ADVANCE(531);
      if (lookahead == ']') ADVANCE(532);
      if (lookahead == '{') ADVANCE(450);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(444)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_HDF5);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DATATYPE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_anon_named_type_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I8BE);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I8LE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I16BE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I16LE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I32BE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I32LE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I64BE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I64LE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U8BE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U8LE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U16BE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U16LE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U32BE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U32LE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U64BE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U64LE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_CHAR);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_UCHAR);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_SHORT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_USHORT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_INT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_UINT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LONG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_ULONG);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LLONG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_ULLONG);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F32BE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F32LE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F64BE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F64LE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_FLOAT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_DOUBLE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LDOUBLE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_H5T_STRING);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_STRSIZE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_STRPAD);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_CSET);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_CTYPE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_H5T_STR_NULLTERM);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_H5T_STR_NULLPAD);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_H5T_STR_SPACEPAD);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_H5T_CSET_ASCII);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_H5T_CSET_UTF8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_H5T_C_S1);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_H5T_FORTRAN_S1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B8BE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B8LE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B16BE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B16LE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B32BE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B32LE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B64BE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B64LE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ATTRIBUTE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_H5T_ENUM);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_scalar_space);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SIMPLE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DATASPACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_H5S_UNLIMITED);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (lookahead == 'S') ADVANCE(167);
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DATA);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '_') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '_') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == '_') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DATASET);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_OBJECTID_LBRACE);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_REGION_TYPE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_POINT);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_BLOCK);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_HARDLINK);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_COMMENT);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_SIZE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_HEADER);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_RAW);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_CHECKSUM);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_FLETCHER32);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_COMPRESSION);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_SCALEOFFSET);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BITS);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_USER_REGISTERED_FILTER);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_UNKNOWN_FILTER);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PARAMS);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_SOFTLINK);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LINKTARGET);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_EXTERNAL_LINK);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_TARGETFILE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_TARGETPATH);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'x') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_pos_int);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_pos_int);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_pos_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_hex_value_token1);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_hex_value_token2);
      if (lookahead == '.') ADVANCE(522);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_hex_value_token2);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_hex_value_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if ((':' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_hex_value_token2);
      if (('0' <= lookahead && lookahead <= 'F')) ADVANCE(567);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HDF5] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DATATYPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_anon_named_type_name] = ACTIONS(1),
    [anon_sym_H5T_STD_I8BE] = ACTIONS(1),
    [anon_sym_H5T_STD_I8LE] = ACTIONS(1),
    [anon_sym_H5T_STD_I16BE] = ACTIONS(1),
    [anon_sym_H5T_STD_I16LE] = ACTIONS(1),
    [anon_sym_H5T_STD_I32BE] = ACTIONS(1),
    [anon_sym_H5T_STD_I32LE] = ACTIONS(1),
    [anon_sym_H5T_STD_I64BE] = ACTIONS(1),
    [anon_sym_H5T_STD_I64LE] = ACTIONS(1),
    [anon_sym_H5T_STD_U8BE] = ACTIONS(1),
    [anon_sym_H5T_STD_U8LE] = ACTIONS(1),
    [anon_sym_H5T_STD_U16BE] = ACTIONS(1),
    [anon_sym_H5T_STD_U16LE] = ACTIONS(1),
    [anon_sym_H5T_STD_U32BE] = ACTIONS(1),
    [anon_sym_H5T_STD_U32LE] = ACTIONS(1),
    [anon_sym_H5T_STD_U64BE] = ACTIONS(1),
    [anon_sym_H5T_STD_U64LE] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_CHAR] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_UCHAR] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_SHORT] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_USHORT] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_INT] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_UINT] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_LONG] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_ULONG] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_LLONG] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_ULLONG] = ACTIONS(1),
    [anon_sym_H5T_IEEE_F32BE] = ACTIONS(1),
    [anon_sym_H5T_IEEE_F32LE] = ACTIONS(1),
    [anon_sym_H5T_IEEE_F64BE] = ACTIONS(1),
    [anon_sym_H5T_IEEE_F64LE] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_FLOAT] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_DOUBLE] = ACTIONS(1),
    [anon_sym_H5T_NATIVE_LDOUBLE] = ACTIONS(1),
    [anon_sym_H5T_STRING] = ACTIONS(1),
    [anon_sym_STRSIZE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STRPAD] = ACTIONS(1),
    [anon_sym_CSET] = ACTIONS(1),
    [anon_sym_CTYPE] = ACTIONS(1),
    [anon_sym_H5T_STR_NULLTERM] = ACTIONS(1),
    [anon_sym_H5T_STR_NULLPAD] = ACTIONS(1),
    [anon_sym_H5T_STR_SPACEPAD] = ACTIONS(1),
    [anon_sym_H5T_CSET_ASCII] = ACTIONS(1),
    [anon_sym_H5T_CSET_UTF8] = ACTIONS(1),
    [anon_sym_H5T_C_S1] = ACTIONS(1),
    [anon_sym_H5T_FORTRAN_S1] = ACTIONS(1),
    [anon_sym_H5T_STD_B8BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B8LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B16BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B16LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B32BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B32LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B64BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B64LE] = ACTIONS(1),
    [anon_sym_ATTRIBUTE] = ACTIONS(1),
    [anon_sym_H5T_ENUM] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_scalar_space] = ACTIONS(1),
    [anon_sym_SIMPLE] = ACTIONS(1),
    [anon_sym_DATASPACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_H5S_UNLIMITED] = ACTIONS(1),
    [anon_sym_DATA] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DATASET] = ACTIONS(1),
    [anon_sym_GROUP] = ACTIONS(1),
    [anon_sym_OBJECTID_LBRACE] = ACTIONS(1),
    [anon_sym_REGION_TYPE] = ACTIONS(1),
    [anon_sym_POINT] = ACTIONS(1),
    [anon_sym_BLOCK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_HARDLINK] = ACTIONS(1),
    [anon_sym_COMMENT] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_SIZE] = ACTIONS(1),
    [anon_sym_HEADER] = ACTIONS(1),
    [anon_sym_RAW] = ACTIONS(1),
    [anon_sym_CHECKSUM] = ACTIONS(1),
    [anon_sym_FLETCHER32] = ACTIONS(1),
    [anon_sym_COMPRESSION] = ACTIONS(1),
    [anon_sym_SCALEOFFSET] = ACTIONS(1),
    [anon_sym_MIN] = ACTIONS(1),
    [anon_sym_BITS] = ACTIONS(1),
    [anon_sym_USER_REGISTERED_FILTER] = ACTIONS(1),
    [anon_sym_UNKNOWN_FILTER] = ACTIONS(1),
    [anon_sym_PARAMS] = ACTIONS(1),
    [anon_sym_SOFTLINK] = ACTIONS(1),
    [anon_sym_LINKTARGET] = ACTIONS(1),
    [anon_sym_EXTERNAL_LINK] = ACTIONS(1),
    [anon_sym_TARGETFILE] = ACTIONS(1),
    [anon_sym_TARGETPATH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [sym_pos_int] = ACTIONS(1),
    [aux_sym_hex_value_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(244),
    [anon_sym_HDF5] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 1,
      anon_sym_DATATYPE,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    ACTIONS(23), 1,
      anon_sym_DATA,
    STATE(50), 1,
      sym_dataset_type,
    STATE(75), 1,
      sym_atomic_type,
    STATE(79), 1,
      sym_datatype,
    STATE(114), 1,
      sym_dataspace,
    STATE(138), 1,
      sym_dataset_space,
    STATE(218), 1,
      sym_data,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [96] = 18,
    ACTIONS(7), 1,
      anon_sym_DATATYPE,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    ACTIONS(23), 1,
      anon_sym_DATA,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_dataset_type,
    STATE(75), 1,
      sym_atomic_type,
    STATE(79), 1,
      sym_datatype,
    STATE(114), 1,
      sym_dataspace,
    STATE(137), 1,
      sym_dataset_space,
    STATE(228), 1,
      sym_data,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [192] = 10,
    ACTIONS(7), 1,
      anon_sym_DATATYPE,
    ACTIONS(27), 1,
      anon_sym_HARDLINK,
    STATE(61), 1,
      sym_dataset_type,
    STATE(75), 1,
      sym_atomic_type,
    STATE(79), 1,
      sym_datatype,
    STATE(246), 2,
      sym_hardlink,
      sym_dataset_info,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [264] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_DATA,
    ACTIONS(29), 47,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [320] = 2,
    ACTIONS(37), 1,
      anon_sym_DATA,
    ACTIONS(35), 48,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_COMMA,
  [374] = 2,
    ACTIONS(41), 1,
      anon_sym_DATA,
    ACTIONS(39), 48,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_COMMA,
  [428] = 2,
    ACTIONS(45), 1,
      anon_sym_DATA,
    ACTIONS(43), 48,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_COMMA,
  [482] = 8,
    ACTIONS(7), 1,
      anon_sym_DATATYPE,
    STATE(62), 1,
      sym_dataset_type,
    STATE(75), 1,
      sym_atomic_type,
    STATE(79), 1,
      sym_datatype,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [547] = 2,
    ACTIONS(49), 1,
      anon_sym_DATA,
    ACTIONS(47), 47,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [600] = 6,
    STATE(75), 1,
      sym_atomic_type,
    STATE(191), 1,
      sym_datatype,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [659] = 6,
    STATE(75), 1,
      sym_atomic_type,
    STATE(193), 1,
      sym_datatype,
    STATE(76), 3,
      sym_h5t_integer,
      sym_h5t_float,
      sym_h5t_bitfield,
    ACTIONS(11), 7,
      anon_sym_H5T_IEEE_F32BE,
      anon_sym_H5T_IEEE_F32LE,
      anon_sym_H5T_IEEE_F64BE,
      anon_sym_H5T_IEEE_F64LE,
      anon_sym_H5T_NATIVE_FLOAT,
      anon_sym_H5T_NATIVE_DOUBLE,
      anon_sym_H5T_NATIVE_LDOUBLE,
    ACTIONS(13), 8,
      anon_sym_H5T_STD_B8BE,
      anon_sym_H5T_STD_B8LE,
      anon_sym_H5T_STD_B16BE,
      anon_sym_H5T_STD_B16LE,
      anon_sym_H5T_STD_B32BE,
      anon_sym_H5T_STD_B32LE,
      anon_sym_H5T_STD_B64BE,
      anon_sym_H5T_STD_B64LE,
    ACTIONS(9), 26,
      anon_sym_H5T_STD_I8BE,
      anon_sym_H5T_STD_I8LE,
      anon_sym_H5T_STD_I16BE,
      anon_sym_H5T_STD_I16LE,
      anon_sym_H5T_STD_I32BE,
      anon_sym_H5T_STD_I32LE,
      anon_sym_H5T_STD_I64BE,
      anon_sym_H5T_STD_I64LE,
      anon_sym_H5T_STD_U8BE,
      anon_sym_H5T_STD_U8LE,
      anon_sym_H5T_STD_U16BE,
      anon_sym_H5T_STD_U16LE,
      anon_sym_H5T_STD_U32BE,
      anon_sym_H5T_STD_U32LE,
      anon_sym_H5T_STD_U64BE,
      anon_sym_H5T_STD_U64LE,
      anon_sym_H5T_NATIVE_CHAR,
      anon_sym_H5T_NATIVE_UCHAR,
      anon_sym_H5T_NATIVE_SHORT,
      anon_sym_H5T_NATIVE_USHORT,
      anon_sym_H5T_NATIVE_INT,
      anon_sym_H5T_NATIVE_UINT,
      anon_sym_H5T_NATIVE_LONG,
      anon_sym_H5T_NATIVE_ULONG,
      anon_sym_H5T_NATIVE_LLONG,
      anon_sym_H5T_NATIVE_ULLONG,
  [718] = 22,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_NULL,
    ACTIONS(57), 1,
      sym__float,
    ACTIONS(59), 1,
      anon_sym_DATASET,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_hex_value_token1,
    ACTIONS(69), 1,
      aux_sym_hex_value_token2,
    STATE(112), 1,
      sym_hex_value,
    STATE(115), 1,
      sym_object_type,
    STATE(133), 1,
      sym_identifier,
    STATE(148), 1,
      sym_int_value,
    STATE(158), 1,
      sym_enum_symbol,
    STATE(164), 1,
      sym__string,
    STATE(167), 1,
      sym_any_element,
    STATE(197), 1,
      sym_any_data_seq,
    ACTIONS(51), 2,
      anon_sym_DATATYPE,
      anon_sym_GROUP,
    ACTIONS(65), 2,
      anon_sym_0,
      sym_pos_int,
    STATE(154), 2,
      sym_object_ref_data,
      sym_data_region_data,
    STATE(200), 2,
      sym_scalar_space_data,
      sym_simple_space_data,
    STATE(160), 4,
      sym_atomic_element,
      sym_compound_element,
      sym_variable_length_element,
      sym_array_element,
    STATE(161), 7,
      sym_integer_data,
      sym_float_data,
      sym_string_data,
      sym_bitfield_data,
      sym_opaque_data,
      sym_enum_data,
      sym_reference_data,
  [798] = 21,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_NULL,
    ACTIONS(57), 1,
      sym__float,
    ACTIONS(59), 1,
      anon_sym_DATASET,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_hex_value_token1,
    ACTIONS(69), 1,
      aux_sym_hex_value_token2,
    STATE(112), 1,
      sym_hex_value,
    STATE(115), 1,
      sym_object_type,
    STATE(133), 1,
      sym_identifier,
    STATE(146), 1,
      sym_any_element,
    STATE(148), 1,
      sym_int_value,
    STATE(158), 1,
      sym_enum_symbol,
    STATE(164), 1,
      sym__string,
    STATE(180), 1,
      sym_any_data_seq,
    ACTIONS(51), 2,
      anon_sym_DATATYPE,
      anon_sym_GROUP,
    ACTIONS(65), 2,
      anon_sym_0,
      sym_pos_int,
    STATE(154), 2,
      sym_object_ref_data,
      sym_data_region_data,
    STATE(160), 4,
      sym_atomic_element,
      sym_compound_element,
      sym_variable_length_element,
      sym_array_element,
    STATE(161), 7,
      sym_integer_data,
      sym_float_data,
      sym_string_data,
      sym_bitfield_data,
      sym_opaque_data,
      sym_enum_data,
      sym_reference_data,
  [874] = 21,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_NULL,
    ACTIONS(57), 1,
      sym__float,
    ACTIONS(59), 1,
      anon_sym_DATASET,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_hex_value_token1,
    ACTIONS(69), 1,
      aux_sym_hex_value_token2,
    STATE(112), 1,
      sym_hex_value,
    STATE(115), 1,
      sym_object_type,
    STATE(133), 1,
      sym_identifier,
    STATE(146), 1,
      sym_any_element,
    STATE(148), 1,
      sym_int_value,
    STATE(158), 1,
      sym_enum_symbol,
    STATE(164), 1,
      sym__string,
    STATE(182), 1,
      sym_any_data_seq,
    ACTIONS(51), 2,
      anon_sym_DATATYPE,
      anon_sym_GROUP,
    ACTIONS(65), 2,
      anon_sym_0,
      sym_pos_int,
    STATE(154), 2,
      sym_object_ref_data,
      sym_data_region_data,
    STATE(160), 4,
      sym_atomic_element,
      sym_compound_element,
      sym_variable_length_element,
      sym_array_element,
    STATE(161), 7,
      sym_integer_data,
      sym_float_data,
      sym_string_data,
      sym_bitfield_data,
      sym_opaque_data,
      sym_enum_data,
      sym_reference_data,
  [950] = 21,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_NULL,
    ACTIONS(57), 1,
      sym__float,
    ACTIONS(59), 1,
      anon_sym_DATASET,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_hex_value_token1,
    ACTIONS(69), 1,
      aux_sym_hex_value_token2,
    STATE(112), 1,
      sym_hex_value,
    STATE(115), 1,
      sym_object_type,
    STATE(133), 1,
      sym_identifier,
    STATE(146), 1,
      sym_any_element,
    STATE(148), 1,
      sym_int_value,
    STATE(158), 1,
      sym_enum_symbol,
    STATE(164), 1,
      sym__string,
    STATE(168), 1,
      sym_any_data_seq,
    ACTIONS(51), 2,
      anon_sym_DATATYPE,
      anon_sym_GROUP,
    ACTIONS(65), 2,
      anon_sym_0,
      sym_pos_int,
    STATE(154), 2,
      sym_object_ref_data,
      sym_data_region_data,
    STATE(160), 4,
      sym_atomic_element,
      sym_compound_element,
      sym_variable_length_element,
      sym_array_element,
    STATE(161), 7,
      sym_integer_data,
      sym_float_data,
      sym_string_data,
      sym_bitfield_data,
      sym_opaque_data,
      sym_enum_data,
      sym_reference_data,
  [1026] = 17,
    ACTIONS(27), 1,
      anon_sym_HARDLINK,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(81), 1,
      anon_sym_OBJECTID_LBRACE,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    STATE(22), 1,
      sym_object_id,
    STATE(25), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(245), 1,
      sym_hardlink,
    STATE(27), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(45), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1084] = 16,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(81), 1,
      anon_sym_OBJECTID_LBRACE,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_DATATYPE,
    STATE(20), 1,
      sym_object_id,
    STATE(26), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(19), 2,
      sym_anon_named_datatype,
      aux_sym_root_group_repeat1,
    STATE(23), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(47), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1140] = 16,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(81), 1,
      anon_sym_OBJECTID_LBRACE,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(91), 1,
      anon_sym_DATATYPE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_object_id,
    STATE(28), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(30), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(43), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(49), 2,
      sym_anon_named_datatype,
      aux_sym_root_group_repeat1,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1196] = 13,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(30), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(43), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1242] = 13,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(29), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(44), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1288] = 13,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(83), 1,
      anon_sym_COMMENT,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_group_comment,
    STATE(64), 1,
      sym_attribute,
    STATE(33), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(37), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1334] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(43), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1374] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(41), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1414] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(33), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(37), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1454] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(30), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(43), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1494] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(37), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1534] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(29), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(44), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1574] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(40), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1614] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(44), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1654] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(32), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(40), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1694] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(42), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1734] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(46), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1774] = 11,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_attribute,
    STATE(24), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    STATE(46), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1814] = 2,
    ACTIONS(109), 1,
      anon_sym_DATA,
    ACTIONS(107), 14,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_SLASH,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_RBRACK,
      anon_sym_TARGETPATH,
  [1834] = 2,
    ACTIONS(113), 1,
      anon_sym_DATA,
    ACTIONS(111), 14,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_SLASH,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_RBRACK,
      anon_sym_TARGETPATH,
  [1854] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1884] = 8,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      anon_sym_DATATYPE,
    ACTIONS(120), 1,
      anon_sym_DATASET,
    ACTIONS(123), 1,
      anon_sym_GROUP,
    ACTIONS(126), 1,
      anon_sym_SOFTLINK,
    ACTIONS(129), 1,
      anon_sym_EXTERNAL_LINK,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1914] = 2,
    ACTIONS(134), 1,
      anon_sym_DATA,
    ACTIONS(132), 12,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_SLASH,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_LPAREN,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_TARGETPATH,
  [1932] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1962] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [1992] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2022] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2052] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2082] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2112] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2142] = 8,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(85), 1,
      anon_sym_SOFTLINK,
    ACTIONS(87), 1,
      anon_sym_EXTERNAL_LINK,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_group_member,
      aux_sym_root_group_repeat3,
    STATE(87), 5,
      sym_named_datatype,
      sym_group,
      sym_dataset,
      sym_softlink,
      sym_external_link,
  [2172] = 4,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    ACTIONS(145), 1,
      anon_sym_DATA,
    STATE(48), 2,
      sym_path_part,
      aux_sym_path_name_repeat1,
    ACTIONS(140), 7,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_OBJECTID_LBRACE,
  [2192] = 3,
    ACTIONS(149), 1,
      anon_sym_DATATYPE,
    STATE(49), 2,
      sym_anon_named_datatype,
      aux_sym_root_group_repeat1,
    ACTIONS(147), 8,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_COMMENT,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2210] = 10,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    ACTIONS(23), 1,
      anon_sym_DATA,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_dataspace,
    STATE(137), 1,
      sym_dataset_space,
    STATE(228), 1,
      sym_data,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
  [2242] = 4,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
      anon_sym_DATA,
    STATE(48), 2,
      sym_path_part,
      aux_sym_path_name_repeat1,
    ACTIONS(152), 7,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_OBJECTID_LBRACE,
  [2262] = 10,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    ACTIONS(23), 1,
      anon_sym_DATA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_dataspace,
    STATE(153), 1,
      sym_dataset_space,
    STATE(238), 1,
      sym_data,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
  [2294] = 4,
    ACTIONS(162), 1,
      anon_sym_ATTRIBUTE,
    STATE(64), 1,
      sym_attribute,
    STATE(53), 2,
      sym_group_attribute,
      aux_sym_root_group_repeat2,
    ACTIONS(160), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2313] = 2,
    ACTIONS(167), 1,
      anon_sym_DATA,
    ACTIONS(165), 8,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2327] = 2,
    ACTIONS(171), 1,
      anon_sym_DATA,
    ACTIONS(169), 8,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2341] = 2,
    ACTIONS(175), 1,
      anon_sym_DATA,
    ACTIONS(173), 8,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_SLASH,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
      anon_sym_OBJECTID_LBRACE,
  [2355] = 8,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(81), 1,
      anon_sym_OBJECTID_LBRACE,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_DATA,
    STATE(127), 1,
      sym_attribute,
    STATE(143), 1,
      sym_object_id,
    STATE(214), 1,
      sym_data,
    STATE(68), 2,
      sym_dataset_attribute,
      aux_sym_dataset_info_repeat1,
  [2381] = 1,
    ACTIONS(181), 9,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_OBJECTID_LBRACE,
      anon_sym_COMMENT,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2393] = 8,
    ACTIONS(75), 1,
      anon_sym_ATTRIBUTE,
    ACTIONS(81), 1,
      anon_sym_OBJECTID_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DATA,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_attribute,
    STATE(145), 1,
      sym_object_id,
    STATE(226), 1,
      sym_data,
    STATE(57), 2,
      sym_dataset_attribute,
      aux_sym_dataset_info_repeat1,
  [2419] = 2,
    ACTIONS(187), 1,
      anon_sym_DATA,
    ACTIONS(185), 8,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_COMMENT,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2433] = 7,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    STATE(59), 1,
      sym_dataset_space,
    STATE(114), 1,
      sym_dataspace,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
  [2456] = 7,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      sym_scalar_space,
    ACTIONS(19), 1,
      anon_sym_SIMPLE,
    ACTIONS(21), 1,
      anon_sym_DATASPACE,
    STATE(114), 1,
      sym_dataspace,
    STATE(162), 1,
      sym_dataset_space,
    STATE(111), 2,
      sym_null_space,
      sym_simple_space,
  [2479] = 6,
    ACTIONS(73), 1,
      anon_sym_DATATYPE,
    ACTIONS(77), 1,
      anon_sym_DATASET,
    ACTIONS(79), 1,
      anon_sym_GROUP,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_targetobj,
    STATE(192), 3,
      sym_named_datatype,
      sym_group,
      sym_dataset,
  [2500] = 1,
    ACTIONS(191), 7,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2510] = 1,
    ACTIONS(193), 7,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2520] = 1,
    ACTIONS(111), 7,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2530] = 1,
    ACTIONS(107), 7,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2540] = 4,
    ACTIONS(197), 1,
      anon_sym_ATTRIBUTE,
    STATE(127), 1,
      sym_attribute,
    STATE(68), 2,
      sym_dataset_attribute,
      aux_sym_dataset_info_repeat1,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [2556] = 6,
    STATE(142), 1,
      sym_int_value,
    STATE(170), 1,
      sym_bound_pair,
    STATE(207), 1,
      sym_region_vals,
    STATE(209), 1,
      sym_lower_bound,
    STATE(210), 1,
      sym_point_vals,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [2576] = 1,
    ACTIONS(202), 7,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2586] = 6,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_REGION_TYPE,
    STATE(2), 1,
      sym_data_region_data_list,
    STATE(5), 1,
      sym_data_region_data_info,
    STATE(97), 1,
      sym_data_region_type,
    STATE(6), 2,
      sym_region_info,
      sym_point_info,
  [2606] = 1,
    ACTIONS(208), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2615] = 1,
    ACTIONS(210), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2624] = 2,
    ACTIONS(214), 1,
      anon_sym_DATA,
    ACTIONS(212), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2635] = 2,
    ACTIONS(218), 1,
      anon_sym_DATA,
    ACTIONS(216), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2646] = 2,
    ACTIONS(222), 1,
      anon_sym_DATA,
    ACTIONS(220), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2657] = 1,
    ACTIONS(224), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2666] = 1,
    ACTIONS(226), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2675] = 2,
    ACTIONS(230), 1,
      anon_sym_DATA,
    ACTIONS(228), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2686] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(181), 1,
      sym_dataset_name,
    STATE(195), 1,
      sym_identifier,
    ACTIONS(232), 2,
      anon_sym_0,
      sym_pos_int,
  [2703] = 1,
    ACTIONS(234), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2712] = 1,
    ACTIONS(236), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2721] = 5,
    ACTIONS(238), 1,
      anon_sym_H5S_UNLIMITED,
    STATE(166), 1,
      sym_int_value,
    STATE(173), 1,
      sym_max_dim,
    STATE(190), 1,
      sym_max_dim_list,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [2738] = 1,
    ACTIONS(240), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2747] = 2,
    ACTIONS(244), 1,
      anon_sym_DATA,
    ACTIONS(242), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2758] = 1,
    ACTIONS(246), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2767] = 1,
    ACTIONS(248), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2776] = 2,
    ACTIONS(252), 1,
      anon_sym_DATA,
    ACTIONS(250), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2787] = 5,
    ACTIONS(238), 1,
      anon_sym_H5S_UNLIMITED,
    STATE(166), 1,
      sym_int_value,
    STATE(173), 1,
      sym_max_dim,
    STATE(206), 1,
      sym_max_dim_list,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [2804] = 2,
    ACTIONS(256), 1,
      anon_sym_DATA,
    ACTIONS(254), 5,
      anon_sym_RBRACE,
      anon_sym_NULL,
      sym_scalar_space,
      anon_sym_SIMPLE,
      anon_sym_DATASPACE,
  [2815] = 1,
    ACTIONS(258), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2824] = 1,
    ACTIONS(260), 6,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
      anon_sym_SOFTLINK,
      anon_sym_EXTERNAL_LINK,
  [2833] = 5,
    STATE(170), 1,
      sym_bound_pair,
    STATE(209), 1,
      sym_lower_bound,
    STATE(230), 1,
      sym_region_vals,
    STATE(231), 1,
      sym_int_value,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [2850] = 4,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_data_region_data_info,
    STATE(10), 1,
      sym_data_region_data_list,
    STATE(6), 2,
      sym_region_info,
      sym_point_info,
  [2864] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_anon_named_type_name,
    STATE(39), 1,
      sym__string,
    STATE(187), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type_name,
  [2880] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(169), 1,
      sym_identifier,
    STATE(235), 1,
      sym_targetfile,
    STATE(236), 1,
      sym_file_name,
  [2896] = 4,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_data_region_data_list,
    STATE(5), 1,
      sym_data_region_data_info,
    STATE(6), 2,
      sym_region_info,
      sym_point_info,
  [2910] = 1,
    ACTIONS(264), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [2918] = 1,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [2925] = 1,
    ACTIONS(268), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [2932] = 3,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym__string_content,
    ACTIONS(272), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [2943] = 3,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_path_name,
    STATE(51), 2,
      sym_path_part,
      aux_sym_path_name_repeat1,
  [2954] = 3,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    STATE(241), 1,
      sym_path_name,
    STATE(51), 2,
      sym_path_part,
      aux_sym_path_name_repeat1,
  [2965] = 3,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym__string_content,
    ACTIONS(276), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [2976] = 3,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      aux_sym__string_content,
    ACTIONS(280), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [2987] = 3,
    STATE(174), 1,
      sym_int_value,
    STATE(188), 1,
      sym_dims_values,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [2998] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(237), 1,
      sym_identifier,
    STATE(239), 1,
      sym_target,
  [3011] = 1,
    ACTIONS(132), 4,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
  [3018] = 1,
    ACTIONS(282), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [3025] = 1,
    ACTIONS(284), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [3032] = 1,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [3039] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(288), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3048] = 3,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      sym_path_name,
    STATE(51), 2,
      sym_path_part,
      aux_sym_path_name_repeat1,
  [3059] = 1,
    ACTIONS(292), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [3066] = 3,
    STATE(119), 1,
      sym_int_value,
    STATE(155), 1,
      sym_object_num,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3077] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(211), 1,
      sym_external_link_name,
    STATE(215), 1,
      sym_identifier,
  [3090] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(205), 1,
      sym_softlink_name,
    STATE(208), 1,
      sym_identifier,
  [3103] = 1,
    ACTIONS(294), 4,
      anon_sym_RBRACE,
      anon_sym_DATATYPE,
      anon_sym_DATASET,
      anon_sym_GROUP,
  [3110] = 2,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(296), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3119] = 3,
    STATE(119), 1,
      sym_int_value,
    STATE(203), 1,
      sym_object_num,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3130] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(201), 1,
      sym_group_name,
    STATE(202), 1,
      sym_identifier,
  [3143] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(178), 1,
      sym_dataset_name,
    STATE(195), 1,
      sym_identifier,
  [3156] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(169), 1,
      sym_identifier,
    STATE(177), 1,
      sym_file_name,
  [3169] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(184), 1,
      sym_attr_name,
    STATE(186), 1,
      sym_identifier,
  [3182] = 3,
    STATE(174), 1,
      sym_int_value,
    STATE(204), 1,
      sym_dims_values,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3193] = 3,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym__string_content,
    ACTIONS(302), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [3204] = 1,
    ACTIONS(305), 4,
      anon_sym_RBRACE,
      anon_sym_ATTRIBUTE,
      anon_sym_DATA,
      anon_sym_OBJECTID_LBRACE,
  [3211] = 4,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_targetpath,
    STATE(108), 1,
      sym__string,
    STATE(118), 1,
      sym_identifier,
  [3224] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(187), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type_name,
  [3237] = 3,
    STATE(175), 1,
      sym_int_value,
    STATE(234), 1,
      sym_point_vals,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3248] = 3,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym__string_content,
    ACTIONS(272), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [3259] = 3,
    STATE(165), 1,
      sym_upper_bound,
    STATE(176), 1,
      sym_int_value,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3270] = 1,
    ACTIONS(311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3276] = 1,
    ACTIONS(313), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3282] = 1,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3288] = 2,
    STATE(159), 1,
      sym_hex_value,
    ACTIONS(67), 2,
      aux_sym_hex_value_token1,
      aux_sym_hex_value_token2,
  [3296] = 3,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_DATA,
    STATE(238), 1,
      sym_data,
  [3306] = 3,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_DATA,
    STATE(228), 1,
      sym_data,
  [3316] = 1,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3322] = 1,
    ACTIONS(319), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3328] = 3,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_dims,
    STATE(220), 1,
      sym_current_dims,
  [3338] = 3,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_COLON,
  [3348] = 3,
    ACTIONS(179), 1,
      anon_sym_DATA,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_data,
  [3358] = 2,
    STATE(213), 1,
      sym_data_region_data_type,
    ACTIONS(331), 2,
      anon_sym_POINT,
      anon_sym_BLOCK,
  [3366] = 3,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_DATA,
    STATE(214), 1,
      sym_data,
  [3376] = 2,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(333), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3384] = 1,
    ACTIONS(337), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3390] = 1,
    ACTIONS(339), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3396] = 3,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string_data,
    STATE(70), 1,
      sym__string,
  [3406] = 3,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__string,
    STATE(56), 1,
      sym_identifier,
  [3416] = 1,
    ACTIONS(341), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3422] = 1,
    ACTIONS(343), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3428] = 3,
    ACTIONS(179), 1,
      anon_sym_DATA,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_data,
  [3438] = 1,
    ACTIONS(347), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3444] = 1,
    ACTIONS(349), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3450] = 1,
    ACTIONS(351), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3456] = 1,
    ACTIONS(353), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3462] = 1,
    ACTIONS(355), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3468] = 1,
    ACTIONS(357), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3474] = 1,
    ACTIONS(359), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3480] = 1,
    ACTIONS(361), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3486] = 3,
    ACTIONS(179), 1,
      anon_sym_DATA,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_data,
  [3496] = 2,
    STATE(147), 1,
      sym_int_value,
    ACTIONS(200), 2,
      anon_sym_0,
      sym_pos_int,
  [3504] = 1,
    ACTIONS(202), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3510] = 1,
    ACTIONS(365), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3515] = 1,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3520] = 2,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      anon_sym_COMMA,
  [3527] = 1,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3532] = 1,
    ACTIONS(371), 2,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
      anon_sym_TARGETPATH,
  [3537] = 2,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_COMMA,
  [3544] = 1,
    ACTIONS(232), 2,
      anon_sym_0,
      sym_pos_int,
  [3549] = 2,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_max_dims,
  [3556] = 2,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_COMMA,
  [3563] = 2,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
  [3570] = 2,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [3577] = 1,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3582] = 2,
    ACTIONS(389), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE_LBRACE,
    STATE(221), 1,
      sym_root_group,
  [3589] = 1,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
  [3593] = 1,
    ACTIONS(393), 1,
      anon_sym_SLASH,
  [3597] = 1,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
  [3601] = 1,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [3605] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
  [3609] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
  [3613] = 1,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
  [3617] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
  [3621] = 1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [3625] = 1,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [3629] = 1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [3633] = 1,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
  [3637] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [3641] = 1,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
  [3645] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [3649] = 1,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
  [3653] = 1,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [3657] = 1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [3661] = 1,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
  [3665] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
  [3669] = 1,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
  [3673] = 1,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
  [3677] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
  [3681] = 1,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
  [3685] = 1,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [3689] = 1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
  [3693] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [3697] = 1,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
  [3701] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [3705] = 1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [3709] = 1,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
  [3713] = 1,
    ACTIONS(453), 1,
      anon_sym_COLON,
  [3717] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [3721] = 1,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [3725] = 1,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
  [3729] = 1,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
  [3733] = 1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
  [3737] = 1,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
  [3741] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [3745] = 1,
    ACTIONS(467), 1,
      anon_sym_SLASH,
  [3749] = 1,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
  [3753] = 1,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [3757] = 1,
    ACTIONS(471), 1,
      anon_sym_SLASH,
  [3761] = 1,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [3765] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [3769] = 1,
    ACTIONS(477), 1,
      anon_sym_LINKTARGET,
  [3773] = 1,
    ACTIONS(479), 1,
      anon_sym_TARGETFILE,
  [3777] = 1,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
  [3781] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [3785] = 1,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
  [3789] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
  [3793] = 1,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
  [3797] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [3801] = 1,
    ACTIONS(327), 1,
      anon_sym_COLON,
  [3805] = 1,
    ACTIONS(262), 1,
      sym_anon_named_type_name,
  [3809] = 1,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [3813] = 1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [3817] = 1,
    ACTIONS(493), 1,
      anon_sym_TARGETPATH,
  [3821] = 1,
    ACTIONS(495), 1,
      anon_sym_TARGETPATH,
  [3825] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [3829] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [3833] = 1,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [3837] = 1,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [3841] = 1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [3845] = 1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
  [3849] = 1,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
  [3853] = 1,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
  [3857] = 1,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
  [3861] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 374,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 482,
  [SMALL_STATE(10)] = 547,
  [SMALL_STATE(11)] = 600,
  [SMALL_STATE(12)] = 659,
  [SMALL_STATE(13)] = 718,
  [SMALL_STATE(14)] = 798,
  [SMALL_STATE(15)] = 874,
  [SMALL_STATE(16)] = 950,
  [SMALL_STATE(17)] = 1026,
  [SMALL_STATE(18)] = 1084,
  [SMALL_STATE(19)] = 1140,
  [SMALL_STATE(20)] = 1196,
  [SMALL_STATE(21)] = 1242,
  [SMALL_STATE(22)] = 1288,
  [SMALL_STATE(23)] = 1334,
  [SMALL_STATE(24)] = 1374,
  [SMALL_STATE(25)] = 1414,
  [SMALL_STATE(26)] = 1454,
  [SMALL_STATE(27)] = 1494,
  [SMALL_STATE(28)] = 1534,
  [SMALL_STATE(29)] = 1574,
  [SMALL_STATE(30)] = 1614,
  [SMALL_STATE(31)] = 1654,
  [SMALL_STATE(32)] = 1694,
  [SMALL_STATE(33)] = 1734,
  [SMALL_STATE(34)] = 1774,
  [SMALL_STATE(35)] = 1814,
  [SMALL_STATE(36)] = 1834,
  [SMALL_STATE(37)] = 1854,
  [SMALL_STATE(38)] = 1884,
  [SMALL_STATE(39)] = 1914,
  [SMALL_STATE(40)] = 1932,
  [SMALL_STATE(41)] = 1962,
  [SMALL_STATE(42)] = 1992,
  [SMALL_STATE(43)] = 2022,
  [SMALL_STATE(44)] = 2052,
  [SMALL_STATE(45)] = 2082,
  [SMALL_STATE(46)] = 2112,
  [SMALL_STATE(47)] = 2142,
  [SMALL_STATE(48)] = 2172,
  [SMALL_STATE(49)] = 2192,
  [SMALL_STATE(50)] = 2210,
  [SMALL_STATE(51)] = 2242,
  [SMALL_STATE(52)] = 2262,
  [SMALL_STATE(53)] = 2294,
  [SMALL_STATE(54)] = 2313,
  [SMALL_STATE(55)] = 2327,
  [SMALL_STATE(56)] = 2341,
  [SMALL_STATE(57)] = 2355,
  [SMALL_STATE(58)] = 2381,
  [SMALL_STATE(59)] = 2393,
  [SMALL_STATE(60)] = 2419,
  [SMALL_STATE(61)] = 2433,
  [SMALL_STATE(62)] = 2456,
  [SMALL_STATE(63)] = 2479,
  [SMALL_STATE(64)] = 2500,
  [SMALL_STATE(65)] = 2510,
  [SMALL_STATE(66)] = 2520,
  [SMALL_STATE(67)] = 2530,
  [SMALL_STATE(68)] = 2540,
  [SMALL_STATE(69)] = 2556,
  [SMALL_STATE(70)] = 2576,
  [SMALL_STATE(71)] = 2586,
  [SMALL_STATE(72)] = 2606,
  [SMALL_STATE(73)] = 2615,
  [SMALL_STATE(74)] = 2624,
  [SMALL_STATE(75)] = 2635,
  [SMALL_STATE(76)] = 2646,
  [SMALL_STATE(77)] = 2657,
  [SMALL_STATE(78)] = 2666,
  [SMALL_STATE(79)] = 2675,
  [SMALL_STATE(80)] = 2686,
  [SMALL_STATE(81)] = 2703,
  [SMALL_STATE(82)] = 2712,
  [SMALL_STATE(83)] = 2721,
  [SMALL_STATE(84)] = 2738,
  [SMALL_STATE(85)] = 2747,
  [SMALL_STATE(86)] = 2758,
  [SMALL_STATE(87)] = 2767,
  [SMALL_STATE(88)] = 2776,
  [SMALL_STATE(89)] = 2787,
  [SMALL_STATE(90)] = 2804,
  [SMALL_STATE(91)] = 2815,
  [SMALL_STATE(92)] = 2824,
  [SMALL_STATE(93)] = 2833,
  [SMALL_STATE(94)] = 2850,
  [SMALL_STATE(95)] = 2864,
  [SMALL_STATE(96)] = 2880,
  [SMALL_STATE(97)] = 2896,
  [SMALL_STATE(98)] = 2910,
  [SMALL_STATE(99)] = 2918,
  [SMALL_STATE(100)] = 2925,
  [SMALL_STATE(101)] = 2932,
  [SMALL_STATE(102)] = 2943,
  [SMALL_STATE(103)] = 2954,
  [SMALL_STATE(104)] = 2965,
  [SMALL_STATE(105)] = 2976,
  [SMALL_STATE(106)] = 2987,
  [SMALL_STATE(107)] = 2998,
  [SMALL_STATE(108)] = 3011,
  [SMALL_STATE(109)] = 3018,
  [SMALL_STATE(110)] = 3025,
  [SMALL_STATE(111)] = 3032,
  [SMALL_STATE(112)] = 3039,
  [SMALL_STATE(113)] = 3048,
  [SMALL_STATE(114)] = 3059,
  [SMALL_STATE(115)] = 3066,
  [SMALL_STATE(116)] = 3077,
  [SMALL_STATE(117)] = 3090,
  [SMALL_STATE(118)] = 3103,
  [SMALL_STATE(119)] = 3110,
  [SMALL_STATE(120)] = 3119,
  [SMALL_STATE(121)] = 3130,
  [SMALL_STATE(122)] = 3143,
  [SMALL_STATE(123)] = 3156,
  [SMALL_STATE(124)] = 3169,
  [SMALL_STATE(125)] = 3182,
  [SMALL_STATE(126)] = 3193,
  [SMALL_STATE(127)] = 3204,
  [SMALL_STATE(128)] = 3211,
  [SMALL_STATE(129)] = 3224,
  [SMALL_STATE(130)] = 3237,
  [SMALL_STATE(131)] = 3248,
  [SMALL_STATE(132)] = 3259,
  [SMALL_STATE(133)] = 3270,
  [SMALL_STATE(134)] = 3276,
  [SMALL_STATE(135)] = 3282,
  [SMALL_STATE(136)] = 3288,
  [SMALL_STATE(137)] = 3296,
  [SMALL_STATE(138)] = 3306,
  [SMALL_STATE(139)] = 3316,
  [SMALL_STATE(140)] = 3322,
  [SMALL_STATE(141)] = 3328,
  [SMALL_STATE(142)] = 3338,
  [SMALL_STATE(143)] = 3348,
  [SMALL_STATE(144)] = 3358,
  [SMALL_STATE(145)] = 3366,
  [SMALL_STATE(146)] = 3376,
  [SMALL_STATE(147)] = 3384,
  [SMALL_STATE(148)] = 3390,
  [SMALL_STATE(149)] = 3396,
  [SMALL_STATE(150)] = 3406,
  [SMALL_STATE(151)] = 3416,
  [SMALL_STATE(152)] = 3422,
  [SMALL_STATE(153)] = 3428,
  [SMALL_STATE(154)] = 3438,
  [SMALL_STATE(155)] = 3444,
  [SMALL_STATE(156)] = 3450,
  [SMALL_STATE(157)] = 3456,
  [SMALL_STATE(158)] = 3462,
  [SMALL_STATE(159)] = 3468,
  [SMALL_STATE(160)] = 3474,
  [SMALL_STATE(161)] = 3480,
  [SMALL_STATE(162)] = 3486,
  [SMALL_STATE(163)] = 3496,
  [SMALL_STATE(164)] = 3504,
  [SMALL_STATE(165)] = 3510,
  [SMALL_STATE(166)] = 3515,
  [SMALL_STATE(167)] = 3520,
  [SMALL_STATE(168)] = 3527,
  [SMALL_STATE(169)] = 3532,
  [SMALL_STATE(170)] = 3537,
  [SMALL_STATE(171)] = 3544,
  [SMALL_STATE(172)] = 3549,
  [SMALL_STATE(173)] = 3556,
  [SMALL_STATE(174)] = 3563,
  [SMALL_STATE(175)] = 3570,
  [SMALL_STATE(176)] = 3577,
  [SMALL_STATE(177)] = 3582,
  [SMALL_STATE(178)] = 3589,
  [SMALL_STATE(179)] = 3593,
  [SMALL_STATE(180)] = 3597,
  [SMALL_STATE(181)] = 3601,
  [SMALL_STATE(182)] = 3605,
  [SMALL_STATE(183)] = 3609,
  [SMALL_STATE(184)] = 3613,
  [SMALL_STATE(185)] = 3617,
  [SMALL_STATE(186)] = 3621,
  [SMALL_STATE(187)] = 3625,
  [SMALL_STATE(188)] = 3629,
  [SMALL_STATE(189)] = 3633,
  [SMALL_STATE(190)] = 3637,
  [SMALL_STATE(191)] = 3641,
  [SMALL_STATE(192)] = 3645,
  [SMALL_STATE(193)] = 3649,
  [SMALL_STATE(194)] = 3653,
  [SMALL_STATE(195)] = 3657,
  [SMALL_STATE(196)] = 3661,
  [SMALL_STATE(197)] = 3665,
  [SMALL_STATE(198)] = 3669,
  [SMALL_STATE(199)] = 3673,
  [SMALL_STATE(200)] = 3677,
  [SMALL_STATE(201)] = 3681,
  [SMALL_STATE(202)] = 3685,
  [SMALL_STATE(203)] = 3689,
  [SMALL_STATE(204)] = 3693,
  [SMALL_STATE(205)] = 3697,
  [SMALL_STATE(206)] = 3701,
  [SMALL_STATE(207)] = 3705,
  [SMALL_STATE(208)] = 3709,
  [SMALL_STATE(209)] = 3713,
  [SMALL_STATE(210)] = 3717,
  [SMALL_STATE(211)] = 3721,
  [SMALL_STATE(212)] = 3725,
  [SMALL_STATE(213)] = 3729,
  [SMALL_STATE(214)] = 3733,
  [SMALL_STATE(215)] = 3737,
  [SMALL_STATE(216)] = 3741,
  [SMALL_STATE(217)] = 3745,
  [SMALL_STATE(218)] = 3749,
  [SMALL_STATE(219)] = 3753,
  [SMALL_STATE(220)] = 3757,
  [SMALL_STATE(221)] = 3761,
  [SMALL_STATE(222)] = 3765,
  [SMALL_STATE(223)] = 3769,
  [SMALL_STATE(224)] = 3773,
  [SMALL_STATE(225)] = 3777,
  [SMALL_STATE(226)] = 3781,
  [SMALL_STATE(227)] = 3785,
  [SMALL_STATE(228)] = 3789,
  [SMALL_STATE(229)] = 3793,
  [SMALL_STATE(230)] = 3797,
  [SMALL_STATE(231)] = 3801,
  [SMALL_STATE(232)] = 3805,
  [SMALL_STATE(233)] = 3809,
  [SMALL_STATE(234)] = 3813,
  [SMALL_STATE(235)] = 3817,
  [SMALL_STATE(236)] = 3821,
  [SMALL_STATE(237)] = 3825,
  [SMALL_STATE(238)] = 3829,
  [SMALL_STATE(239)] = 3833,
  [SMALL_STATE(240)] = 3837,
  [SMALL_STATE(241)] = 3841,
  [SMALL_STATE(242)] = 3845,
  [SMALL_STATE(243)] = 3849,
  [SMALL_STATE(244)] = 3853,
  [SMALL_STATE(245)] = 3857,
  [SMALL_STATE(246)] = 3861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data_list, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_region_data_list, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data_info, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_region_data_info, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_point_info, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_point_info, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_info, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_info, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data_list, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_region_data_list, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2), SHIFT_REPEAT(129),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2), SHIFT_REPEAT(122),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2), SHIFT_REPEAT(121),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2), SHIFT_REPEAT(117),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat3, 2), SHIFT_REPEAT(116),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_name_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_name_repeat1, 2), SHIFT_REPEAT(150),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_name_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_group_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat1, 2), SHIFT_REPEAT(232),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_name, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_name, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_group_repeat2, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_group_repeat2, 2), SHIFT_REPEAT(124),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_part, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_part, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_info, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_named_datatype, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_info, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_id, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_id, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_attribute, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_comment, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataset_info_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_info_repeat1, 2), SHIFT_REPEAT(124),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_data, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 9),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h5t_bitfield, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h5t_bitfield, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_type, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_type, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_type, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataset_type, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 8),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h5t_float, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h5t_float, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_softlink, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_member, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_type, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataset_type, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h5t_integer, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h5t_integer, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_datatype, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_value, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_space, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_value, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_space, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null_space, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataspace, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opaque_data, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_space, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targetpath, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_num, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(126),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_attribute, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_symbol, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data, 7),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_data, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data, 8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_point_vals, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lower_bound, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_info, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_data_seq, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_num, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_data, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_element, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_data, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_ref_data, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data, 9),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_data, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opaque_data, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_element, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_element, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bound_pair, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_dim, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_data_seq, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_vals, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_dim_list, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dims_values, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upper_bound, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dims, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dims_values, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targetobj, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_name, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_info, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_space_data, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_dims, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_dim_list, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_softlink_name, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_data_type, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_region_type, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link_name, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current_dims, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 7),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_vals, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 6),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_point_vals, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targetfile, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hardlink, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 5),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_h5dump(void) {
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
