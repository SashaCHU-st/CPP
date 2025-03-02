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
        amount = argc; // pmerge 3 5 7 6, i starts from 1 so while i < amount
    }
    else
        amount = argc - 1; //pmerge 3 5 7 6 1 , i starts from 1 so while i < amount, will not take last one
    // int i = 1;
    for (int i = 1; i < amount; i += 2)
    {
        try
        {
            number1 = std::stoi(argv[i]);
            number2 = std::stoi(argv[i+1]);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Error: Invalid number format in input!" << std::endl;
            return;
        }
        if (number1 < number2)
            vecpair.emplace_back(number1, number2);
        else
            vecpair.emplace_back(number2, number1);
    }
}

void PmergeMe::assigning()
{
    for(const auto &pair :vecpair)
    {
        A.push_back(pair.first);
        B.push_back(pair.second);
    }
    ///delete later printing
    std::cout << " \nA:";
    for (int numbers : A)
    {
        std::cout << numbers << " ";
    }
    std::cout << " \nB:";
    for (int numbers : B)
    {
        std::cout << numbers << " ";
    }
}

void PmergeMe::sortAvec()
{
    std::sort(A.begin(), A.end());
    std::cout << " \n SORTED A:";
    for (int numbers : A)
    {
        std::cout << numbers << " ";
    }
}
void PmergeMe::sortBvec()
{
    std::sort(B.begin(), B.end());
    std::cout << " \n SORTED B:";
    for (int numbers : B)
    {
        std::cout << numbers << " ";
    }
}




int PmergeMe::forVector(int argc, char **argv)
{
    pair(argc, argv);

    std::cout << "\nnow";
    for (size_t i = 0; i < vecpair.size(); i++) {
        std::cout << "(" << vecpair[i].first << ", " << vecpair[i].second << ") ";
    }

    assigning();// asigning to a and b vectors

    sortAvec();//sorting a 
    sortBvec();// sorting b

    // insertBintoA();
    return(0);

};
