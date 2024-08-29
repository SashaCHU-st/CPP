// #include "own.hpp"
// #include <fstream>
// #include <iostream>
// #include <string>

// int main(int argc, char *argv[]) {
//     if (argc != 4) {
//         std::cout << "Usage: ./sed <filename> <what to find> <on what to replace>";
//         return 0;
//     }

//     std::string filename = argv[1];
//     std::string s1 = argv[2];
//     std::string s2 = argv[3];
//     std::string kuku;

//     std::ifstream input(filename);
//     std::string outfile = filename + ".replace";
//     std::ofstream out(outfile);

//     if (!input.is_open()) {
//         std::cout << "Cannot read file";
//         return 0;
//     }

//     if (!out.is_open()) {
//         std::cout << "Error in creating file!!!";
//         return 0;
//     }

//     while (getline(input, kuku)) {
//         std::string result;
//         size_t offset = 0;
//         size_t pos;

//         while ((pos = kuku.find(s1, offset)) != std::string::npos) {
//             // Append part before match
//             for (size_t i = offset; i < pos; ++i) {
//                 result += kuku[i];
//             }
//             // Append the replacement string
//             result += s2;
//             // Move the offset past the matched string
//             offset = pos + s1.length();
//         }

//         // Append any remaining part of the string after the last match
//         for (size_t i = offset; i < kuku.length(); ++i) {
//             result += kuku[i];
//         }

//         out << result << "\n";
//     }

//     input.close();
//     out.close();
//     return 0;
// }
