#include <iostream>
using namespace std;

int main() {
    int timer;
    cout << "Enter the timer value (1 = red, 2 = yellow, 3 = green): ";
    cin >> timer;

    switch (timer) {
        case 1:
            cout << "RED." << endl;
            break;
        case 2:
            cout << "YELLOW." << endl;
            break;
        case 3:
            cout << "GREEN." << endl;
            break;
        default:
            cout << "Invalid timer value!" << endl;
    }

    return 0;
}
