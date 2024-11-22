#define pragma once

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void(*f)( T &array))
{
    size_t i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
};
template <typename T>
void iter(T* array, size_t length, void(*f)( const T &array))
{
    size_t i = 0;
    while (i < length)
    {
        f(array[i]);
        i++;
    }
};

template <typename T>
void printfun(T &arg)
{
    std::cout<<arg<<std::endl;
};