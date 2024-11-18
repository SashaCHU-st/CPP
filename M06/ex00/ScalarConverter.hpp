#define pragma once

#include <iostream>
#include <iomanip>
#include <limits>
class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
		ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();
        static void convert(std::string literal);
        int floatPseudo(std::string literal);
        int doublePseudo(std::string literal);
        int check(std::string literal);
        void char_things(std::string literal);
        void int_things(std::string literal);
        void double_things(std::string literal);
        void float_things(std::string literal);
        int countFs(std::string &literal, char f);
};