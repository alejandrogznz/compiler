#include <iostream>
#include "../inc/lexer.hpp"
#include <fstream>

using namespace std;

int main() 
{
    Lexer lexer("./samplemain.cpp");
    while (true) {
        std::string token = lexer.getToken();
        if (token == "EOF") break;
        cout << token << endl;
    }
    return 0;
}
