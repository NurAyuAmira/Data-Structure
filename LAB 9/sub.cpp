#include<iostream>
using namespace std;
#define SIZE 5

struct Student
{
	char name[50];
	char grade;
	int id;
};

int Max(struct Student a[], int pos)
{
	int i, index = pos;
	Student S;
	S = a[pos];
	
	for(int i=pos+1; i<SIZE; i++)
	{
		if(a[i].grade<S.grade)
		{
			S = a[i];
			index = i;
		}
	}
	
	return index;
}

int main()
{
	struct Student dip[SIZE], temp;
	
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
	
	//selection sort
	for(int i=0; i<SIZE; i++)
	{
		j = Max(dip, i);
		
		if(dip[j].grade<dip[i].grade)
		{
			temp = dip[j];
			dip[j] = dip[i];
			dip[i] = temp;
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
