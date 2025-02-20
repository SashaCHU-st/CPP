#define pragma once

#include <iostream>
#include <vector>
#include <stack>
#include <list>

template <typename T, typename Container = std::deque<T>> 
class MutantStack: public std::stack <T, Container>{
    public:
        MutantStack():std:: stack<T, Container>(){};
        ~MutantStack(){}

        typedef typename Container::iterator iterator;//typedef creates an alias for the iterator of the underlying container

        MutantStack(const MutantStack& copy)
        {
            *this = copy;
        }

        MutantStack& operator= (const MutantStack& copy)
        {
            if(this!= &copy)
                std::stack<T, Container>::operator=(copy);
            return(*this);
        };

        iterator begin()
        {
            return(this->c.begin());
        }
        iterator end()
        {
            return(this->c.end());
        }

};