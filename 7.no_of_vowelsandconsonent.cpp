//Write a C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in 
//a String 
#include<iostream>
using namespace std;
#include<cstring>
int main(){
	int i=0,consonant=0,numcount=0,vowels=0,whitespccount=0;
 char str[100];
 cout<<"Enter the string : ";
 gets(str);
while(str[i]!='\0'){
	if(str[i]>='0' && str[i]<='9')
		numcount++;
	
	else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		vowels++;
	else if(str[i]==' ')
		whitespccount++;
	else
		consonant++;
i++;
}
cout<<"\nno of vowels: "<<vowels;
cout<<"\nNo of consonant: "<<consonant;
cout<<"\nNo of white Spaces: "<<whitespccount;
cout<<"\nNo of Digits: "<<numcount;

}
