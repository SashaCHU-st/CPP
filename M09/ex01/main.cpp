#include "RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr<< "Usage ./RPN \"1 2 + 3 -\""<< std::endl;
        return (1);
    }

    std::string argument = argv[1];
    RPN rpn;

    rpn.polishCalculation(argument);

    return(0);
}