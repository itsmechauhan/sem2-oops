// Write a C++ Program to Store Information of a Student in a Structure
#include<iostream>
#include<cstring>

using namespace std;
struct  student{
	int rno;
	char name[30];
	int marks;
};
int main(){
	int n;
	char tempname[30];//temp variable to store name
	cout<<"Enter the No of students to store information: ";
	cin>>n;
	struct student stud[n];
	// storing information
	for(int i=0;i<n;i++){
		cout<<"Enter Rollno: ";
		cin>>stud[i].rno;
		cout<<"Enter Name: ";
		cin>>tempname;
		//copying the input name to stud[i].name
		strcpy(stud[i].name,tempname);
		cout<<"Enter the Obtained Marks: ";
		cin>>stud[i].marks;
	}
	// printing information
	for(int i=0;i<n;i++){
		cout<<"\nRollno: "<<stud[i].rno;
		cout<<"\nName: ";
		puts(stud[i].name);
		cout<<"\nObtained Marks: "<<stud[i].marks;
	}

}
