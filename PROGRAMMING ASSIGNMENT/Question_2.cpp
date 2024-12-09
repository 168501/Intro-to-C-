#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter student's full name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Enter the course: ";
    cin >> course;
    cout << "Enter the score: ";
    cin >> score;

    cout << "Student Name: " << fullName << endl;
    cout << "Course: " << course << endl;

    if (score >= 70) {
        cout << "Grade: A" << endl;
    } else if (score >= 60) {
        cout << "Grade: B" << endl;
    } else if (score >= 50) {
        cout << "Grade: C" << endl;
    } else if (score >= 40) {
        cout << "Grade: D" << endl;
    } else if (score >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score." << endl;
    }

    return 0;
}
