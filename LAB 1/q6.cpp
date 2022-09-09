#include<iostream>
#include<iomanip>

using namespace std;

//function name Sum(0)
int Sum(int); //prototype

int Sum(int no[5])
{
	int s;
	for(int i=0; i<5; i++){
		s = s + no[i];
	}
	return s;
}

int main(){
	int num[5];
	int s;
	cout<<"Enter five numbers and the program will calculate sum of the numbers."<<endl;
	
	for(int i=0;i<5; i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>> num[i];
		
	}
	s = Sum (num);
	cout<<"You have entered : "<<num[0]<<" , "<<num[1]<<" , "<<num[2]<<" , "<<num[3]<<" , "<<num[4];
	cout<<endl<<"Sum of the numbers entered is: "<<s;
	return 0;
}
