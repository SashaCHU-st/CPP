#include "Span.hpp"
int main()
{
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        // sp.addNumber(11);
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try{
        Span sp2;
        std::vector<int> _numbers = { 1, 2, 3, 4 };
        std::vector<int> _numbers2 = { 1, 2, 3, 4, 5 };
        unsigned int hundred = 15;
        std::vector<int> _numbers3(hundred, 7);//vector size of 100 filled with 7
        sp2.addNumbers(_numbers.begin(), _numbers.end());
        sp2.addNumbers(_numbers2.begin(), _numbers2.end());
        sp2.addNumbers(_numbers3.begin(), _numbers3.end());

        sp2.print();
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
     try{
        Span sp2(140);
        std::vector<int> _numbers = { 1, 2, 3, 4 };
        std::vector<int> _numbers2 = { 1, 2, 3, 4, 5 };
        unsigned int hundred = 100;
        std::vector<int> _numbers3(hundred, 7);//vector size of 100 filled with 7
        sp2.addNumbers(_numbers.begin(), _numbers.end());
        sp2.addNumbers(_numbers2.begin(), _numbers2.end());
        sp2.addNumbers(_numbers3.begin(), _numbers3.end());

        sp2.print();
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return(0);
}