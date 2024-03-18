 // Write a C++ program to use scope resolution operator. Display the various values of the same 
// variables declared at different scope levels. 
#include<iostream>
int a=20;
int main() {
    int a=10;
    std::cout<<"\nvalue of locally declared variable a is  :"<<a;
    std::cout<<"\nvalue of globally declared variable a is :"<<::a;
}
