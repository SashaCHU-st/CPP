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
    /////INFFFFFF things
    ScalarConverter function;/// becasue i cannot create non static inside static
    if(function.inf(literal))
        return;
    if(!isdigit(literal[0]) && literal.length() > 1)
    {
        std::cout << "Only chars are acceptable" <<std::endl;
        return;
    }
    int i = 0;
    while (literal[i])
    {
        if(isdigit(literal[i]) && isalpha(literal[i + 1]) && !(literal.back() == 'f'))
        {
            std::cout << "No mix" <<std::endl;  
            return;
        }
        i++;
    }
    {
        char kuku;
        std::cout << "char: ";
        try {
            kuku = stoi(literal);
            if (kuku < 33 || kuku > 126)
            {
                std::cout << "Non displayable" << std::endl;
            }
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
        try
        {
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
        float kuku;
        std::cout<<  "float: ";
        try {
            kuku = stof(literal);
            if (literal.find('.') == std::string::npos)
                std::cout << static_cast<float>(kuku) << ".0f" << std::endl;
            else
                std::cout << static_cast<float>(kuku) << "f" << std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "impossible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
        }
    }
     {
        double kuku;
        std::cout<<  "double: ";
        try {
            kuku = stod(literal);
            if(literal.find('.') == std::string::npos)
                std::cout<< static_cast<double>(kuku) <<".0"<<std::endl;
            else
                std::cout<< static_cast<double>(kuku)<<std::endl;
        } catch (const std::invalid_argument&) {
            std::cerr << "impossible" << std::endl;
        }
        catch (const std::out_of_range&) {
            std::cerr << "out_of_range" << std::endl;
        }
    }
};