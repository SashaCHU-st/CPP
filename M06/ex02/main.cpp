#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"


Base * generate(void)
{
    Base *base;
    srand(time(0));
	int Nrandom = rand();
    if(Nrandom%3)
    {
        base = new A();
    }
    else if(Nrandom%7)
    {
        base = new B();
    }
    else
    {
        base = new C();
    }
    return(NULL);
};





void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    if(a)
    {
        std::cout<< "Identify *" <<std::endl;
        return;
    }
    B *b = dynamic_cast<B *>(p);
    if(b)
    {
        std::cout<< "Identify *" <<std::endl;
        return;
    }
    C *c = dynamic_cast<C *>(p);
    if(c)
    {
        std::cout<< "Identify *" <<std::endl;
        return;
    }
};

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout<< " Identify &" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout<< " Identify &" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout<< " Identify &" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
        std::cerr << e.what() << '\n';
    }

};

int main()
{
    Base *base = generate();

    identify(base);// void identify(Base* p)
    identify(*base);//void identify(Base& p)
    return(0);
}