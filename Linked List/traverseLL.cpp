#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
};

void printLL(node* n){

    while(n != NULL){
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL";
}

int main()
{
   
   node* head = new node();
   node* second = new node();
   node* third = new node();

   head->data=1;
   head->next=second;

   second->data=2;
   second->next=third;

   third->data=3;
   third->next=NULL;

   printLL(head);
}