#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7: cout << "Grade: A" << endl; break;
        case 6: cout << "Grade: B" << endl; break;
        case 5: cout << "Grade: C" << endl; break;
        case 4: cout << "Grade: D" << endl; break;
        default: cout << (score < 40 ? "Grade: F" : "Invalid score") << endl;
    }

    return 0;
}
