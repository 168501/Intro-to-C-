#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter the age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Reject. Invalid Age";
    } else if (age >= 7) {
        cout << "Admit to Grade School";
    } else if (age >= 5) {
        cout << "Admit to Kindergarten";
    } else if (age >= 3) {
        cout << "Admit to Pre-School";
    } else if (age >= 1) {
        cout << "Admit to Play Group";
    }

    return 0;
}
