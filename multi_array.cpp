//2dimensional array

#include<iostream>
using namespace std;

	const int ROWS=2;
	const int COLS=3;
	typedef int Array[ROWS][COLS]; //define the type Array
	void swapCols(Array,int,int);
	void print(const Array);
		int main ( )
		{
			Array a= { {11,33,55}, {22,44,66}};
			print(a);
			swapCols(a,1,2);
			print(a);
		}
		void swapCols (Array a, int c1, int c2)
		{
			for (int i=0; i<ROWS; i++)
			{
				int temp = a[i][c1];
				a[i][c1] = a[i][c2];
				a[i][c2] = temp;
			}
		}
		void print(const Array a)
		{
			for (int i=0; i<ROWS; i++)
			{
				for (int j=0; j<COLS; j++)
				cout<<a[i][j]<<" ";
				cout<<"\n";
			}
			cout<<"\n";
		}
