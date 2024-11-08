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
  //  std::string literal;
    if(!isdigit(literal[0]) && literal.length() == 1)
        literal = std::to_string(static_cast<int>(literal[0]));
    {
        int kuku;
        try {
            kuku = stoi(literal);
            std::cout << "char: ";
            if(literal.length() > 1 && !isdigit(literal[0]))
                 std::cout << "impossible" << std::endl;
            else if (kuku < 33 || kuku > 126)
                std::cout << "Non displayable" << std::endl;
            else
                std::cout <<'\''<< static_cast<char>(kuku) <<'\''<< std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "invalid_argument" << std::endl;
            return;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
            return;
        }
    }

    {
        int kuku;
        std::cout<< "int: ";
        try {
            kuku = stoi(literal);
            std::cout<< kuku << std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "invalid_argument" << std::endl;
            return;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
            return;
        }
    }
    {
        int kuku;
        std::cout<<  "float: ";
        try {
            kuku = stoi(literal);
            std::cout<< static_cast<float>(kuku);
            std::cout<< ".0f"<< std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "invalid_argument" << std::endl;
            return;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
            return;
        }
    }
     {
        int kuku;
        std::cout<<  "double: ";
        try {
            kuku = stoi(literal);
            std::cout<< static_cast<double>(kuku);
            std::cout<< ".0"<< std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "invalid_argument" << std::endl;
            return;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
            return;
        }
    }
};