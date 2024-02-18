#include <iostream>
using namespace std;

float balance = 0;

void showBalance() {
    cout << "Your balance is: $" << balance << endl;
}

void depositMoney(float amount) {
    balance += amount;
    cout << "$" << amount << " deposited successfully." << endl;
}

void withdrawMoney(float amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "$" << amount << " withdrawn successfully." << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}

int main() {
    int choice;
    float amount;

    while (true) {
        cout << "\n1. Show balance\n2. Deposit money\n3. Withdraw money\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                depositMoney(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                withdrawMoney(amount);
                break;
            case 4:
                cout << "Exiting...";
                return 0;
            default:
                cout << "Invalid choice. Please try again.";
        }
    }

    return 0;
}