#pragma once
#include <iostream>
#include <stack>
#include <sstream>

class RPN 
{
    public:
        RPN();
        ~RPN();

    int polishCalculation(std::string argument);
};