#include <iostream>
using namespace std;

int main() {
    int age, bankBalance, customerDuration;
    string crbStats;
    
    cout << "....LOAN QUALIFICATION CHECK...." << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankBalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStats;
    cout << "Enter the number of months you have been a customer: ";
    cin >> customerDuration;
    
    if (age > 22 && bankBalance > 50000 && crbStats == "good" && customerDuration > 6) {
        cout << "Qualified for a loan!" << endl;
    } else {
        cout << "Not Qualified!" << endl;
    }
    
    return 0;
}
