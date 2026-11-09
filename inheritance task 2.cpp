/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// (i) Base class Customer
class Customer {
protected:
    string name;

public:
    Customer(string n) {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// (ii) Derived class Loan
class Loan : public Customer {
private:
    double loanAmount;
    double interestRate;

public:
    Loan(string n, double amount, double rate)
        : Customer(n) {
        loanAmount = amount;
        interestRate = rate;
    }

    double getLoanAmount() {
        return loanAmount;
    }

    double getInterestRate() {
        return interestRate;
    }
};

// (iii) Derived class HomeLoan
class HomeLoan : public Loan {
private:
    double propertyValue;

public:
    HomeLoan(string n, double amount, double rate, double value)
        : Loan(n, amount, rate) {
        propertyValue = value;
    }

    double getPropertyValue() {
        return propertyValue;
    }
};

// Main function
int main() {

    HomeLoan customer("Robin", 500000, 10.5, 800000);

    cout << "BANK LOAN MANAGEMENT SYSTEM" << endl;
    cout << "----------------------------" << endl;

    cout << "Customer Name: "
         << customer.getName() << endl;

    cout << "Loan Amount: KSh "
         << customer.getLoanAmount() << endl;

    cout << "Interest Rate: "
         << customer.getInterestRate() << "%" << endl;

    cout << "Property Value: KSh "
         << customer.getPropertyValue() << endl;

    return 0;
}
