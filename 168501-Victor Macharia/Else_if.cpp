#include <iostream>
using namespace std;

int main() {
    int yob, age;
    cout << "....ADMISSION PROGRAM...." << endl;
    cout << "Please enter the child's year of birth: ";
    cin >> yob;

    age = 2025 - yob;

    if (age >= 1 && age<=10) {
        cout << "Admit to Grade School" << endl;
    } else if (age >= 5 && age <= 6) {
        cout << "Admit to Kindergarten" << endl;
    } else if (age >= 3 && age <= 4) {
        cout << "Admit to Pre-School" << endl;
    } else if (age >= 1 && age <= 2) {
        cout << "Admit to Play Group" << endl;
    } else {
        cout << "Reject" << endl;
    }
    
    return 0;
}
