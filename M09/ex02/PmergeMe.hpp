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
        double listDuration;
    public:
        PmergeMe();
        ~PmergeMe();

    //for vector
    std::vector<std::pair<int,int>> vecpair;
    std::vector<int> Avec;
    std::vector<int> Bvec;
    int forVector(int argc, char **argv);
    void pairVec(int argc, char **argv);
    void assigningVec();
    void sortAvec();
    void sortBvec();
    void insertBintoAVec();


    //for list 
    std::list<std::pair<int, int>> listPair;
    std::list<int> Alist;
    std::list<int> Blist;
    void assigningList();
    void sortAlist();
    void sortBlist();
    void insertBintoAList();
    int forList(int argc, char **argv);
    void pairList(int argc, char **argv);

    //utils
    int getJacobsthalNbr(int n);
};