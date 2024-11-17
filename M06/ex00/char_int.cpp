#include "ScalarConverter.hpp"
void ScalarConverter::char_things(std::string literal)
{
    try
    {
        std::cout<< "Here I am: orginally I am a char" << std::endl;
            char c = literal[0];
            if (c < 33 || c > 126)
                std::cout << "char: Non displayable" << std::endl;
            else
                std::cout << "char: "<<'\'' << literal[0] << '\'' << std::endl;
            std::cout << "int: " << static_cast<int>(c) << std::endl;
            std::cout << std::fixed << std::setprecision(1);
            std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(c) << std::endl;


    } catch (const std::invalid_argument&) {
        std::cerr << "impossible" << std::endl;
    } catch (const std::out_of_range&) {
        std::cerr << "out_of_range" << std::endl;
    }
}


void ScalarConverter::int_things(std::string literal)
{
    try
    {
        std::cout<< "Here I am: orginally I am an int" << std::endl;
        int i = stoi(literal);
        if (i < 33 || i > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " <<'\'' << static_cast<char>(i) <<'\'' << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    } catch (const std::invalid_argument&) {
        std::cerr << "impossible" << std::endl;
    } catch (const std::out_of_range&) {
        std::cerr << "out_of_range" << std::endl;
    }
}