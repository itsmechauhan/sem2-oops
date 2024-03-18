//Write a C++ program to Find Sum of Natural Numbers using Recursion
#include<iostream>
using namespace std;
int sum_natural(int);
int main(){
	int n;
	cout<<"Enter N: ";
	cin>>n;
	int ans=sum_natural(n);
	cout<<"The Sum of "<<n<<" natural numbers are : "<<ans<<endl;
}
int sum_natural(int n){
	int sum=0;
	if(n==0)
		return sum;
	else{
		sum=n+sum_natural(n-1);
	}
}
