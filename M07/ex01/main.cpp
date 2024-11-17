#include "iter.hpp"


int main ()
{
    std::string string_array[] = {"kuku", "kiki", "koko"};
    iter<std::string>(string_array, 2, printfun);

    int int_array[] = {1, 2, 3, 4, 5};
    iter<int>(int_array, 3, printfun);
    
}