#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    cout << "Please Enter the age: ";
    cin >> age;

    string output = (age >= 18 && age <= 120) ? "Qualified To Vote!" : "Not Qualified!";

    cout << output; 

    return 0;
}
