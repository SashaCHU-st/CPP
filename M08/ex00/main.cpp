#include "easyfind.hpp"

int main ()
{
    std::vector<int> vec = {1,2,3,4,5, 6};


    
    std::vector<int>::iterator v = vec.begin();
    while( v != vec.end()) {
      std::cout << "value of v = " << *v << std::endl;
      v++;
   }

    easyfind(vec, 3);

}