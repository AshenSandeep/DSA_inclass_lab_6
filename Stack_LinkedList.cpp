#include<iostream>
#include<ctime>
#include<chrono>

using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data ){
        this->data=data;
        this->next=NULL;
    }   
};

class StackLinkedList{
    
    Node* top;
    public:
    StackLinkedList()
    {
        top = NULL;
    }
    void push(int data);
    int pop();
    void display();
    

};

void StackLinkedList:: push(int data){
     Node* newNode= new Node(data);
     if(top == NULL){
        top = newNode;
        //cout<<"data is pushed"<<endl;
         return;
     }else{
        newNode->next = top;
        top = newNode;
        //cout<<newNode->data<<"data is pushed"<<endl;
        return;
     }
}

int StackLinkedList:: pop(){
    if(top == NULL){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        Node* poppedNode = top;
        top = top->next;
        poppedNode->next = NULL;
        return poppedNode->data;
    }
}

void StackLinkedList:: display(){
    Node* temp;
    if(top==NULL){
        cout<<"Stack Uderflow"<<endl;
    }
    else{
        temp=top;
        while(temp!= NULL){
            cout<< temp->data; // display node data
            temp=temp->next;
            if(temp!= NULL){
                cout<<"->";
            }
        }
    }
}
