// Write a C++ program to read the data of N employee and compute the net salary of each 
// employee (DA=52% of basic and IT=30% of gross salary).
#include <iostream>
using namespace std;

struct Employee {
    int empId;
    float bs;
    float grossSalary;
    float netSalary;
};

int main() {
    int N;
    cout << "Enter the number of employees: ";
    cin >> N;

    Employee emp[N];

    // Input employee data
    for (int i = 0; i < N; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> emp[i].empId;
        cout << "Basic Salary: ";
        cin >> emp[i].bs;
        // Calculate gross salary
        emp[i].grossSalary = emp[i].bs + (0.52 * emp[i].bs);
    }

    // Calculate net salary
    for (int i = 0; i < N; ++i) {
        float it = 0.3 * emp[i].grossSalary;
        emp[i].netSalary = emp[i].grossSalary - it;
    }

    // Display employee data
    cout << "\nEmployee details with net salary:\n";
    for (int i = 0; i < N; ++i) {
        cout << "\nEmployee ID: " << emp[i].empId << endl;
        cout << "Basic Salary: " << emp[i].bs << endl;
        cout << "Gross Salary: " << emp[i].grossSalary << endl;
        cout << "Net Salary: " << emp[i].netSalary << endl;
    }

    return 0;
}
