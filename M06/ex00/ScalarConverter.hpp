#define pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
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
        int check(std::string literal);
        void char_things(std::string literal);
        void int_things(std::string literal);
        void double_things(std::string literal);
        void float_things(std::string literal);
        int inf_things(std::string literal);
};