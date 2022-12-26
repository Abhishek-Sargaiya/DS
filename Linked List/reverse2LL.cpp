#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void printLL(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        cout<<temp->next<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(Node* &head,Node* &curr,Node* &previous){
    if(curr==NULL){
        head=previous;
        return;
    }
    Node*forword=curr->next;
    reverse(head,forword,curr);
    curr->next=previous;
}

// Node* reverse(Node* &head){

//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* temp = reverse(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return temp; 
// }
Node* reverseLL(Node* &head)
{
    Node*curr=head;
    Node*previous=NULL;
    reverse(head,curr,previous);
    return head;
}
int main(){
    Node*node1=new Node(10);
    Node*node2=new Node(20);
    Node*node3=new Node(30);
    Node*head=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    printLL(head);
    reverseLL(head);
    printLL(head);
}