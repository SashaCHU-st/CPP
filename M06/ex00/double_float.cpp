#include "ScalarConverter.hpp"

void ScalarConverter::double_things(std::string literal)
{
    try {
            std::cout << "Here I am: originally I am a double" << std::endl;
            float f = std::stof(literal);
            if (f < 33 || f > 126)
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: " << static_cast<char>(f) << std::endl;

            std::cout << "int: " << static_cast<int>(f) << std::endl;
            std::cout << std::fixed;
            size_t decimalPos = literal.find('.');
            if (decimalPos != std::string::npos)
            {
                size_t precision = literal.length() - decimalPos - 1;
                std::cout << std::setprecision(precision);
            }
            else
                std::cout << std::setprecision(0);
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(f) << std::endl;

        } catch (const std::invalid_argument&) {
            std::cerr << "impossible" << std::endl;
        } catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
        }

}


void ScalarConverter::float_things(std::string literal)
{
    try
    {
            std::cout << "Here I am: originally I am a float" << std::endl;
            double d = std::stod(literal);
            if (d < 33 || d > 126)
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: " << '\''<<static_cast<char>(d) << '\''<< std::endl;

            std::cout << "int: " << static_cast<int>(d) << std::endl;
            std::cout << std::fixed;
            size_t decimalPos = literal.find('.');
            if (decimalPos != std::string::npos)
            {
                size_t precision = literal.length() - decimalPos - 2;
                std::cout << std::setprecision(precision);
            }
            else
                std::cout << std::setprecision(0);
            std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
            std::cout << "double: " << d << std::endl;

        } catch (const std::invalid_argument&) {
            std::cerr << "impossible" << std::endl;
        } catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
     }
}