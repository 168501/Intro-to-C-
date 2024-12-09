#include <iostream>

int main() {
    int start = 20;
    int end = 25;
    int sum = 0;
    
    while (start <= end) {
        sum += start;
        start++;
    }
    
    std::cout << "The sum of whole numbers from 20 to 25 is: " << sum << std::endl;
    
    return 0;
}
