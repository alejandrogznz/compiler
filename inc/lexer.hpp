#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include "./Stream.hpp"

class Lexer {

    Stream stream;

  public:
    Lexer() = delete;

    Lexer(std::string filename);
};
