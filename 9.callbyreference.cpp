// Write a C++ program to swap two numbers using call by reference. 
#include <iostream>
using namespace std;

void swap(int*, int*);

int main() {
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Before swap\n A = " << a << " and B = " << b;
    swap(&a, &b);
    cout << "\nFinal value after call by reference\nA = " << a << " and B = " << b;
    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "\nAfter swap\n A = " << *x << " and B = " << *y;
}
