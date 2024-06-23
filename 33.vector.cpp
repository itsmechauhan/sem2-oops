#include<iostream>
#include<vector>
using namespace std;
int main(){
	std::vector<int> numbers;
	int num;
	cout<<"press any character to stop!! \nEnter list of integers: ";
	while(cin>>num){
		numbers.push_back(num);
	}
	cout<<"\n Entered integers are: ";
	for( int x:numbers){
		cout<<x<<" ";
	}

}
