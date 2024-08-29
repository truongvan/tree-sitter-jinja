/**
 * @file Jinja Template grammar for tree-sitter
 * @author Truong Van <truongvan@live.com>
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'jinja_template',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat(choice(
            $.variable, $.assignment
        )),
        variable: $ => seq("{{", repeat($._statement), "}}"),
        assignment: $ => seq("{%", optional($.code), "%}"),
        keyword: _ => choice(
            "in", "set", "let", "filter", "if", "block", "for", "match", "include", "macro"
        ),
        code: $ => seq(
            $.keyword,
            $._expression,
            optional(seq(
                $._operator,
                choice($.identifier, $.number)
            ))
        ),
        _code: $ => /[^{}%]+/,

        _statement: $ => choice(
            $._expression
        ),
        _operator: _ => choice("=", "in", "with"),
        _expression: $ => seq(
            $.identifier,
            optional(repeat(seq(
                '::',
                $.identifier
            )))),
        identifier: $ => /[^\d][a-zA-Z0-9\_]+/,
        number: $ => /\d+/

    }
});