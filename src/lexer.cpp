#include "../inc/lexer.hpp"

Lexer::Lexer(std::string filename)
    :stream(filename)
{
   while(stream.good())
   {
       char c = stream.getChar();
       if (c == EOF) break;
       std::cout << c;
   }
   std::cout << std::endl;
}
