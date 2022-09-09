#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class ADTQueue{
	private:
		node *front, *rear;
		
	public: 
	 ADTQueue(){
	 	front= NULL;
	 	rear = NULL;
	 }
	 
	 int empty(){
	 	if(front==NULL)
	 		return 1;
	 	else 
	 		return 0;
	 }
	 
	 void append(int num){
	 	if(rear !=NULL){
	 		rear->next = new node;
	 		rear =  rear->next;
	 		rear->data = num;
	 		rear->next = NULL;
	 		
		 }
		 else{
		 	front = rear = new node;
		 	rear->data= num;
		 	rear->next=NULL;
		 }
	 }
	 
	 
	 int serve()
	 {
	 	int num;
	 	if(!empty()){
	 		num = front->data;
	 		node *temp;
	 		temp = front;
	 		
	 		front=front->next;
	 		temp->next=NULL;
	 		delete temp;
	 	
	 		if (front==NULL)
	 			rear= NULL;
	 			
		 }
		 else{
		 	cout<<"Queue is empty";
		 	return 0;
		 }
	 }
	 
	 void traverse(){
	 	node * temp;
	 	temp = front;
	 	
	 	while(temp!=NULL){
	 		cout<<temp->data<<" ";
	 		temp= temp->next;
		 }
	 }
};

int main(){
	ADTQueue q;
	int num;
	int value;
	int sum = 0;
	
	cout<<"How many integers to append into the queue? ";
	cin>>value;
	
	for(int i=0;i<value;i++){
		cout<<"Enter integer "<<i+1<<"to the queue : ";
		cin>>value;
		q.append(value);
	}
	
	cout<<"\n The integers that are append onto the queue are: ";
	q.traverse();#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};


class ADTQueue{
	private : 
		node *front, *rear;
	
	public :
		ADTQueue()
		{
			front = NULL;
			rear = NULL;
			
		}
		
		int empty()
		{
			if(front==NULL)
				return 1;
			else
				return 0;
			
		}
		
		void append(int num)
		{
			if(rear!=NULL)
			{
				rear->next = new node;
				rear = rear->next;
				rear->data = num;
				rear->next = NULL;
			}
			
			else
			{
				rear = new node;
				front = rear;
				
				rear->data=num;
				rear->next=NULL;
			}
		}
		
		int serve()
		{
			int num;
			if(!empty())
			{
				num = front->data;
				node*temp;
				temp = front;
				front = front->next;
				temp->next=NULL;
				delete temp;
				
				if(front==NULL)
					rear = NULL;
					
				return num;
			}
			else 
			{
			
				cout<<"Queue is empty.";
				return 0;		
			}
		}
		
		void traverse()
		{
			node * temp;
			temp = front;
			
			while(temp!=NULL)
			{
				cout<<temp->data<<"  ";
				temp = temp->next;
			}
		}
		
		
		
		
};


int main()
{

	ADTQueue q;
	int value, num, sum = 0;
	
	cout<<"How many Integers to append: ";
	cin>>num;
	
	for(int i=0;i<num;i++)
	{
		cout<<"Enter integer "<<i<<" : ";
		cin>>value;
		q.append(value);
		
		
		
	}
	
	cout<<"\nThe intergers are appended : ";
	q.traverse();
	
	
	cout<<"\nThe sum of integers are : ";
	for(int i=0;i<num;i++)
	{
		sum = sum + q.serve();
	}
	
	cout<<sum<<endl;
	
	return 0;
	
	
	
}




	
	cout<<"The sum of integers are: ";
	for(int i=0; i<num;i++){
		
		sum= sum + q.serve();
	}
	
	cout<<sum<<endl;
	return 0;
}
