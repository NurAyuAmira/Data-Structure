#include<iostream>
using namespace std;


int main(){
	int num,odd,even;
	
	do
	{
		cout<<"Type a number(0):";
		cin>>num;
		fflush(stdin);
		
		//modulus is baki daripada hasil bahagi
		
		if(num==0) //kalau user enter 0 akan keluar mcm dlm statement ni
		{
			cout<<"Thank You."<<endl;
			fflush(stdin);
		}
		else if(num%2==0) //kalau user enter nombor genap akan keluar macm dlm statement ni
		{
			cout<<num<<" is even"<<endl;
		}
		else if(num%2!=0) //kalau user enter nom ganjil akn keluar mcm dlm statement ni
		{
			cout<<num<<" is odd"<<endl;
		}
	  
	}while(num!=0);
	
	return 0;
}
