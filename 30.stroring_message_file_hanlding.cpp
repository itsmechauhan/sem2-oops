#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string a,x;
	cout<<"Enter a sentence: ";
	getline(cin,a);
	cout<<"String is : "<<a;
	//storing the data into the Data.txt file
	ofstream outf("Data.txt");
	outf<<a;
	outf.close();
	//fetching the data from the file
	ifstream inf("Data.txt");
	//fetching whole sentence and storing in 'x' variable
	getline(inf,x);
	cout<<"\n"<<x;
	inf.close();
}
