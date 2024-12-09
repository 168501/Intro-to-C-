#include <iostream>
#include <string>

int main() {
    std::string correct_password = "Goodbye";
    std::string user_input;
    int attempts = 0;
    
    while (attempts < 3) {
        std::cout << "Enter password: ";
        std::cin >> user_input;
        
        if (user_input != correct_password) {
            attempts++;
            std::cout << "Incorrect password. Attempts left: " << (3 - attempts) << std::endl;
        } else {
            std::cout << "Access granted!" << std::endl;
            return 0;
        }
    }
    
    std::cout << "Password blocked. Too many incorrect attempts." << std::endl;
    
    return 0;
}