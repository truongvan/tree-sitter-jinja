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
            $.variable, $.assignment, $.comment,
        )),
        variable: $ => seq("{{", repeat($._statement), "}}"),
        assignment: $ => seq("{%", optional($.code), "%}"),
        comment: $ => seq("{#", optional($.value), "#}"),
        keyword: _ => choice(
            "in", "set", "let", "if let", "filter", "if", "else", "endif", "block", "for", "match", "include", "macro"
        ),
        code: $ => seq(
            $.keyword,
            optional(seq(
                $._expression,
                optional(seq(
                    $.operator,
                    $.value
                ))
            ))
        ),
        _code: $ => /[^{}%]+/,

        _statement: $ => choice(
            $._expression
        ),
        operator: _ => choice("=", "in", "with"),
        _expression: $ => seq(
            $.identifier,
            optional(repeat(seq(
                choice("::", "."),
                $.identifier
            )))),
        identifier: $ => /[^\d][a-zA-Z0-9\_\(\)]+/,
        value: _ => /[^<>"'=\s]+/,

    }
});