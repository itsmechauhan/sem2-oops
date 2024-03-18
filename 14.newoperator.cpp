#include<iostream>
using namespace std;
int main() {
    int i,n;
    int *ptr;
    cout << "enter no. of elements: " << endl;
    cin >> n;
    ptr = new int[n];
    cout<<"Enter "<<n<<" elements:" << endl;
    for(i=0; i<n; i++) 
    {
        cin >> ptr[i];
    }
    for(i=0; i<n; i++)
    {
        cout << ptr[i];
    }
    delete[] ptr;
}
