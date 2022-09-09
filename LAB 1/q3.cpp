#include<iostream>
using namespace std;

int main(){

	int a,b,ans;
	char ops;
	cout<<"Enter an operator (+,-,*,/):";
	cin>>ops;
	
	cout<<"Enter two operands :";
	cin>>a>>b;
	
	
	switch(ops)
	{
		case '+':
		ans =  a+b;
		break;
		
		case '-':
		ans =  a-b;
		break;
		
		case '*':
		ans =  a*b;
		break;
		
		case'/':
		ans= a/b;
		break;
	}
	
	cout<<a<< " "<<ops<<b<< " "<< " = "<<ans;
}
