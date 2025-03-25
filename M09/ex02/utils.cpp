#include "PmergeMe.hpp"

std::vector<int> PmergeMe::generateJacobsthalSequence(int n) 
{
    std::vector<int> jacobsthalSeq;
    if (n <= 0) 
        return jacobsthalSeq; // If n is 0 or less, return an empty sequence
    jacobsthalSeq.push_back(0); // First Jacobsthal number, J0
    if (n == 1)
        return jacobsthalSeq; // If n is 1, return sequence with just the first number

    jacobsthalSeq.push_back(1); // Second Jacobsthal number, J1

    int j0 = 0; // J0
    int j1 = 1; // J1
    int jn = 0; // Current Jacobsthal number

    // Generate the sequence up to n-th number
    for (int i = 2; i < n; ++i)
    {
        jn = j1 + 2 * j0; // Jacobsthal number formula
        jacobsthalSeq.push_back(jn); // Add to the sequence

        j0 = j1; // Move to previous number
        j1 = jn; // Move to the current number
    }

    return jacobsthalSeq;
}