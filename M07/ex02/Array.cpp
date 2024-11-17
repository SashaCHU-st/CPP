#include "Array.hpp"

template <typename T>
Array<T>::Array(): array(NULL), n(0)
{}

template <typename T>
Array<T>::Array(unsigned int s): array(new T(s)), n(s)
{}


template <typename T> Array<T>::Array(const Array &copy)
{
    this* = copy;
};
template <typename T>
Array<T>&  Array<T>::operator=(const Array& copy)
{
    if(this == &copy)   
        return(*this);
    this->array = copy.array;
    this->n = copy.array;
    return(*this);
    
};

template <typename T> Array<T>::~Array()
{
    delete[] this->array;
};