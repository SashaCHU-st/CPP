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
    int integN = stoi(literal);
    std::cout<<"Integer :" <<integN<<std::endl;

    float floatN = stof(literal);
    std::cout<<"Float :" <<floatN<<std::endl;

    double doubleN = stod(literal);
    std::cout<<"FDouble :" <<doubleN<<std::endl;
};