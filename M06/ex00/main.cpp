#include "ScalarConverter.hpp"
int main(int argc, char **argv)
{
    
    if(argc == 2)
    {
        std::string kuku(argv[1]);
        ScalarConverter::convert(kuku);
    }
    else
    {
        std::cout <<"give 1 argument, not more" << std::endl;
        return(1);
    }
    return(0);

}