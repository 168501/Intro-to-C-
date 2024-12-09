#include <iostream>
#include <string>
using namespace std;

bool JohnLoanCalculator(int age, double balance, string crbStatus, int months) {
    return age > 22 && balance > 50000 && crbStatus == "good" && months > 6;
}

int main() {
    int age, months;
    double balance;
    string crbStatus;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> balance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "How long have you been a customer (in months): ";
    cin >> months;

    if (JohnLoanCalculator(age, balance, crbStatus, months)) {
        cout << "ELIGIBLE FOR LOAN!" << endl;
    } else {
        cout << "NOT ELIGIBLE FOR A LOAN!" << endl;
    }

    return 0;
}
