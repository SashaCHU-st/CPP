#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"


Base * generate(void)
{
    Base *base;
    srand(time(0));
	int Nrandom = rand();
    while (1)
    {
        if(Nrandom%3)
        {
            base = new A();
            break;
        }
        else if(Nrandom%7)
        {
            base = new B();
            break;
        }
        else
        {
            base = new C();
            break;
        }
    }
    return(NULL);
};

void identify(Base* p)
{
    std::cout<< " Identify *"<< typeid(static_cast<Base *>(p)).name() <<std::endl;
};

void identify(Base& p)
{
    std::cout<< " Identify &"<< typeid(static_cast<Base &>(p)).name() <<std::endl;
};

int main()
{
    Base *base = generate();

    identify(base);// void identify(Base* p)
    identify(*base);//void identify(Base& p)
    return(0);
}