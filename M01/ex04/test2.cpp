#include <fstream>
#include <iostream>

int main() {
  std::ofstream outputFile("output.txt"); // create a new output file or overwrite an existing one

  if (outputFile.is_open()) { // check if the file was opened successfully
    outputFile << "Hello, world!\n";
	outputFile << "Hello, world!\n"; // write data to the file
    outputFile.close(); // close the file when done
    std::cout << "Data was written to output.txt\n";
  }
  else {
    std::cerr << "Error opening file\n";
  }

  return 0;
}