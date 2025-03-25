#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    
};
PmergeMe::~PmergeMe()
{
    
};

int PmergeMe::forVector(int argc, char **argv)
{
    auto vecSortStart = std::chrono::high_resolution_clock::now();
    size = argc - 1;
    pairVec(argc, argv);

    // std::cout << "\nnow";
    // for (size_t i = 0; i < vecpair.size(); i++) {
    //     std::cout << "(" << vecpair[i].first << ", " << vecpair[i].second << ") ";
    // }

    assigningVec();// asigning to a and b vectors

    sortBvec();// sorting b

    insertBintoAVec();
    auto vecSortEnd = std::chrono::high_resolution_clock::now();
    vecDuration = std::chrono::duration_cast<std::chrono::microseconds>(vecSortEnd-vecSortStart).count();
    std::cout << "\nTime to process a range of " << size << " elements with std::vector : " << vecDuration/1000 << "us"<< std::endl;
    return(0);

};

int PmergeMe::forList(int argc, char **argv)
{
    auto listSortStart = std::chrono::high_resolution_clock::now();
    size = argc - 1;
    pairList(argc, argv);

    // for (const auto &p : listPair) {
    //     std::cout << "(" << p.first << ", " << p.second << ") ";
    // }


    assigningList();// asigning to a and b list

    sortBlist();// sorting b

    insertBintoAList();
    auto listSortEnd = std::chrono::high_resolution_clock::now();
    listDuration = std::chrono::duration_cast<std::chrono::microseconds>(listSortEnd-listSortStart).count();
    std::cout << "\nTime to process a range of " << size << " elements with std::list : " << listDuration/1000 << "us"<< std::endl;
    return(0);

};