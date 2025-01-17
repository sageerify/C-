#include <iostream>
#include <string>
#include <map>

using namespace std;

// Class representing a bank account
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNum, double initialBalance = 0) 
        : accountHolderName(name), accountNumber(accNum), balance(initialBalance) {}

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Display account details
    void displayDetails() const {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Function prototypes
void createAccount(map<int, BankAccount>& accounts);
void performTransaction(map<int, BankAccount>& accounts);

int main() {
    map<int, BankAccount> accounts; // Store accounts using account number as the key
    int choice;

    do {
        cout << "\n--- Bank Account Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Perform Transaction (Deposit/Withdraw)\n";
        cout << "3. View Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount(accounts);
                break;
            case 2:
                performTransaction(accounts);
                break;
            case 3: {
                int accNum;
                cout << "Enter account number: ";
                cin >> accNum;
                if (accounts.find(accNum) != accounts.end()) {
                    accounts[accNum].displayDetails();
                } else {
                    cout << "Account not found!" << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again!" << endl;
        }
    } while (choice != 4);

    return 0;
}

// Create a new bank account
void createAccount(map<int, BankAccount>& accounts) {
    string name;
    int accNum;
    double initialDeposit;

    cout << "Enter account holder's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNum;

    if (accounts.find(accNum) != accounts.end()) {
        cout << "Account number already exists! Please try again." << endl;
        return;
    }

    cout << "Enter initial deposit (0 if none): ";
    cin >> initialDeposit;

    BankAccount newAccount(name, accNum, initialDeposit);
    accounts[accNum] = newAccount;

    cout << "Account created successfully!" << endl;
}

// Perform deposit or withdrawal on an existing account
void performTransaction(map<int, BankAccount>& accounts) {
    int accNum, choice;
    double amount;

    cout << "Enter account number: ";
    cin >> accNum;

    if (accounts.find(accNum) == accounts.end()) {
        cout << "Account not found!" << endl;
        return;
    }

    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    if (choice == 1) {
        accounts[accNum].deposit(amount);
    } else if (choice == 2) {
        accounts[accNum].withdraw(amount);
    } else {
        cout << "Invalid choice!" << endl;
    }
}
