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

int ScalarConverter::inf(std::string literal)
{
    if (literal == "nan") 
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return(1);
    }
    if (literal == "-inff") 
    {
        std::cout << "char: -inff" << std::endl;
        std::cout << "int: -inff" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inff" << std::endl;
        return(1);
    }
    if (literal == "+inff") 
    {
        std::cout << "char: +inff" << std::endl;
        std::cout << "int: +inff" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inff" << std::endl;
        return (1);
    }
    if (literal == "+inf") 
    {
        std::cout << "char: +inf" << std::endl;
        std::cout << "int: +inf" << std::endl;
        std::cout << "float: +inf" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return (1);
    }
    if (literal == "-inf") 
    {
        std::cout << "char: -inf" << std::endl;
        std::cout << "int: -inf" << std::endl;
        std::cout << "float: -inf" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return (1);
    }
    return(0);
}

void ScalarConverter::convert(std::string literal)
{ 
    if(!isdigit(literal[0]) && literal.length() == 1)
        literal = std::to_string(static_cast<int>(literal[0]));
    ScalarConverter function;/// becasue i cannot create non static inside static
    if(function.inf(literal))
        return;
    {
        int kuku;
        std::cout << "char: ";
        try {
            kuku = stoi(literal);
            if (kuku < 33 || kuku > 126)
                std::cout << "Non displayable" << std::endl;
            else
                std::cout <<'\''<< static_cast<char>(kuku) <<'\''<< std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "imposible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
        }
    }

    {
        int kuku;
        std::cout<< "int: ";
        try {
                kuku = stoi(literal);
                std::cout<< kuku << std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "impossible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
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
            std::cerr << "impossible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
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
            std::cerr << "impossible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
        }
    }
};