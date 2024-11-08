#define pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();
        static void convert(std::string literal);
        int inf(std::string literal);
};