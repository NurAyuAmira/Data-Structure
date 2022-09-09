#include<iostream>

using namespace std;

int main ( )
{
	int n;
	cout<<"How many children do u have? ";
	cin>>n;
	string* child = new string[n];
	cout<<"Please give me your name" <<n<< " children: \n";
		for (int i=0; i<n; i++)
		{
		cout<<"\t"<<i+1<<":";
		cin>>child[i];
		}
		
		cout<<"They are "<<child[0];
		for (int i=1; i<n; i++)
		cout<<", "<<child[i];
		cout<<"\n";
}
