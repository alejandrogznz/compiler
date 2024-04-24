#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include "./Stream.hpp"
#include <cctype>
#include <vector>

enum class KeyWord {
    Return,
    Exit
};

enum class TokenType {
    Identifier,
    KeyWord,
    Seperator,
    Operator,
    Literal,
    Comment,
    Whitespace
};

struct Token {
    std::string tokenString;
    TokenType tokenType;
};

class Lexer {

    Stream stream;

    std::vector<Token*> tList;

  public:
    Lexer() = delete;

    Lexer(std::string filename);

    std::string getToken();
};
