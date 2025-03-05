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
        //utils
    //    int checkInput(int argc, char **argv);

    int forVector(int argc, char **argv);
    void pair(int argc, char **argv);
    std::vector<std::pair<int,int>> vecpair;
    std::vector<int> A;
    std::vector<int> B;
    void assigning();
    void sortAvec();
    void sortBvec();
    void insertBintoA();
};