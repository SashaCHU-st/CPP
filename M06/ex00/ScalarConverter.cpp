#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

};
ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
    if(this == &copy)
        return(*this);
    return(*this);
};
ScalarConverter::~ScalarConverter()
{

};

void ScalarConverter::convert(std::string literal)
{ 
    ScalarConverter function;
    if(function.check(literal))
        return;
    if(!isdigit(literal[0]) && literal.length() == 1)
        function.char_things(literal);
    else if(literal.find('.') == std::string::npos && literal.back() != 'f' && isdigit(literal[0]))
        function.int_things(literal);
    else if (function.doublePseudo(literal) || (literal.find('.') != std::string::npos && literal.back() !='f'))
        function.double_things(literal);
    else if (function.floatPseudo(literal) || literal.back() == 'f')
        function.float_things(literal);
    else
        std::cout<< "Ai, Ai, Ai aacceptable values are: int, char, double float and Pseudo literals(inf, nan etc)"<<std::endl;
};