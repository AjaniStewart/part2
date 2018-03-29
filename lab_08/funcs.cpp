#include <string>
#include <cctype>
#include <iostream>
#include "funcs.h"

//I included the funcs.h file here so your code can properly build

std::string removeLeadingSpaces(std::string line)
{
    std::string newString = "";
    int count = 0;
    while(isspace(line[count]))
        ++count;
    for (int i = count; i < line.size(); ++i)
        newString += line[i];
    return newString;
}

int countChar(std::string line, char c)
{
    int countChar(std::string line);
    static int bracket = 0;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == '{'){
            bracket++;
        }else if(line[i] == '}'){
            bracket--;
        }
    }
    return bracket;
}


