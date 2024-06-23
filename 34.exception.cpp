//expression-(a*b+2)/z
#include<iostream>
using namespace std;
int main()
{
int a,b,z;
float ans;
cout<<"Expression is : (A*B+2)/Z ";
cout<<"\nenter A: ";
cin>>a;
cout<<"\n";
cout<<"enter B:";
cin>>b;
cout<<"Enter Z: ";
cin>>z;
cout<<"\n";
//exception handling begins here
try //try block
{
if(z!=0) //checking if divisor is zero
{
ans=((a*b)+2)/z;
cout<<"Answer:"<<ans;
}
else
{
throw(z); //throwing the exception found
}
}
//catch block
catch(int exc)
{
cout<<"Exception found!! \ndivision by zero ("<<exc<<") is not possible";
}
}
