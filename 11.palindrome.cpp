#include <iostream>
using namespace std;

int main() {
    // Program to find reverse
    int n, rev = 0, rem = 0;
    cout << "Enter the n: ";
    cin >> n;
    int temp=n;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (n==rev)
    cout <<n<< "is Palindrome !! ";
    else
    	cout<<n<<"is Not Palindrome!!";

    return 0;
}
