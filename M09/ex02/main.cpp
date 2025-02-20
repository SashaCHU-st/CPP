#include "PmergeMe.hpp"

int checkInput(int argc, char **argv)
{
    if(argc < 3)
    {
        std::cerr <<"Not enough to sort"<< std::endl;
        return(1);
    }

    int i = 1;
    while (argv[i])
    {
        if(!isdigit(*argv[i]) || std::stoi(argv[i]) < 0)
        {
            std::cerr <<"Wrong input, not digit"<< std::endl;
            return(1);
        }
        i++;
    }
    
    return(0);
}

int main (int argc, char **argv)
{
   if(checkInput(argc, argv) == 1)
    {
        // std::cerr <<"Wrong input, not digit"<< std::endl;
        return(1);
    }
    std::cout << "Before:";
    int i = 1;
    while (argv[i])
    {
        std::cout<<" " <<argv[i];
        i++;
    }

    PmergeMe pmerge;
    pmerge.forVector(argc, argv);
    
    
}