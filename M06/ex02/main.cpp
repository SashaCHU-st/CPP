#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"


Base * generate(void)
{
    Base *base;
    srand(time(0));
	int Nrandom = rand() %3;
    if(Nrandom == 0)
    {
        base = new A();
        return base;
    }
    else if(Nrandom == 1)
    {
        base = new B();
        return base;
    }
    else
    {
        base = new C();
        return base;
    }
    return(NULL);
};

void identify(Base* p)
{
    if (A* a = dynamic_cast<A*>(p))
        std::cout << "Identify *: A" << std::endl;
    else if (B* b = dynamic_cast<B*>(p))
        std::cout << "Identify *: B" << std::endl;
    else if (C* c = dynamic_cast<C*>(p))
        std::cout << "Identify *: C" << std::endl;
    else
        std::cout << "Identify *: unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout<< " Identify &: A" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        //std::cerr << e.what() << '\n';
    }
     try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout<< " Identify &: B" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
       // std::cerr << e.what() << '\n';
    }
     try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout<< " Identify &: C" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
       // std::cerr << e.what() << '\n';
    }

};

int main()
{
    Base *base = generate();

    identify(base);// void identify(Base* p)
    identify(*base);//void identify(Base& p)

    delete base;
    return(0);
}