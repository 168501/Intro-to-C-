#include <iostream>

void intToCharExplainer(int num) {
    if (num < 0 || num > 127) {
        std::cout << "The integer " << num << " is out of valid ASCII range (0-127)." << std::endl;
        return;
    }
    
    char charRepresentation = static_cast<char>(num);
    std::cout << "Integer: " << num << "\nCharacter: '" << charRepresentation << "'\n";
    std::cout << "Explanation: The integer " << num << " corresponds to the character '" 
              << charRepresentation << "' based on the ASCII table." << std::endl;
}

int main() {
    int num;
    std::cout << "Enter an integer to convert to a character: ";
    std::cin >> num;
    intToCharExplainer(num);
    return 0;
}
