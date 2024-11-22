#include "Array.tpp"

#define MAX_VAL 7//50
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

/////////////////////////////////////////////////////////////////////
    std::cout << "\033[34m" << "Empty one" << "\033[0m" << std::endl;
    Array<int> number;

///////////////////////////////////////////////////////////////////////
    int * a = new int(); 
    std::cout<<*a<<std::endl;

    delete a;
/////////////////////////////////////////////////////////////////////
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "\033[34m" << "Numbers" << "\033[0m" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout<<numbers[i]<<std::endl;
    }
    
    std::cout << "\033[34m" << "Mirror" << "\033[0m" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout<<mirror[i]<<std::endl;
    }

    std::cout << "\033[34m" << "Checking size()" << "\033[0m" << std::endl;
   unsigned int kuku =  numbers.size();
   std::cout<<"Kuku here "<<kuku<<std::endl;
    std::cout<<"Kuku here "<<number.size()<<std::endl;
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);

    // }
    ///////////////////////////////////////////////////////////////////
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
///////////////////////////////////////////////////////////////////////////
    std::cout<< "\033[31m" << "NOT OK=>-2 not unsigned int" << "\033[0m" <<std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';// OUT OF RANGE BECAUSE UNSIGNED INT
    }
   std::cout<<std::endl;


////////////////////////////////////////////////////////////////////////////
    std::cout << "\033[32m" << "OK=>Here should be ok" << "\033[0m" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';// OUT OF RANGE OUT OF RANGE BECAUSE UNSIGNED INT
    }
    std::cout<<std::endl;


//////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "\033[31m" << "NOT OK=>9 out of range, should be not ok (maxVaue = 7)" << "\033[0m" <<std::endl;
    try
    {
        numbers[9] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';// OUT OF RANGE BECAUSE U9 MORE THEN 7
    }
    std::cout<<std::endl;

////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "\033[32m" << "OK=> Here should be ok, 6 is less then 7" << "\033[0m" << std::endl;
    try
    {
        numbers[6] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';// OUT OF RANGE BECAUSE U9 MORE THEN 7
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}