#define pragma once

#include <iostream>
#include <exception>
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
        
        T& operator[](unsigned int i);
        unsigned int size();

        class NotExist: public std::exception
		{
			public:
				virtual const char* what() const noexcept override;
		};

};
