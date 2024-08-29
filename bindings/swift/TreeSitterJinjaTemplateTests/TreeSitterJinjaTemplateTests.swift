import XCTest
import SwiftTreeSitter
import TreeSitterJinjaTemplate

final class TreeSitterJinjaTemplateTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_jinja_template())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading JinjaTemplate grammar")
    }
}
