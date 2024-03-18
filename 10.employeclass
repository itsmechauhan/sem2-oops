 // Given that EMPLOYEE class contains following members: data members: Employee number, 
// Employee name, Basic, DA, IT, Net Salary, and print data members. 
#include<iostream>
#include<cstring>
using namespace std;
class employee{
private:
	int bs,DA,TA,IT,netsalary;
	char name[50],x[50];
public:
	input(){
		cout<<"Enter the name of the Employee: ";
		gets(x);
		strcpy(name,x);
		cout<<"Enter Basic Salary: ";
		cin>>bs;
		cout<<"Enter DA: ";
		cin>>DA;
		cout<<"Enter TA: ";
		cin>>TA;
		cout<<"Enter IT: ";
		cin>>IT;
		netsalary=bs+DA+TA+IT;
	}
	display(){
		cout<<"\nThe Employee name is : "<<name;
		cout<<"\nNet Salary= "<<netsalary;
	}
};
int main(){

	employee emp;
	emp.input();
	emp.display();
}
