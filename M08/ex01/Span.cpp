#include "Span.hpp"

Span::Span(): _N(0)
{}

Span::Span(unsigned int number): _N(number)
{}
Span::Span(Span const &copy)
{
    *this = copy;
};
Span& Span:: operator=(const Span& copy)
{
    if(this == &copy)
        return(*this);
    _N = copy._N;
    vec = copy.vec;
    sorted = copy.sorted;
    return(*this);

}

void Span::addNumber(unsigned int number)
{
    if(_N <= vec.size() || !vec.empty())
    {
        vec.push_back(number);
        sorted = vec;
        std::sort(sorted.begin(), sorted.end());
    }
    throw std::out_of_range ("Out of range");
}

unsigned int Span::longestSpan()
{
    int last;
    int first;
    int max;
    if(vec.size() > 1 || !vec.empty())
    {
        last = sorted.back();
        first = sorted.front();
        max = last - first;
    }
    else
        throw std::out_of_range("Need more the 1 numbers");
    return(max);
};
unsigned  int Span::shortestSpan()
{
    unsigned int min = std::numeric_limits<unsigned int>::max();
    if(vec.size() > 1 || !vec.empty())
    {
        for(auto it = sorted.begin(); it!= sorted.end() -1 ;++it)
        {
            // std::cout<< *it<<" ";
            unsigned int difference = *(it + 1) - *it;
            min = std::min(min, difference);
        }
    }
    else
        throw std::out_of_range("Need more the 1 numbers");
    return(min);
};