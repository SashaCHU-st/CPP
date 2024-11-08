#include "Serializer.hpp"
int main ()
{
    Data kuku;
    kuku.int_num = 36654;
    kuku.double_num = 5.6;

    uintptr_t koko = Serializer::serialize(&kuku);
    Data* kiki = Serializer::deserialize(koko);

    std::cout<< kiki->double_num<< std::endl;
    std::cout<< kiki->int_num  <<std::endl;

}