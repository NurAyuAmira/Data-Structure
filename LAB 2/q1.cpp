//QUESTiON 1

#include<iostream>

using namespace std;

class Box{
	public: 
		float length, breadth, height;
	
	Box(float,float,float);
	
	float volume(){
		return(length*breadth*height);
	}
	
};

Box::Box(float a, float b, float c){
	
	length = a;
	breadth = b;
	height = c;
}

int main(){
	Box b (5.0,6.0,7.0);
	Box b1(10.0,12.0,13.0);
	
	cout<<"Volume of Box 1 : "<<b.volume()<<endl;
	cout<<"Volume of Box 2 : "<<b1.volume()<<endl;
	
	return 0;
}
