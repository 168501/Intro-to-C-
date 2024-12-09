#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (num1 > num2) {
        case 1: cout << "Maximum number: " << num1 << endl; break;
        case 0: cout << "Maximum number: " << num2 << endl; break;
    }

    return 0;
}
