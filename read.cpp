#include "read.hpp"


std::string readReadMe()
{
    std::string names;
    std::ifstream readMeFile;
    readMeFile.open("README.md");
    if(readMeFile.is_open())
    {
        std::string line;
        while(getline(readMeFile, line))
        {
            names += line + " ";
        }

    }

    return names;
}