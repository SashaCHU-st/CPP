#include "ScalarConverter.hpp"

int ScalarConverter::check(std::string literal)
{
    if(!isdigit(literal[0]) && literal.length() > 1)
    {
        std::cout << "Only chars are acceptable" <<std::endl;
        return (1);
    }
    int i = 0;
    while (literal[i])
    {
        if(isdigit(literal[i]) && isalpha(literal[i + 1]) && !(literal.back() == 'f'))
        {
            std::cout << "No mix" <<std::endl;  
            return(1);
        }
        i++;
    }
    return(0);
}