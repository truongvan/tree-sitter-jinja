#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_POUND = 5,
  anon_sym_POUND_RBRACE = 6,
  anon_sym_extends = 7,
  anon_sym_in = 8,
  anon_sym_set = 9,
  anon_sym_let = 10,
  anon_sym_iflet = 11,
  anon_sym_filter = 12,
  anon_sym_if = 13,
  anon_sym_else = 14,
  anon_sym_endif = 15,
  anon_sym_block = 16,
  anon_sym_for = 17,
  anon_sym_match = 18,
  anon_sym_include = 19,
  anon_sym_macro = 20,
  anon_sym_EQ = 21,
  anon_sym_with = 22,
  anon_sym_COLON_COLON = 23,
  anon_sym_DOT = 24,
  sym_identifier = 25,
  sym_value = 26,
  sym_source_file = 27,
  sym_variable = 28,
  sym_assignment = 29,
  sym_comment = 30,
  sym_keyword = 31,
  sym_code = 32,
  sym__statement = 33,
  sym_operator = 34,
  sym__expression = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_variable_repeat1 = 37,
  aux_sym__expression_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_extends] = "extends",
  [anon_sym_in] = "in",
  [anon_sym_set] = "set",
  [anon_sym_let] = "let",
  [anon_sym_iflet] = "if let",
  [anon_sym_filter] = "filter",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_block] = "block",
  [anon_sym_for] = "for",
  [anon_sym_match] = "match",
  [anon_sym_include] = "include",
  [anon_sym_macro] = "macro",
  [anon_sym_EQ] = "=",
  [anon_sym_with] = "with",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_value] = "value",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_assignment] = "assignment",
  [sym_comment] = "comment",
  [sym_keyword] = "keyword",
  [sym_code] = "code",
  [sym__statement] = "_statement",
  [sym_operator] = "operator",
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
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_iflet] = anon_sym_iflet,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_value] = sym_value,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_assignment] = sym_assignment,
  [sym_comment] = sym_comment,
  [sym_keyword] = sym_keyword,
  [sym_code] = sym_code,
  [sym__statement] = sym__statement,
  [sym_operator] = sym_operator,
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
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
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
  [anon_sym_iflet] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [sym_comment] = {
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
  [sym_operator] = {
    .visible = true,
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
  [9] = 7,
  [10] = 5,
  [11] = 11,
  [12] = 6,
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
  [23] = 8,
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
  [34] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '#', 53,
        '%', 54,
        '.', 83,
        ':', 8,
        '=', 80,
        'b', 32,
        'e', 33,
        'f', 29,
        'i', 24,
        'l', 20,
        'm', 10,
        's', 21,
        'w', 30,
        '{', 1,
        '}', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '{') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(88);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(88);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_iflet);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_iflet] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_variable] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(17), 1,
      sym_keyword,
    STATE(30), 1,
      sym_code,
    ACTIONS(15), 2,
      anon_sym_in,
      anon_sym_if,
    ACTIONS(13), 12,
      anon_sym_extends,
      anon_sym_set,
      anon_sym_let,
      anon_sym_iflet,
      anon_sym_filter,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_block,
      anon_sym_for,
      anon_sym_match,
      anon_sym_include,
      anon_sym_macro,
  [28] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(22), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    STATE(3), 4,
      sym_variable,
      sym_assignment,
      sym_comment,
      aux_sym_source_file_repeat1,
  [47] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym_variable,
      sym_assignment,
      sym_comment,
      aux_sym_source_file_repeat1,
  [66] = 3,
    STATE(5), 1,
      aux_sym__expression_repeat1,
    ACTIONS(32), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
    ACTIONS(30), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [80] = 3,
    STATE(5), 1,
      aux_sym__expression_repeat1,
    ACTIONS(37), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
    ACTIONS(35), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [94] = 3,
    STATE(6), 1,
      aux_sym__expression_repeat1,
    ACTIONS(37), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
    ACTIONS(39), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [108] = 1,
    ACTIONS(30), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [117] = 4,
    ACTIONS(41), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__expression_repeat1,
    ACTIONS(39), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [131] = 4,
    ACTIONS(45), 1,
      anon_sym_COLON_COLON,
    ACTIONS(48), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym__expression_repeat1,
    ACTIONS(30), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [145] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(13), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [157] = 4,
    ACTIONS(41), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym__expression_repeat1,
    ACTIONS(35), 2,
      anon_sym_RBRACE_RBRACE,
      sym_identifier,
  [171] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(13), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [183] = 3,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(11), 3,
      sym__statement,
      sym__expression,
      aux_sym_variable_repeat1,
  [195] = 3,
    ACTIONS(62), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(28), 1,
      sym_operator,
    ACTIONS(64), 3,
      anon_sym_in,
      anon_sym_EQ,
      anon_sym_with,
  [207] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [214] = 4,
    ACTIONS(68), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_value,
    STATE(15), 1,
      sym__expression,
  [227] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [234] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [241] = 1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [248] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [255] = 1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [262] = 2,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(30), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_COLON,
      sym_identifier,
  [271] = 2,
    ACTIONS(86), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(88), 2,
      sym_identifier,
      sym_value,
  [279] = 2,
    ACTIONS(90), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(92), 1,
      sym_value,
  [286] = 1,
    ACTIONS(94), 1,
      anon_sym_POUND_RBRACE,
  [290] = 1,
    ACTIONS(96), 1,
      sym_value,
  [294] = 1,
    ACTIONS(98), 1,
      sym_value,
  [298] = 1,
    ACTIONS(100), 1,
      anon_sym_PERCENT_RBRACE,
  [302] = 1,
    ACTIONS(102), 1,
      anon_sym_PERCENT_RBRACE,
  [306] = 1,
    ACTIONS(62), 1,
      anon_sym_PERCENT_RBRACE,
  [310] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(106), 1,
      sym_identifier,
  [318] = 1,
    ACTIONS(108), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 234,
  [SMALL_STATE(20)] = 241,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 279,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 290,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 302,
  [SMALL_STATE(31)] = 306,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 314,
  [SMALL_STATE(34)] = 318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
