//q3

#include<iostream>
using namespace std;

class BMI{
	private:
		float height,weight,bmi;
		
	public:
		BMI(){ //default constructor
		
			height = 1.0;
			weight = 1.0;
		}
		
		void set(float h,float w){
			height = h;
			weight = w;
		}
		
		void calculate(){
			bmi = weight/(height*height);
		}
		
		void display(){
				cout<<"Your BMI is : "<<bmi<<endl;
					cout<<"You are ";
					if(bmi<18.5){
						cout<<"underweight";
					}
					else if(bmi>=18.5 && bmi <25){
						cout<<"normal";
					}
					else if(bmi>=25 && bmi <29.9){
						cout<<"overweight";
					}
					else{
						cout<<"obese";
					}
		}
};



int main(){
	BMI b;
	float w, h;
	
	cout<<"This program will calculate your body mass index."<<endl;
	cout<<"Enter your height in meter (m) unit : ";
	cin>>h;
	
	cout<<"Enter your weight in kilogram (kg) unit : ";
	cin>>w;
	
	b.set(h,w);
	b.calculate();
	b.display();
	
	return 0;
	
}
