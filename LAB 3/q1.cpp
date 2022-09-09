#include <iostream>
using namespace std;

class Stack{
    private: 
        int topStack, stack[4];


    public: 
        Stack(){
            topStack = -1;

        }

        int full(){
            if(topStack==4)
            return 1;
            else
			
            return 0;
        }
        int empty(){
            if(topStack==-1)
            return 1;
                else
                {

                    return 0;
                }

            }

    void push(char alpha){

    if(!full())
    {
        topStack++;
        stack[topStack] = alpha;
    }

    else
    {
        cout<<"Stack is full"<<endl;
    }
}

char pop(){

    char alpha;
    if(!empty())
    {
        alpha=stack[topStack];
        topStack--;
        return alpha;
    }
    else
    {
        return 0;

    }

}

};




int main(){
    char alpha;
    Stack st;
    cout<<"Key in five character :";

    for(int i=0;i<5;i++)
    {
        cin>>alpha;
        st.push(alpha);
    }

    cout<<"The reverse order is :" ;
    while(!st.empty())
    {
        cout<<st.pop()<<" ";
    }





}
