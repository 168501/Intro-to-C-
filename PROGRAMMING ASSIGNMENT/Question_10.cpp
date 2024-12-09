#include <iostream>
using namespace std;

int main() {
    double accountBalance, withdrawalAmount, dailyLimit;
    dailyLimit = 1000.0; // Set a daily withdrawal limit

    cout << "Enter your account balance: ";
    cin >> accountBalance;
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds!" << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds daily limit!" << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << accountBalance << endl;
    }

    return 0;
}
