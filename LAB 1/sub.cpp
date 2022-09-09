#include<iostream>
#include<math.h>

using namespace std;

struct Mark{
	char name[30];
	int stud_id;
	float chem_marks, math_marks, phy_marks;
	
};

int main(){
	
	int x;
	float chem_marks,math_marks,phy_marks;
	
	Mark M[3];
	
	 for(x=0;x<3;x++){
        cout<<"Enter name       :";
        cin.get(M[x].name,50);
        cout<<"Enter ID         :";
        cin>>M[x].stud_id;
        cout<<"Chemistry Mark   :";
        cin>>M[x].chem_marks;
        cout<<"Mathematics Mark :";
        cin>>M[x].math_marks;
        cout<<"Physics Mark     :";
        cin>>M[x].phy_marks;
        fflush(stdin);
        cout<<"\n";
    }

    for(x=0;x<3;x++){

        cout<<M[x].name<<"  "<<M[x].stud_id<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Chemistry Marks  : "<<(M[x].chem_marks/80)*100<<"%"<<endl;
        cout<<"Mathematics Marks: "<<(M[x].math_marks/80)*100<<"%"<<endl;
        cout<<"Physics Marks    : "<<(M[x].phy_marks/80)*100<<"%"<<endl<<endl;


    }
}
