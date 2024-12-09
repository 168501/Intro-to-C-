#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double price;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the type of movie (regular or 3D): ";
    cin >> movieType;

    if (movieType == "regular") {
        if (age < 12) {
            price = 5.0;
        } else if (age >= 60) {
            price = 7.0;
        } else {
            price = 10.0;
        }
    } else if (movieType == "3D") {
        if (age < 12) {
            price = 8.0;
        } else if (age >= 60) {
            price = 10.0;
        } else {
            price = 15.0;
        }
    } else {
        cout << "Invalid movie type!" << endl;
        return 1;
    }

    cout << "The ticket price is: $" << price << endl;

    return 0;
}
