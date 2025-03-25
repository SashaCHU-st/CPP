#include "PmergeMe.hpp"
void PmergeMe::pairList(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Less than 2\n";
        return;
    }
    unsigned int number1;
    unsigned int number2;
    int amount = argc - 1;
    for (int i = 1; i < amount; i += 2) {
        try {
            number1 = std::stoi(argv[i]);
            number2 = std::stoi(argv[i + 1]);
        } catch (const std::exception &e) {
            std::cerr << "Error: Invalid number format in input!\n";
            return;
        }
        if (number1 < number2)
            listPair.emplace_back(number1, number2);
        else
            listPair.emplace_back(number2, number1);
    }
    if (amount % 2 != 0 && argv[argc - 1]) {
        try {
            odd_number = std::stoi(argv[argc - 1]);
        } catch (const std::exception &e) {
            std::cerr << "Error: Invalid number format for odd element!\n";
        }
    }
}

void PmergeMe::assigningList() {
    for (const auto &pair : listPair) {
        Alist.push_back(pair.first);
        Blist.push_back(pair.second);
    }
    if (odd_number != -1) {
        Alist.push_back(odd_number);
    }
}


void PmergeMe::sortBlist() 
{
    Blist.sort();
    // std::cout << " \nSORTED B:";
    // for (int numbers : Blist)
    // {
    //     std::cout << numbers << " ";
    // }
}


void PmergeMe::insertBintoAList()
{
    std::list<int> sortedA = Alist;  
    std::vector<int> jacobsthalSequence;  
    int index = 1;
    

    //assigning indexes of Jacob
    while (getJacobsthalNbr(index) < static_cast<int>(Blist.size()))
    {
        jacobsthalSequence.push_back(getJacobsthalNbr(index));
        index++;
    }
    
    jacobsthalSequence.push_back(Blist.size());

    auto itB = Blist.begin();
    int inserted = 0;

    for (int i = 0; i < static_cast<int>(jacobsthalSequence.size()); i++)
    {
        int insertLimit = std::min(jacobsthalSequence[i], static_cast<int>(Blist.size()));/// checking the minimum
        
        while (inserted < insertLimit && itB != Blist.end())
        {
            auto itA = sortedA.begin();
            while (itA != sortedA.end() && *itA < *itB)
                ++itA;
            sortedA.insert(itA, *itB);  
            ++itB;
            inserted++;
        }

    }

    Alist = sortedA;
}



