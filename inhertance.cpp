/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
using namespace std;

// (i) Base class Person
class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// (ii) Derived class LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books)
        : Person(n) {
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// (iii) Derived class PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

// Main function
int main() {
    PremiumMember member("Robin", 101, 3, 1500.00);

    cout << "LIBRARY MANAGEMENT SYSTEM" << endl;
    cout << "-------------------------" << endl;

    cout << "Member Name: "
         << member.getName() << endl;

    cout << "Member ID: "
         << member.getMemberID() << endl;

    cout << "Books Borrowed: "
         << member.getBooksBorrowed() << endl;

    cout << "Membership Fee: KSh "
         << member.getMembershipFee() << endl;

    return 0;
}
