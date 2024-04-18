#pragma once

#include <fstream>
#include <string>

class Stream
{
    
    std::ifstream m_stream;

    public:

    Stream(std::string filename);

    bool good();
    
    std::string getToken();

    char getChar();

    private:

        
};
