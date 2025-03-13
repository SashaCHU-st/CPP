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


void PmergeMe::sortAlist() 
{
    Alist.sort();
    // std::cout << " \nSORTED A:";
    // for (int numbers : Alist)
    // {
    //     std::cout << numbers << " ";
    // }
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
    int insertSize = 1;
    int inserted = 0;

    auto itB = Blist.begin();
    while (inserted < static_cast<int>(Blist.size()))
    {
        int endIdx = std::min(inserted + insertSize,(int)Blist.size());

        for (int i = inserted; i < endIdx && itB != Blist.end(); i++)
        {
            auto itA = sortedA.begin();
            while (itA != sortedA.end() && *itA < *itB)// if B is bigger then A move to next element
                                                        // if B is smaller stop moving insert B in A
                ++itA;
            sortedA.insert(itA, *itB);// insert B to A
            ++itB;
        }
        inserted = endIdx;
        insertSize *= 2;
    }

    std::cout << "\nList ";
    for (int num : sortedA) std::cout << num << " ";
}








