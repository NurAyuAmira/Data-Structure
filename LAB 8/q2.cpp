#include<iostream>
using namespace std;



int main(){

	int id,one,two,three,hash;
	
	cout<<"Enter id: ";
	cin>>id; //123456789
	
	
	one = id/1000000; //one=123456789/1000000 =123
	two=id/1000%1000;; //two=123456789/1000%1000=456
	three= id%1000;   //three =123456789%1000 = 789

	hash = (one+two+three) 	% 100 ;
	
	
	cout<<"Hash value = "<<hash<<endl;
	
}
