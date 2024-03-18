// Write a C++ program to read the data of N employee and compute the net salary of each 
// employee (DA=52% of basic and IT=30% of gross salary).
#include<iostream>
using namespace std;
struct employee{
    char name[20];
};
int net_salary(int bs)
{
    int da,it;
    da=bs*0.52;
    it=bs*0.30;
    return(bs+it+da);
}
int main() {
    struct employee x[100];
    int n,bs,total;
    cout<<"enter number of employees : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter name of employee : ";
        cin>>x[i].name;
        cout<<"enter basic salary of employee : ";
        cin>>bs;
        total=net_salary(bs);
        cout<<"gross salary of employee is "<<total;
    }
}
