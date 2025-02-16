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
    ////need to make for  LIST
    std::cout << "LIST " << std::endl;

    std::list<int> list_stack;
    list_stack.push_back(5);
    list_stack.push_back(17);
    std::cout << list_stack.back() << std::endl;// print 17 LIFO
    list_stack.pop_back();// deleted 17 recent entered element
    std::cout << list_stack.back() << std::endl;// print 5 the element that left
    std::cout << list_stack.size() << std::endl;// print 1 because 1 has been deleted
    list_stack.push_back(3);// 3 5
    list_stack.push_back(5);// 5 3 5
    list_stack.push_back(737); // 737 5 3 5
    //[...]
    list_stack.push_back(0); // 0 737 5 3 5
    std::list<int>::iterator itL = list_stack.begin();
    std::list<int>::iterator iteL = list_stack.end();
    ++itL;
    --itL;
    while (itL != iteL)
    {
    std::cout << "IT "<< *itL << std::endl;
    ++itL;
    }
    std::list<int> sL(list_stack);// coping stack



    return 0;
}