#include "Array.hpp"

template <typename T>
Array<T>::Array(): array(nullptr), n(0)
{
    std::cout<<"Created empty one"<<std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n): array(new T[n]()), n(n)
{}


template <typename T>
Array<T>::Array(const Array<T>& copy)
{
    this->n = copy.n;
    this->array = new T[n];
    for (unsigned int i = 0; i < n; i++)
        this->array[i] = copy.array[i];
};
template <typename T>
Array<T>&  Array<T>::operator=(const Array<T>& copy)
{
    if(this == &copy)   
        return(*this);
    this->n = copy.n;
    if(this->array != nullptr)
        delete[] this->array;
    this->array = new T[n];
    for(unsigned int i = 0; i< n; i++)
        this->array[i] = copy.array[i];
    return(*this);
    
};

template <typename T>
T&  Array<T>::operator[](unsigned int i)
{
    if(i >= n || this->array == nullptr)
        throw std::out_of_range("out of range");
    return array[i];
};

template <typename T>
const T&  Array<T>::operator[](unsigned int i) const
{
    if(i >= n || this->array == nullptr)
        throw std::out_of_range("out of range");
    return array[i];
};


template <typename T>
Array<T>::~Array()
{
   if (array != nullptr)
        delete[] array;
};

template <typename T>
unsigned int Array<T>::size()
{
    return(this->n);
};