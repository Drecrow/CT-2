#include <iostream>
#include <string>

int main() {
    // Loop to take inputs 3 times
    for (int i = 1; i <= 3; ++i) {
        std::string str1, str2, result;
        // Ask for user input
        std::cout << "Enter 1 string (" << i << "): ";
        std::getline(std::cin, str1);

        std::cout << "Enter 2 string (" << i << "): ";
        std::getline(std::cin, str2);

        result = str1 + str2;
        // Display concatenated string
        std::cout << "Concatenated string: " << result << std::endl << std::endl;
    }
    return 0;
}
