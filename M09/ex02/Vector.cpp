#include "PmergeMe.hpp"

void PmergeMe::pairVec(int argc, char **argv) {
    if (argc < 2)
    {
        std::cerr << "Less than 2\n";
        return;
    }

    unsigned int number1;
    unsigned int number2;
    int amount = argc - 1;

    // std::cout << "!!! " << amount << std::endl;

    for (int i = 1; i < amount; i += 2)
    {
        try {
            number1 = std::stoi(argv[i]);
            number2 = std::stoi(argv[i + 1]);
        } 
        catch (const std::exception &e) {
            std::cerr << "Error: Invalid number format in input!\n";
            return;
        }

        if (number1 < number2)
            vecpair.emplace_back(number1, number2);
        else
            vecpair.emplace_back(number2, number1);
    }

    if (amount % 2 != 0 && argv[argc - 1]) {
        try {
            odd_number = std::stoi(argv[argc - 1]);
        } catch (const std::exception &e) {
            std::cerr << "Error: Invalid number format for odd element!\n";
        }
    }
}





void PmergeMe::assigningVec() {
    for (const auto &pair : vecpair) {
        Avec.push_back(pair.first);
        Bvec.push_back(pair.second);
    }
    if (odd_number != -1) {
        Avec.push_back(odd_number);
    }

    // std::cout << " \nA:";
    // for (int numbers : Avec) {
    //     std::cout << numbers << " ";
    // }
    // std::cout << " \nB:";
    // for (int numbers : Bvec) {
    //     std::cout << numbers << " ";
    // }
}



void PmergeMe::sortAvec()
{
    std::sort(Avec.begin(), Avec.end());
    // std::cout << " \n SORTED A:";
    // for (int numbers : Avec)
    // {
    //     std::cout << numbers << " ";
    // }
}
void PmergeMe::sortBvec()
{
    std::sort(Bvec.begin(), Bvec.end());
    // std::cout << " \n SORTED B:";
    // for (int numbers : Bvec)
    // {
    //     std::cout << numbers << " ";
    // }
}

void PmergeMe::insertBintoAVec()
{
    std::vector<int> sortedA = Avec;

    int insertSize = 1;
    int inserted = 0;

    while (inserted < static_cast<int>(Bvec.size()))/// until all elements from B => A
    {

        int endIdx = std::min(inserted + insertSize, (int)Bvec.size());// ensure that amount of insertion
                                                                    //not more then the size of B
        for (int i = inserted; i < endIdx; i++)
        {
            auto pos = std::lower_bound(sortedA.begin(), sortedA.end(), Bvec[i]);//. ifnd the pos in sortedA 
                                                                            //where B[i] can be insorted
            sortedA.insert(pos, Bvec[i]);///position found 
        }
        inserted = endIdx;// changing everytime how many have ben inserted,a nd start from this number 
        insertSize *= 2;
    }
    std::cout << "\nAfter ";
    for (int num : sortedA)
        std::cout << num << " ";
    

}