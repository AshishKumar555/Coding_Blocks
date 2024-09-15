#include <iostream>
using namespace std;
#include <string>

void swapStrings(std::string& str1, std::string& str2) {
  string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    std::cout << "Before swapping:" << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    swapStrings(str1, str2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    return 0;
}
