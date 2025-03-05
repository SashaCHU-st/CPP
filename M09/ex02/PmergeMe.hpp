#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cctype> 
#include <cstdlib>
#include <chrono>

class PmergeMe
{
    private:
        int odd_number = -1;
        int size;
        double vecDuration;
    public:
        PmergeMe();
        ~PmergeMe();

    //for vector
    std::vector<std::pair<int,int>> vecpair;
    std::vector<int> A;
    std::vector<int> B;
    int forVector(int argc, char **argv);
    void pair(int argc, char **argv);
    void assigning();
    void sortAvec();
    void sortBvec();
    void insertBintoA();


    //for list 
    std::list<std::pair<int, int>> listPair;
    int forList(int argc, char **argv);
    void pairList(int argc, char **argv);
};