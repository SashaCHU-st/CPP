#define pragma once

#include <iostream>
template <typename T> 
class Array
{
    private:
        T*           array;
        unsigned int n;
    public:
        Array();
        Array(unsigned int s);
        Array(const Array<T> &copy);
		Array& operator=(const Array<T>& copy);
		~Array();
        
        const T& operator[](unsigned int i) const;
        T& operator[](unsigned int i);
        unsigned int size();


};
