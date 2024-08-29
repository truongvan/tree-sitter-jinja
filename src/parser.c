#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_in = 5,
  anon_sym_set = 6,
  anon_sym_let = 7,
  anon_sym_filter = 8,
  anon_sym_if = 9,
  anon_sym_block = 10,
  anon_sym_for = 11,
  anon_sym_match = 12,
  anon_sym_include = 13,
  anon_sym_macro = 14,
  anon_sym_EQ = 15,
  anon_sym_with = 16,
  anon_sym_COLON_COLON = 17,
  sym_identifier = 18,
  sym_number = 19,
  sym_source_file = 20,
  sym_variable = 21,
  sym_assignment = 22,
  sym_keyword = 23,
  sym_code = 24,
  sym__statement = 25,
  sym__operator = 26,
  sym__expression = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_variable_repeat1 = 29,
  aux_sym__expression_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_in] = "in",
  [anon_sym_set] = "set",
  [anon_sym_let] = "let",
  [anon_sym_filter] = "filter",
  [anon_sym_if] = "if",
  [anon_sym_block] = "block",
  [anon_sym_for] = "for",
  [anon_sym_match] = "match",
  [anon_sym_include] = "include",
  [anon_sym_macro] = "macro",
  [anon_sym_EQ] = "=",
  [anon_sym_with] = "with",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_assignment] = "assignment",
  [sym_keyword] = "keyword",
  [sym_code] = "code",
  [sym__statement] = "_statement",
  [sym__operator] = "_operator",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_assignment] = sym_assignment,
  [sym_keyword] = sym_keyword,
  [sym_code] = sym_code,
  [sym__statement] = sym__statement,
  [sym__operator] = sym__operator,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_repeat1] = {
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
  [13] = 4,
  [14] = 6,
  [15] = 7,
  [16] = 16,
  [17] = 17,
  [18] = 9,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '%', 36,
        ':', 3,
        '=', 56,
        'b', 22,
        'f', 19,
        'i', 16,
        'l', 12,
        'm', 7,
        's', 14,
        'w', 20,
        '{', 2,
        '}', 37,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_variable] = STATE(5),
    [sym_assignment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(11), 1,
      anon_sym_in,
    STATE(21), 1,
      sym_keyword,
    STATE(25), 1,
      sym_code,
    ACTIONS(13), 9,
      anon_sym_set,
      anon_sym_let,
      anon_sym_filter,
      anon_sym_if,
      anon_sym_block,
      anon_sym_for,
      anon_sym_match,
      anon_sym_include,
      anon_sym_macro,
  [24] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(20), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(3), 3,
      sym_variable,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [39] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    STATE(4), 1,
      aux_sym__expression_repeat1,
    ACTIONS(23), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [52] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_variable,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [67] = 3,
    ACTIONS(32), 1,
      anon_sym_COLON_COLON,
    STATE(4), 1,
      aux_sym__expression_repeat1,
    ACTIONS(30), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [80] = 3,
    ACTIONS(32), 1,
      anon_sym_COLON_COLON,
    STATE(6), 1,
      aux_sym__expression_repeat1,
    ACTIONS(34), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [93] = 3,
    ACTIONS(36), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(10), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [105] = 1,
    ACTIONS(23), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
      anon_sym_COLON_COLON,
  [113] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(12), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [125] = 3,
    ACTIONS(42), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(22), 1,
      sym__operator,
    ACTIONS(44), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [137] = 3,
    ACTIONS(46), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(12), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [149] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(23), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [160] = 3,
    ACTIONS(54), 1,
      anon_sym_COLON_COLON,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(30), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [171] = 3,
    ACTIONS(54), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym__expression_repeat1,
    ACTIONS(34), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [182] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [188] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [194] = 1,
    ACTIONS(23), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_COLON,
      sym_identifier,
  [200] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [206] = 1,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
  [212] = 2,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(11), 1,
      sym__expression,
  [219] = 2,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_number,
  [226] = 1,
    ACTIONS(70), 1,
      sym_identifier,
  [230] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [234] = 1,
    ACTIONS(74), 1,
      anon_sym_PERCENT_RBRACE,
  [238] = 1,
    ACTIONS(76), 1,
      anon_sym_PERCENT_RBRACE,
  [242] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [246] = 1,
    ACTIONS(80), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 160,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 226,
  [SMALL_STATE(24)] = 230,
  [SMALL_STATE(25)] = 234,
  [SMALL_STATE(26)] = 238,
  [SMALL_STATE(27)] = 242,
  [SMALL_STATE(28)] = 246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_jinja_template(void) {
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
