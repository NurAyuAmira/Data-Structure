//q5
#include<iostream>
using namespace std;

struct employee{
	
	string name;
	float salary;
};

int main(){
	
	int num;
	
	cout<<"Enter number of employees : ";
	cin>>num;
	
	employee *emp;
	emp = new employee[num];
	
	for(int i=0;i<num;i++){
		cout<<"Employee "<<i+1<<endl;
		
		cout<<"Enter name : ";
		cin>>emp[i].name;
		
		cout<<"Enter salary : ";
		cin>>emp[i].salary;
	}

	
} 
