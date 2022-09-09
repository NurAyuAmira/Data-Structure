#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	
	int i,n;
	float sum, avg;
	float *p;
	p = new float [i];
	
	cout<<"How many marks would you like to enter: ";
	cin>>i; 
	
	for(n=0; n<i; n++)
	{
		cout<<"Enter marks "<<n+1<<" : ";
		cin>>p[n]; //dia punya value akan store dalam array
		
			sum= sum+p[n];
	}
	
	
	
	cout<<"You have entered : ";
	for(n=0; n<i; n++)
	{
		cout<<p[n]<<", ";
	}
		avg = sum / i;
		
		cout<<endl;
		cout<<"Sum of mark is : "<<sum<<endl;
		cout<<"Average marks is : "<<fixed<<setprecision(0)<<floor(avg);
	return 0;
}
