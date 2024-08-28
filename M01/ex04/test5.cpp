#include <iostream>
#include <fstream>
#include <string>
#include <cstring> // For strcpy

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Usage: ./sed <filename> <what to find> <on what to replace>" << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream input(filename);
    if (!input.is_open())
    {
        std::cout << "Cannot read file" << std::endl;
        return 0;
    }

    std::string outfile = filename + ".replace";
    std::ofstream out(outfile);
    if (!out.is_open())
    {
        std::cout << "Error in creating file!!!" << std::endl;
        return 0;
    }

    std::string kuku;
    while (getline(input, kuku))
    {
        std::string result;
        unsigned long i = 0;
        size_t found;

        while ((found = kuku.find(s1, i)) != std::string::npos)
        {
            // Copy part before the found substring
            for (unsigned long j = i; j < found; ++j)
            {
                result += kuku[j];
            }
            // Copy replacement substring
            for (size_t k = 0; k < s2.length(); ++k)
            {
                result += s2[k];
            }
            // Move past the found substring
            i = found + s1.length();
        }

        // Copy the rest of the line after the last found substring
        for (unsigned long j = i; j < kuku.length(); ++j)
        {
            result += kuku[j];
        }

        out << result << "\n";
    }

    input.close();
    out.close();
    std::cout << "All good" << std::endl;

    return 0;
}
