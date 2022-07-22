module.exports = grammar({
  name: 'yaml',

  conflicts: $ => [
  ],

  extras: $ => [
    /[ \t\r\n]/,
  ],

  word: $ => $._lower_id,

  rules: {
    yaml: $ => repeat($.yaml_entry),


    simpleId: $ => choice($._lower_id, $._upper_id),

    _upper_id: $ => /[A-Z][A-Za-z0-9_]*/,
    _lower_id: $ => /[a-z][A-Za-z0-9_]*/,

    // YAML stuff below this line

    yaml_entry: $ => choice(
      $.yaml_keyvaluepair,
      $.yaml_listitem,
      $.yaml_comment
    ),

    yaml_comment: $ => seq(
      "# ",
      $.yaml_value
    ),

    yaml_keyvaluepair: $ => seq(
      field('key', $.yaml_key),
      ':',
      field('value', $.yaml_value),
    ),

    yaml_key: $ => choice(
      $.simpleId,
      seq($.simpleId, "/", $.yaml_key),
      seq($.simpleId, "-", $.yaml_key)
    ),

    yaml_listitem: $ => seq(
      '-',
      $.yaml_value
    ),

    yaml_value: $ => /[^\r\n]*/,
  }
});

function sep(rule, s) {
  return optional(sep1(rule, s))
}

function sep1(rule, s) {
  return seq(rule, repeat(seq(s, rule)))
}
