#include "BitcoinExchange.hpp"
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout<< "kuku"<< std::endl;
        return 1;
    }
    std::string filename = argv[1];
    BitcoinExchange bit;
    if(bit.openData("data.csv"))
        return 1;
    if(bit.inputData(filename))
        return 1;
    

}