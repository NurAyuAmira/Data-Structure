#include<iostream>
using namespace std;

int main(){
	int num1,num2, num3,num4,max;
	cout<<"Enter four integers: ";
	cin>>num1>>num2>>num3>>num4; //User masukkan no 3 ,7, 10, 5
	
	
	max=num1;
	
	//buat mcmni utk compare
	if(num2>max)
	{
		max=num2;
		
	}
	if(num3>max) // klaau guna else if dia ignore dia tk read
	{
	 	max= num3;
	}
	if(num4>max)
	{
		max= num4;
	}
	
	cout<<"Maximum number:"<< max;

	
	return 0;
}
