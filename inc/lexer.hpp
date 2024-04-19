#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include "./Stream.hpp"
#include <cctype>

class Lexer {

    Stream stream;

  public:
    Lexer() = delete;

    Lexer(std::string filename);

    std::string getToken();
};
