#define pragma once

#include <iostream>
#include <cstdint>

struct Data
{
    int int_num;
    double double_num;
};
class Serializer {
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};