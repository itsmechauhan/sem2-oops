 // Write a C++ program to use scope resolution operator. Display the various values of the same 
// variables declared at different scope levels. 
#include<iostream>
using namespace std;
int a=20;
int main() {
    int a=10;
    cout<<"\nvalue of locally declared variable a is  :"<<a;
    cout<<"\nvalue of globally declared variable a is :"<<::a;
}
