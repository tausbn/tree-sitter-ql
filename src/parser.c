#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  sym__lower_id = 1,
  sym__upper_id = 2,
  anon_sym_POUND = 3,
  anon_sym_COLON = 4,
  anon_sym_SLASH = 5,
  anon_sym_DASH = 6,
  sym_value = 7,
  sym_yaml = 8,
  sym_simpleId = 9,
  sym_entry = 10,
  sym_comment = 11,
  sym_keyvaluepair = 12,
  sym_key = 13,
  sym_listitem = 14,
  aux_sym_yaml_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__lower_id] = "_lower_id",
  [sym__upper_id] = "_upper_id",
  [anon_sym_POUND] = "# ",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [sym_value] = "value",
  [sym_yaml] = "yaml",
  [sym_simpleId] = "simpleId",
  [sym_entry] = "entry",
  [sym_comment] = "comment",
  [sym_keyvaluepair] = "keyvaluepair",
  [sym_key] = "key",
  [sym_listitem] = "listitem",
  [aux_sym_yaml_repeat1] = "yaml_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__lower_id] = sym__lower_id,
  [sym__upper_id] = sym__upper_id,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_value] = sym_value,
  [sym_yaml] = sym_yaml,
  [sym_simpleId] = sym_simpleId,
  [sym_entry] = sym_entry,
  [sym_comment] = sym_comment,
  [sym_keyvaluepair] = sym_keyvaluepair,
  [sym_key] = sym_key,
  [sym_listitem] = sym_listitem,
  [aux_sym_yaml_repeat1] = aux_sym_yaml_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__lower_id] = {
    .visible = false,
    .named = true,
  },
  [sym__upper_id] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleId] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyvaluepair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_listitem] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_yaml_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__upper_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__lower_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__lower_id] = ACTIONS(1),
    [sym__upper_id] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_yaml] = STATE(13),
    [sym_simpleId] = STATE(10),
    [sym_entry] = STATE(2),
    [sym_comment] = STATE(4),
    [sym_keyvaluepair] = STATE(4),
    [sym_key] = STATE(14),
    [sym_listitem] = STATE(4),
    [aux_sym_yaml_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__lower_id] = ACTIONS(5),
    [sym__upper_id] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
  },
  [2] = {
    [sym_simpleId] = STATE(10),
    [sym_entry] = STATE(3),
    [sym_comment] = STATE(4),
    [sym_keyvaluepair] = STATE(4),
    [sym_key] = STATE(14),
    [sym_listitem] = STATE(4),
    [aux_sym_yaml_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__lower_id] = ACTIONS(5),
    [sym__upper_id] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
  },
  [3] = {
    [sym_simpleId] = STATE(10),
    [sym_entry] = STATE(3),
    [sym_comment] = STATE(4),
    [sym_keyvaluepair] = STATE(4),
    [sym_key] = STATE(14),
    [sym_listitem] = STATE(4),
    [aux_sym_yaml_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__lower_id] = ACTIONS(15),
    [sym__upper_id] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      sym__upper_id,
      sym__lower_id,
      anon_sym_POUND,
      anon_sym_DASH,
  [8] = 1,
    ACTIONS(26), 5,
      ts_builtin_sym_end,
      sym__upper_id,
      sym__lower_id,
      anon_sym_POUND,
      anon_sym_DASH,
  [16] = 1,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      sym__upper_id,
      sym__lower_id,
      anon_sym_POUND,
      anon_sym_DASH,
  [24] = 1,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      sym__upper_id,
      sym__lower_id,
      anon_sym_POUND,
      anon_sym_DASH,
  [32] = 3,
    STATE(10), 1,
      sym_simpleId,
    STATE(16), 1,
      sym_key,
    ACTIONS(5), 2,
      sym__upper_id,
      sym__lower_id,
  [43] = 1,
    ACTIONS(32), 3,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_DASH,
  [49] = 2,
    ACTIONS(34), 1,
      anon_sym_COLON,
    ACTIONS(36), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
  [57] = 1,
    ACTIONS(38), 1,
      sym_value,
  [61] = 1,
    ACTIONS(40), 1,
      sym_value,
  [65] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [69] = 1,
    ACTIONS(44), 1,
      anon_sym_COLON,
  [73] = 1,
    ACTIONS(46), 1,
      sym_value,
  [77] = 1,
    ACTIONS(48), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 49,
  [SMALL_STATE(11)] = 57,
  [SMALL_STATE(12)] = 61,
  [SMALL_STATE(13)] = 65,
  [SMALL_STATE(14)] = 69,
  [SMALL_STATE(15)] = 73,
  [SMALL_STATE(16)] = 77,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_repeat1, 2), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_repeat1, 2), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_listitem, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyvaluepair, 3, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleId, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yaml(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__lower_id,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
