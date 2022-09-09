#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    int mark, avg; 
    int total = 0;
    while(i<5)
    {
        cout<<"Enter mark : ";
        cin>>mark;

        total = total + mark;

        i++;
    }
    avg = total / 5;
    cout<<"Mark average is : "<<avg;
    return 0;
}
