/* muriuki donatus CT101/G/26640/25 */
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double score;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    cout << "\nStudent: " << name << endl;

    if (age >= 18) {
        if (score >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}