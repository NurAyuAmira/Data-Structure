#include<iostream>
using namespace std;
#define SIZE 5

struct Student
{
	char name[50];
	char grade;
	int id;
};

int main()
{
	struct Student dip[SIZE], current;
	
	int j;
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Student #"<<i+1<<endl;
		cout<<"--------------------"<<endl;
		
		cout<<"ID: ";
		cin>>dip[i].id;
		
		cout<<"Name: ";
		cin>>dip[i].name;
		
		cout<<"grade (A, B, C, D or F): ";
		cin>>dip[i].grade;
		
		cout<<endl;
	}
	
	//insertion sort
	for(int i=0; i<SIZE; i++)
	{
		current = dip[i];
		j = i;
		
		while((j>0) && (current.grade<dip[j-1].grade))
		{
			dip[j] = dip[j-1];
			j--;
			dip[j] = current;
		}
	}
	
	//elements after being sorted	
	cout<<"Ranking of Student"<<endl;
	cout<<"-------------------"<<endl;
	cout<<"Rank\tID\tName\tGrade\t"<<endl;
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<i+1<<"\t"<<dip[i].id<<"\t"<<dip[i].name<<"\t"<<dip[i].grade<<endl;
	}
	
	return 0;
}
