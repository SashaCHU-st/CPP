#include "RPN.hpp"

RPN::RPN()
{

}
RPN::~RPN()
{
    
}

int RPN::polishCalculation(std::string argument)
{
    std::stack<int> polishNumbers;
    std::stringstream ss(argument);
    std::string token;

    while (ss >> token) // read separated whitespace word/token
    {
        try 
        {
            int num = std::stoi(token);
            if (num < 10 && num >=0) // Only allow numbers less than 10
                polishNumbers.push(num);
            else
            {
                std::cerr << "Must be between less then 10 and more then 0(included)" << std::endl;
                return 1;
            }
        }
        catch (const std::exception& e) 
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")// If ni number the maybe it is =/-///*
            {
                if (polishNumbers.size() < 2)
                {
                    std::cerr << "Error" << std::endl;
                    return 1;
                }
                int number2 = polishNumbers.top();
                polishNumbers.pop();
                int number1 = polishNumbers.top();
                polishNumbers.pop();
                if (token == "+")
                    polishNumbers.push(number1 + number2);
                else if (token == "-")
                    polishNumbers.push(number1 - number2);
                else if (token == "*")
                    polishNumbers.push(number1 * number2);
                else if (token == "/")
                {
                    if (number2 == 0)
                    {
                        std::cerr << "Error" << std::endl;
                        return 1;
                    }
                    polishNumbers.push(number1 / number2);
                }
            }
            else
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
        }
    }
    if (polishNumbers.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::cout << "RESULT: " << polishNumbers.top() << std::endl;
    return 0;
}
