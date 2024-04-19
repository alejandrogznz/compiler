#include "../inc/Stream.hpp"


Stream::Stream(std::string filename)
    :m_stream(filename, std::ifstream::in)
{
    
}

bool Stream::good()
{
    return m_stream.good();
}

std::string Stream::getToken() 
{
    if (m_stream.good())
    {
        m_stream.get();
        return " ";
    }
    return "EOF";
}

char Stream::getChar()
{
    if (m_stream.good())
        return m_stream.get();
    return EOF;
}

int Stream::peek() {
    return m_stream.peek();
}
