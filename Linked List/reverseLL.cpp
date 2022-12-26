#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int x){

         data=x;
        next= NULL;
        // cout<<"Nodebngayi"<<endl;
    }

};

void printLL(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

Node* reverseLL(Node* &head){

    Node* previous = NULL;
    Node* current = head;
    Node* forword = NULL;
    while(current!=NULL){
        forword = current->next;
        current->next = previous;
        previous = current;
        current = forword;
    }
    return previous;
}


int main(){
    
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    Node* head = node1;
    node1 ->next = node2;
    node2 ->next = node3;
    node3->next = NULL;
    printLL(head);
    Node* newhead=reverseLL(head);
    printLL(newhead);
}