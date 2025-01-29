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
    vec2 = copy.vec2;
    return(*this);

}

void Span::addNumber(unsigned int number)
{
    vec.push_back(number);
    vec2 = vec;
    std::sort(vec2.begin(), vec2.end());
}

unsigned int Span::longestSpan()
{
    int last = vec2.back();
    int first = vec2.front();

    int max = last - first;
    return(max);
};
unsigned  int Span::shortestSpan()
{

    unsigned int min = std::numeric_limits<unsigned int>::max();

    for(auto it = vec2.begin(); it!= vec2.end() -1 ;++it)
    {
        // std::cout<< *it<<" ";
        unsigned int difference = *(it + 1) - *it;
        min = std::min(min, difference);
    }
    return(min);
};