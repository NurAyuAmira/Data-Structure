#include<iostream>
#include<iomanip>

using namespace std;

struct employee
{
	string first_name, last_name, emp_num;
	int age;
}record; //instance to access the members of type employee

int main(){
	struct employee record;
	
	cout<<"First name : ";
	cin>>record.first_name;
	cout<<"Last name : ";
	cin>>record.last_name;
	cout<<"Employee number : ";
	cin>>record.emp_num;
	cout<<"Age : ";
	cin>>record.age;
	
	//disply
	cout<<endl<<"Hello "<<record.first_name<<" "<<record.last_name<<endl;
	cout<<"Your employee number s"<<record.emp_num<<endl;
	cout<<"You are "<<record.age<<" years old";
	return 0;
}
