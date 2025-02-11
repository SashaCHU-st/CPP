#include "MutantStack.hpp"
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;// print 17 LIFO
    mstack.pop();// deleted 17 recent entered element
    std::cout << mstack.top() << std::endl;// print 5 the element that left
    std::cout << mstack.size() << std::endl;// print 1 because 1 has been deleted
    mstack.push(3);// 3 5
    mstack.push(5);// 5 3 5
    mstack.push(737); // 737 5 3 5
    //[...]
    mstack.push(0); // 0 737 5 3 5
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << "IT "<< *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);// coping stack

    while (!mstack.empty())
    {
        std::cout << "mstack: " << mstack.top() << std::endl;
        mstack.pop();
    }

    while (!s.empty())
    {
        std::cout << "s: " << s.top() << std::endl;
        s.pop();
    }


    return 0;
}