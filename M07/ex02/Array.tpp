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

template <typename T>
T&  Array<T>::operator[](unsigned int i)
{
    if(i >= n)
        throw NotExist();
    else
       return array[i];
};

template <typename T>
Array<T>::~Array()
{
    delete[] this->array;
};



template <typename T>
unsigned int Array<T>::size()
{
    return(this->n);
};

const char* template <typename T>::NotExist::what() const noexcept
{
	return "Out of bouneries";
}