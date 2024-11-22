#define pragma once

#include <iostream>

// ome fucntion works for all datas, typename can be replce with another keyword class
template <typename T>
T  max(T x, T y)
{
    if(x > y)
        return x;
    else if(y > x)
        return y;
    else
        return y;
    
}
template <typename T> 
T min(T x, T y)
{
    if(x < y)
        return x;
    else if(y < x)
        return y;
    else
        return y;
}

template <typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}