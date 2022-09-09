//Question 2

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>

using namespace std;

class Triangle{
	public:
	float a,b,c;
		
	Triangle(float a1,float b1,float c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}
	
	void print (){
		float area, perimeter;
		area = 0.5*a*b;
		perimeter = a+b+c;
		cout<<"Area is "<<area<<endl;
		cout<<"Perimeter is "<<perimeter<<endl;
	}
	
};


int main(){
	
 	float num1, num2, num3;
 	
 	cout<<"Enter three sides of triangle : ";
 	cin>>num1>>num2>>num3;
 	
 	Triangle t(num1,num2,num3);
 	t.print();
 	return 0;
}


