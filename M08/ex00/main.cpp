#include "easyfind.hpp"

int main ()
{
  std::vector<int> vec = {1,2,3,4,5, 6};
  std::vector<int> vec0 = {};

  std::array<int, 6> arr = {1,2,3,4,5, 6};
  std::array<int,0> arr0 = {};

  std::deque<int> deq = {1,2,3,4,5, 6};
  std::deque<int> deq0 = {};

  std::forward_list<int> forw = {1,2,3,4,5, 6};
  std::forward_list<int> forw0 = {};

  std::list<int> list = {1,2,3,4,5, 6};
  std::list<int> list0 = {};


	std::cout << "\033[32m" << "Vector" <<"\033[0m" << std::endl;

	std::cout << "\033[31m" << "All good=>found" <<"\033[0m" << std::endl;
    try{
      easyfind(vec, 3);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

  std::cout << "\033[31m" << "Not found in container" <<"\033[0m" << std::endl;
    try{
      easyfind(vec, 0);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

	std::cout << "\033[31m" << "Empty" <<"\033[0m" << std::endl;
    try{
      easyfind(vec0, 7);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }


	std::cout << "\033[32m" << "\nArray" <<"\033[0m" << std::endl;
    	std::cout << "\033[31m" << "All good=>found" <<"\033[0m" << std::endl;
    try{
      easyfind(arr, 3);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

  std::cout << "\033[31m" << "Not found in container" <<"\033[0m" << std::endl;
    try{
      easyfind(arr, 0);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

	std::cout << "\033[31m" << "Empty" <<"\033[0m" << std::endl;
    try{
      easyfind(arr0, 7);
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    return(0);
}