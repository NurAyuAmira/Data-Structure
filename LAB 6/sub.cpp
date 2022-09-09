	#include<iostream>
using namespace std ;

// Node structure
struct Node {
        int data ;       // to hold integer data
        Node* next ;    // points to the next Node
} ;

// createNode(int) function creates the new node
// holding integer data and returns the same
Node* createNode(int data) {
        Node* node = new Node() ;
        node->data = data ;
        node->next = NULL ;
        
        return node ;
}

// inserts the node as per stack implementation
void push(Node *&stack, int data) {
        Node *node = createNode(data) ;
        if(stack == NULL) {     // if the node is nulll
                                                // make stack pointing to this node
                stack = node ;
        } else {                        // else make the new node
                                                // as the head node 
                node->next = stack ;
                stack = node ;
        }       
}

// function pops out the the first element from the stack
void pop(Node *&stack) {
        int pop = -1 ;
        if(stack == NULL) {
                cout << "stack is empty\n" ;
        } else {
                Node* node = stack ;
                int tmp = stack->data ;
                stack = stack->next ;
                delete node ;
                
                cout << "Number popped: " << tmp << endl ;
        }       
}

// function that displays the stack
void show(Node *&stack) {
        if(stack == NULL) {
                cout << "stack is empty\n" ;
        } else {
                Node* start = stack ;
                cout << "Data in the stack :\n" ;
                // displaying stack
                while(start) {
                        cout << start->data << " " ;
                        start = start->next ;
                }
                cout << endl ;
        }
}

// main driving function
int main() {
        // Menu
        cout << "1: Push\n" ;
        cout << "2: Pop\n" ;
        cout << "3: Exit\n\n" ;
        
        // Node object
        Node* stack = NULL ;
        
        int ch, n ;
        cout << "Choose operation to perform: " ;
        cin >> ch ;
        
        // while-loop until user choose to exit from
        // program
        while(true) {
                // switch-case statemenet
                switch(ch) {
                        // if user press 1, then perform push insertion operation
                        case 1: 
                                cout << "Enter a number to push: " ;
                                cin >> n ;
                                push(stack, n) ;
                                cout << endl ;
                                break ;
                        // if user press 2, then perform pop operation
                        case 2:
                                pop(stack) ;
                                cout << endl ;
                                break ;
                        case 3:
                                show(stack) ;
                                cout << "Thank you\n" ;
                                // exits from the program
                                exit(1) ;
                                break ;
                        default :
                                cout << "INVALID!! Try Again :(\n\n" ;
                }
                cout << "Choose operation to perform: " ;
                cin >> ch ; 
        }
        return 0 ;
}
