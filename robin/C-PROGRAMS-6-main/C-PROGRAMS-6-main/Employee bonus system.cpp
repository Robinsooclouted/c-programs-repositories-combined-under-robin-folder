/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void getEmployeeDetails(string &name, double &basicSalary,
                        double &overtimeHours, double &ratePerHour) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
    cout << "Enter rate per hour: ";
    cin >> ratePerHour;
}

double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}


void displayPayslip(const string &name, double basicSalary,
                    double overtimeHours, double ratePerHour,
                    double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n==================================\n";
    cout << "            PAYSLIP\n";
    cout << "==================================\n";
    cout << left << setw(22) << "Employee Name:" << name << endl;
    cout << left << setw(22) << "Basic Salary:" << basicSalary << endl;
    cout << left << setw(22) << "Overtime Hours:" << overtimeHours << endl;
    cout << left << setw(22) << "Rate Per Hour:" << ratePerHour << endl;
    cout << left << setw(22) << "Overtime Pay:" << overtimePay << endl;
    cout << "----------------------------------\n";
    cout << left << setw(22) << "Net Salary:" << netSalary << endl;
    cout << "==================================\n";
}


int main() {
    string name;
    double basicSalary, overtimeHours, ratePerHour;

    getEmployeeDetails(name, basicSalary, overtimeHours, ratePerHour);

    double overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(name, basicSalary, overtimeHours,
                   ratePerHour, overtimePay, netSalary);

    return 0;
}