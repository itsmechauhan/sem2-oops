#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter 5 integers: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	ofstream odd("ODD.dat");
	ofstream even("EVEN.dat");
	//storing 
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			even<<arr[i];
		}
		else{
			odd<<arr[i];
		}
	}
	odd.close();
	even.close();

}
