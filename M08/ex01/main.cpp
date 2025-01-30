#include "Span.hpp"
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    Span sp2;
    std::vector<int> _numbers = { 1, 2, 3, 4, 5 };
    std::vector<int> _numbers2 = { 1, 2, 3, 4, 5 };
    unsigned int hundred = 100;
    std::vector<int> _numbers3(hundred, 7);
    sp2.addNumbers(_numbers.begin(), _numbers.end());
    sp2.addNumbers(_numbers2.begin(), _numbers2.end());
    sp2.addNumbers(_numbers3.begin(), _numbers3.end());

    sp2.print();
    return(0);
}