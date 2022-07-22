module.exports = grammar({
  name: 'yaml',

  conflicts: $ => [
  ],

  extras: $ => [
    /[ \t\r\n]/,
  ],

  word: $ => $._lower_id,

  rules: {
    yaml: $ => repeat($.entry),


    simpleId: $ => choice($._lower_id, $._upper_id),

    _upper_id: $ => /[A-Z][A-Za-z0-9_]*/,
    _lower_id: $ => /[a-z][A-Za-z0-9_]*/,

    // YAML stuff below this line

    entry: $ => choice(
      $.keyvaluepair,
      $.listitem,
      $.comment
    ),

    comment: $ => seq(
      "# ",
      $.value
    ),

    keyvaluepair: $ => seq(
      field('key', $.key),
      ':',
      field('value', $.value),
    ),

    key: $ => choice(
      $.simpleId,
      seq($.simpleId, "/", $.key),
      seq($.simpleId, "-", $.key)
    ),

    listitem: $ => seq(
      '-',
      $.value
    ),

    value: $ => /[^\r\n]*/,
  }
});

function sep(rule, s) {
  return optional(sep1(rule, s))
}

function sep1(rule, s) {
  return seq(rule, repeat(seq(s, rule)))
}
