//Write a C++ Program to Multiply Two Matrix Using Multi-Dimensional Arrays
#include <iostream>
using namespace std;

int main() {
    int m, n, z;
    
    cout << "Enter no of rows in array1: ";
    cin >> m;
    cout << "Enter no of cols in array1: ";
    cin >> n;
    cout << "No of rows in array2: " << n << endl;
    cout << "Enter no of cols in array2: ";
    cin >> z;
    
    int first[m][n];
    int second[n][z];
    int third[m][z];
    
    // Taking input for the first array
    cout << "Enter the elements in array1:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> first[i][j];
        }
    }
    
    // Taking input for the second array
    cout << "Enter the elements in array2:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < z; j++) {
            cin >> second[i][j];
        }
    }
    
    // Storing values in the third array
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < z; j++) {
            for (int k = 0; k < n; k++) {
                sum += first[i][k] * second[k][j];
            }
            third[i][j] = sum;
            sum = 0;
        }
    }
    
    // Printing the multiplication of first and second array
    cout << "The multiplication of first and second array is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < z; j++) {
            cout << third[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
