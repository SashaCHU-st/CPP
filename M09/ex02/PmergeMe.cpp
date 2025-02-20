#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
};
PmergeMe::~PmergeMe()
{
    
};

void PmergeMe::pair(int argc, char **argv)
{
    unsigned int number1;
    unsigned int number2;
    int amount;
    if(argc % 2 == 0)
    {
        amount = argc;
    }
    else
        amount = argc - 1;
    int i = 1;
    while (argv[i])
    {
        number1 = std::stoi(argv[i]);
        number2 = std::stoi(argv[i+1]);
        if(number1 > number2)
            vecpair.push_back(std::make_pair(number1,number2));
        else
            vecpair.push_back(std::make_pair(number2,number1));
        i= i+2;
    }
}
void assigning (const std::vector<std::pair<int, int>>& vecpair)
{
    for (size_t i = 0; i < vecpair.size(); i++) {
        char label = (i % 2 == 0) ? 'a' : 'b';
        int index = (i / 2) + 1; 


    }
}

int PmergeMe::forVector(int argc, char **argv)
{
    pair(argc, argv);

    std::cout << "\nnow";
    for (size_t i = 0; i < vecpair.size(); i++) {
        std::cout << "(" << vecpair[i].first << ", " << vecpair[i].second << ") ";
    }

    assigning(vecpair);

    return(0);

};