#define pragma once

#include <iostream>
class Serializer
{
    private:

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};