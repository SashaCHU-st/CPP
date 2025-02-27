#include "PmergeMe.hpp"

int checkInput(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cerr << "Not enough to sort" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];
        for (char c : arg)
        {
            if (!isdigit(c))
            {
                std::cerr << "Wrong input, not a digit: " << arg << std::endl;
                return 1;
            }
        }
        try
        {
            int value = std::stoi(arg);
            if (value < 0)
            {
                std::cerr << "Wrong input, negative number: " << value << std::endl;
                return 1;
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << "Invalid number format: " << arg << std::endl;
            return 1;
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    if (checkInput(argc, argv) == 1)
    {
        return 1;
    }

    std::cout << "Before:";
    for (int i = 1; i < argc; i++)
    {
        std::cout << " " << argv[i];
    }
    std::cout << std::endl;

    PmergeMe pmerge;
    pmerge.forVector(argc, argv);

    return 0;
}
