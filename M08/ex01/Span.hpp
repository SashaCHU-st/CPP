#define pragma once

#include "iostream"
#include "algorithm"
#include "vector" 
#include <limits>  

class Span
{  
    private:
        std::vector<int> vec;
        unsigned int _N;
    public:
        std::vector<int> sorted;
        Span();
        Span(unsigned int number);
        Span (Span const &copy);
        Span& operator=(const Span& op);
        void addNumber(unsigned int number);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned  int longestSpan();
        void print() const;
        
};