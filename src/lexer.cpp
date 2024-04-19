#include "../inc/lexer.hpp"

Lexer::Lexer(std::string filename)
    :stream(filename)
{
}

std::string Lexer::getToken()
{
    std::string t = "";
    char c;

    if (stream.peek() == EOF)
        return std::string("EOF");

    // Remove any whitespace before extracting token
    while(true) {
        if (isspace(stream.peek()) || stream.peek() == ' '){
            stream.getChar();
        }
        else
            break;
    }
    
    // Get the next token
    while(c != EOF)
    {
        char p = stream.peek();

        // String Constant
        if (p == '"')
        {
            stream.getChar();
            while((c = stream.getChar()) != '"')
            {
                t += c;
            }
            return t;
        }

        c = stream.getChar();
        if (isspace(c))
            break;
        t += c;
    }
    return t;
}
