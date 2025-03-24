#include "PmergeMe.hpp"


int PmergeMe::getJacobsthalNbr(int n)
{
    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;
    
    int j0 = 0;
    int j1 = 1;
    int jn = 0;
    
    for (int i = 2; i <= n; i++) 
    {
        jn = j1 + 2 * j0;
        j0 = j1;
        j1 = jn;
    }
    
    return jn;
}