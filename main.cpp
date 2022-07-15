#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string address, text;
    std::cout << "Enter the file address using double backslashes: ";
    std::cin >> address;
    std::ifstream file;
    file.open(address);

    while(!file.eof()) {
        file >> text;
        std::cout << text << " ";
    }
}
