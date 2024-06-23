#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string sen;
	cout<<"Enter a string : ";
	getline(cin,sen);
	ofstream upf("up.txt");
	ofstream lwf("lw.txt");
	ofstream dgf("dg.txt");
	ofstream spf("sp.txt");
	int len=sen.length();
	for(int i=0;i<len;i++){
		if(sen[i]>='A'&&sen[i]<='Z'){
			upf<<sen[i];
		}
		else if(sen[i]>='a'&&sen[i]<='z'){
			lwf<<sen[i];
		}
		else if(sen[i]>='0'&&sen[i]<='9'){
			dgf<<sen[i];
		}
		else{
			spf<<sen[i];
		}
	}
	cout<<"\nElements stored successfully!!";
	upf.close();
	lwf.close();
	dgf.close();
	spf.close();

}
