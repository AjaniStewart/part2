#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
    std::string line, result;
    int openBraces = 0, closedBraces = 0;
    int value = 0;  
    bool first = true;

//testing removeLeadSpaces() fucntion
    while(getline(std::cin, line)){
        result = removeLeadingSpaces(line);

        if(line.find('{') && first){
            std::cout << value<< " "<<result << std::endl;
            value = countChar(line, '{');
            
        }
    }
    /*
    while(getline(std::cin,line))
    {


    }
    */
}