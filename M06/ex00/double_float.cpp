#include "ScalarConverter.hpp"

void ScalarConverter::float_things(std::string literal)
{
    try {
            float f = std::stof(literal);
            std::cout << "Here I am: originally I am a float" << std::endl;

            if(f >= 33 && f <= 126)
                std::cout << "char: " << '\''<<static_cast<char>(f) << '\''<< std::endl;
            else if (f > 0 && f < 255 && isprint(f))
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: impossible" << std::endl;

            
            if (f >= static_cast<float>(std::numeric_limits<int>::min()) &&
                f <= static_cast<float>(std::numeric_limits<int>::max()))
                std::cout << "int: " << static_cast<int>(f) << std::endl;
            else
                std::cout << "int: impossible" << std::endl;

            
            std::cout << std::fixed;
            size_t decimalPos = literal.find('.');
            if (decimalPos != std::string::npos)
            {
                size_t precision = literal.length() - decimalPos - 2;
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


void ScalarConverter::double_things(std::string literal)
{
    try
    {
        double d = std::stod(literal);
        std::cout << "Here I am: originally I am a double" << std::endl;

        if(d >= 33 && d <= 126)
            std::cout << "char: " << '\''<<static_cast<char>(d) << '\''<< std::endl;
        else if (d > 0 && d < 255 && isprint(d))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;


        if(d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        else
            std::cout << "int: " << "impossible" << std::endl;

        
        std::cout << std::fixed;
        size_t decimalPos = literal.find('.');
        if (decimalPos != std::string::npos)
        {
            size_t precision = literal.length() - decimalPos - 1;
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