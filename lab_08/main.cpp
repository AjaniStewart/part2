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
        if(line.find('{') && first){
            //indents code for value amount of time
            for(int i = 0; i < value; i++){
                result += "    ";
            }
            //builds the string
            result += removeLeadingSpaces(line) + '\n';

            //updates value depending on how many brackets 
            //there are
            value = countChar(line, '{');
            
        }
    }
    std::cout << result << std::endl;
    /*
    while(getline(std::cin,line))
    {


    }
    */
}