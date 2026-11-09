/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// (i) Base class: AccountHolder
class AccountHolder {
protected:
    string name;

public:
    // Constructor
    AccountHolder(string n) {
        name = n;
    }

    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to return name
    string getName() {
        return name;
    }
};

// (ii) Derived class: BankAccount
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string n, int accNo, double bal)
        : AccountHolder(n) {
        accountNumber = accNo;
        balance = bal;
    }

    // Function to return account number
    int getAccountNumber() {
        return accountNumber;
    }

    // Function to return balance
    double getBalance() {
        return balance;
    }
};

// (iii) Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal) {
        interestRate = rate;
    }

    // Function to return interest rate
    double getInterestRate() {
        return interestRate;
    }
};

// Main function
int main() {

    // Creating a savings account object
    SavingsAccount account("Robin Junior", 12345, 50000.00, 5.5);

    // Displaying account details
    cout << "===== BANK MANAGEMENT SYSTEM =====" << endl;
    cout << "Account Holder: " << account.getName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Account Balance: Ksh " << account.getBalance() << endl;
    cout << "Interest Rate: " << account.getInterestRate() << "%" << endl;

    return 0;
}
