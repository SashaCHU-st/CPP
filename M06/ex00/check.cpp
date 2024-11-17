#include "ScalarConverter.hpp"

int ScalarConverter::check(std::string literal)
{
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

int ScalarConverter::floatPseudo(std::string literal)
{
    if(literal == "+inff" || literal == "-inff" || literal == "nanf" || literal == "inff")
        return(1);
    return(0);
}

int ScalarConverter::doublePseudo(std::string literal)
{
    if(literal == "+inf" || literal == "-inf" || literal == "nan" || literal == "inf")
        return(1);
    return(0);
}