#include<iostream>
using namespace std;

int main(){
	int num,even=0,odd=0;
	int *p;
	
	p = new int [num];
	
	cout<<"How many integers would you like to enter : ";
	cin>>num;
	
	cout<<"Enter "<<num<<" integers : ";
	for(int j=0;j<num;j++){
		
		cin>>p[j];
	}
	
	cout<<"Integers entered are : ";
	for(int j=0;j<num;j++){
		cout<< p[j]<<" ";
		if(p[j]%2 == 0)
        {
            even++;
        }
        else if(p[j]%2 != 0)
        {
            odd++;
        }
	}
	
	cout<<endl<<"There are "<<even<<" even integers and "<< odd<<" odd integers";

}
