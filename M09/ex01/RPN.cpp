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

    while (ss >> token)// read separated whitespace word/token
    {
        if (isdigit(token[0])) // beacuse we want only from 1-9, not 12
        {
            polishNumbers.push(std::stoi(token));
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (polishNumbers.size() < 2)
            {
                std::cerr << "Usage ./RPN \"1 2 + 3 -\""<<std::endl;;
                return 1;
            }

            int number1 = polishNumbers.top();
            polishNumbers.pop();
            int number2 = polishNumbers.top();
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
                    std::cerr << "Error: Division by zero" <<std::endl;
                    return 1;
                }
                polishNumbers.push(number1 / number2);
            }
        }
        else
        {
            std::cerr << "Error "<< std::endl;
            return 1;
        }
    }

    if (polishNumbers.size() != 1)
    {
        std::cerr << "Error: Invalid RPN expression (too many numbers left)"<<std::endl;
        return 1;
    }

    std::cout << "RESULT: " << polishNumbers.top() << std::endl;
    return 0;
}