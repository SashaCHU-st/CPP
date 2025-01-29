#define pragma once

#include "iostream"
#include "algorithm"
#include "vector" 
#include <limits>  

class Span
{  
    private:
        std::vector<int> vec;
        std::vector<int> sorted;
        unsigned int _N;
    public:
        Span();
        Span(unsigned int number);
        Span (Span const &copy);
        Span& operator=(const Span& op);
        void addNumber(unsigned int number);
        unsigned int shortestSpan();
        unsigned  int longestSpan();
        

    

};