#include "ScalarConverter.hpp"
int main(int argc, char **argv)
{
    
    if(argc == 2)
    {
        std::string kuku(argv[1]);
        ScalarConverter::convert(kuku);
    }
    else
        return(1);
    return(0);

}