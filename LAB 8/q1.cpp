#include<iostream>
using namespace std;
#define SIZE 5


int main(){
	int key[SIZE], hash[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Enter key : ";
		cin>>key[i];
		
		
		if(key[i]<1000 || key[i]>10000){
		cout<<"Input out of range."<<endl;
		i--;
		continue;
		
		}
			hash[i]= key[i]/100;
	}
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Key: " <<key[i]<<"\tHash : "<<hash[i]<<endl;
	}
	
	
	
	
}
