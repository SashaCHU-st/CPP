#define pragma once

#include <iostream>

template <typename T> class Array
{
    private:
        T*           array;
        unsigned int n;
    public:
        Array();
        Array(unsigned int s);
        Array(const Array &copy);
		Array& operator=(const Array& copy);
		~Array();
        
        Array& operator[](const Array& copy);

};
