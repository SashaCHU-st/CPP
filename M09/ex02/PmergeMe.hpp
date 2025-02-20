#pragma once
#include <iostream>
#include <vector>
#include <list>

class PmergeMe
{
    private:

    public:
        PmergeMe();
        ~PmergeMe();
        //utils
    //    int checkInput(int argc, char **argv);

    int forVector(int argc, char **argv);
    void pair(int argc, char **argv);
    std::vector<std::pair<int,int>> vecpair;
    void assigning(const std::vector<std::pair<int, int>>& vecpair);
    std::pair<int, int> a;
    std::pair<int, int> b;
};