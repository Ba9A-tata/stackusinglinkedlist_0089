# include <iostream>
using namespace std;

// Node class representing a single mnode in the linked list
class Node{
 public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }
};

// stack class
class stack{
private: 
    Node *top; // Pointer to the top of the stack

public:
    Stack(){
        top = NULL; // Initialize the stack with a null top pointer
    }
    // Push operation Inset an element onto the top of the stack
    int push(int value){
        Node* newNode = new Node(); // 1. Allocate memory of the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. Set the next pointer of the new node to the current top node
        top = newNode; // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek(){
        if (top == NULL){
            cout << "List is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
            }
            cout << endl;
        }// Return the value of hte top node
    }

    // IsEmpty operation: check if the stack is empty
    bool isEmpty(){
        
    }
}

