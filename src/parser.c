#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_HDF5 = 1,
  anon_sym_GROUP_DQUOTE_SLASH_DQUOTE = 2,
  anon_sym_H5T_STD_I8BE = 3,
  anon_sym_H5T_STD_I8LE = 4,
  anon_sym_H5T_STD_I16BE = 5,
  anon_sym_H5T_STD_I16LE = 6,
  anon_sym_H5T_STD_I32BE = 7,
  anon_sym_H5T_STD_I32LE = 8,
  anon_sym_H5T_STD_I64BE = 9,
  anon_sym_H5T_STD_I64LE = 10,
  anon_sym_H5T_STD_U8BE = 11,
  anon_sym_H5T_STD_U8LE = 12,
  anon_sym_H5T_STD_U16BE = 13,
  anon_sym_H5T_STD_U16LE = 14,
  anon_sym_H5T_STD_U32BE = 15,
  anon_sym_H5T_STD_U32LE = 16,
  anon_sym_H5T_STD_U64BE = 17,
  anon_sym_H5T_STD_U64LE = 18,
  anon_sym_H5T_NATIVE_CHAR = 19,
  anon_sym_H5T_NATIVE_UCHAR = 20,
  anon_sym_H5T_NATIVE_SHORT = 21,
  anon_sym_H5T_NATIVE_USHORT = 22,
  anon_sym_H5T_NATIVE_INT = 23,
  anon_sym_H5T_NATIVE_UINT = 24,
  anon_sym_H5T_NATIVE_LONG = 25,
  anon_sym_H5T_NATIVE_ULONG = 26,
  anon_sym_H5T_NATIVE_LLONG = 27,
  anon_sym_H5T_NATIVE_ULLONG = 28,
  anon_sym_H5T_IEEE_F32BE = 29,
  anon_sym_H5T_IEEE_F32LE = 30,
  anon_sym_H5T_IEEE_F64BE = 31,
  anon_sym_H5T_IEEE_F64LE = 32,
  anon_sym_H5T_NATIVE_FLOAT = 33,
  anon_sym_H5T_NATIVE_DOUBLE = 34,
  anon_sym_H5T_NATIVE_LDOUBLE = 35,
  anon_sym_H5T_STD_B8BE = 36,
  anon_sym_H5T_STD_B8LE = 37,
  anon_sym_H5T_STD_B16BE = 38,
  anon_sym_H5T_STD_B16LE = 39,
  anon_sym_H5T_STD_B32BE = 40,
  anon_sym_H5T_STD_B32LE = 41,
  anon_sym_H5T_STD_B64BE = 42,
  anon_sym_H5T_STD_B64LE = 43,
  anon_sym_DQUOTE = 44,
  aux_sym__string_content_token1 = 45,
  sym__escape_sequence = 46,
  sym_file = 47,
  sym_file_name = 48,
  sym_root_group = 49,
  sym_identifier = 50,
  sym__string = 51,
  aux_sym__string_content = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HDF5] = "HDF5",
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE] = "GROUP \"/\"",
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
  [anon_sym_H5T_STD_B8BE] = "H5T_STD_B8BE",
  [anon_sym_H5T_STD_B8LE] = "H5T_STD_B8LE",
  [anon_sym_H5T_STD_B16BE] = "H5T_STD_B16BE",
  [anon_sym_H5T_STD_B16LE] = "H5T_STD_B16LE",
  [anon_sym_H5T_STD_B32BE] = "H5T_STD_B32BE",
  [anon_sym_H5T_STD_B32LE] = "H5T_STD_B32LE",
  [anon_sym_H5T_STD_B64BE] = "H5T_STD_B64BE",
  [anon_sym_H5T_STD_B64LE] = "H5T_STD_B64LE",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_file] = "file",
  [sym_file_name] = "file_name",
  [sym_root_group] = "root_group",
  [sym_identifier] = "identifier",
  [sym__string] = "_string",
  [aux_sym__string_content] = "_string_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_HDF5] = anon_sym_HDF5,
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE] = anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
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
  [anon_sym_H5T_STD_B8BE] = anon_sym_H5T_STD_B8BE,
  [anon_sym_H5T_STD_B8LE] = anon_sym_H5T_STD_B8LE,
  [anon_sym_H5T_STD_B16BE] = anon_sym_H5T_STD_B16BE,
  [anon_sym_H5T_STD_B16LE] = anon_sym_H5T_STD_B16LE,
  [anon_sym_H5T_STD_B32BE] = anon_sym_H5T_STD_B32BE,
  [anon_sym_H5T_STD_B32LE] = anon_sym_H5T_STD_B32LE,
  [anon_sym_H5T_STD_B64BE] = anon_sym_H5T_STD_B64BE,
  [anon_sym_H5T_STD_B64LE] = anon_sym_H5T_STD_B64LE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_file] = sym_file,
  [sym_file_name] = sym_file_name,
  [sym_root_group] = sym_root_group,
  [sym_identifier] = sym_identifier,
  [sym__string] = sym__string,
  [aux_sym__string_content] = aux_sym__string_content,
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
  [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE] = {
    .visible = true,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(119);
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(138);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(7);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(51);
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(55);
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(61);
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(63);
      if (lookahead == 'L') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(67);
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(97);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(132);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(20);
      END_STATE();
    case 84:
      if (lookahead == 'F') ADVANCE(14);
      END_STATE();
    case 85:
      if (lookahead == 'G') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == 'G') ADVANCE(164);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(163);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(165);
      END_STATE();
    case 89:
      if (lookahead == 'H') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 92:
      if (lookahead == 'H') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(2);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 129:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 135:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_HDF5);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GROUP_DQUOTE_SLASH_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I8BE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I8LE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I16BE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I16LE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I32BE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I32LE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I64BE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_H5T_STD_I64LE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U8BE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U8LE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U16BE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U16LE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U32BE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U32LE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U64BE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_H5T_STD_U64LE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_CHAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_UCHAR);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_SHORT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_USHORT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_INT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_UINT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LONG);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_ULONG);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LLONG);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_ULLONG);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F32BE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F32LE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F64BE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_H5T_IEEE_F64LE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_FLOAT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_DOUBLE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_H5T_NATIVE_LDOUBLE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B8BE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B8LE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B16BE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B16LE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B32BE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B32LE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B64BE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_H5T_STD_B64LE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HDF5] = ACTIONS(1),
    [anon_sym_GROUP_DQUOTE_SLASH_DQUOTE] = ACTIONS(1),
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
    [anon_sym_H5T_STD_B8BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B8LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B16BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B16LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B32BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B32LE] = ACTIONS(1),
    [anon_sym_H5T_STD_B64BE] = ACTIONS(1),
    [anon_sym_H5T_STD_B64LE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(7),
    [anon_sym_HDF5] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_file_name,
    STATE(8), 1,
      sym_identifier,
    STATE(9), 1,
      sym__string,
  [13] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym__string_content,
    ACTIONS(9), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [24] = 3,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym__string_content,
    ACTIONS(13), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [35] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym__string_content,
    ACTIONS(17), 2,
      aux_sym__string_content_token1,
      sym__escape_sequence,
  [46] = 2,
    ACTIONS(20), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
    STATE(12), 1,
      sym_root_group,
  [53] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(24), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
  [61] = 1,
    ACTIONS(26), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
  [65] = 1,
    ACTIONS(28), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
  [69] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [73] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(34), 1,
      anon_sym_GROUP_DQUOTE_SLASH_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 69,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 77,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root_group, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
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
