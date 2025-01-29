#define pragma once

#include <iostream>
# include <algorithm>// find
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <exception>


template <typename T>
void easyfind(T &x, int y)
{
     auto it = std::find(x.begin(), x.end(), y);

     if(x.empty())
          throw std::out_of_range("Out of Range");
     if(it != x.end())
          std::cout<<"Found"<<std::endl;
     else
          throw std::out_of_range("Out of Range");
    
}