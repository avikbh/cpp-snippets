#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
Node* insert_empty(int d, Node *n){
    if(n)
        return n;
    Node *temp=new Node;
    temp->data=d;
    n=temp;
    n->next = n;

    return n;
}
Node* insert_end(int d, Node *n){
    if(!n)
        return insert_empty(d,n);
    Node *temp=new Node;
    temp->data=d;
    temp->next=n->next;
    n->next = temp;

    n=temp;

    return n;
}
Node* insert_start(int d, Node *n){
    if(!n)
        return insert_empty(d,n);
    Node *temp=new Node;
    temp->data=d;
    temp->next=n->next;
    n->next = temp;
    // n=temp;

    return n;
}

Node* insert_pos(int d, Node *n,int pos){
    if(!n)
        return insert_empty(d,n);
    
    Node *itr = n->next;
    Node *temp=new Node;
    temp->data=d;

    for(int i=0;i<pos-1;i++){
        itr=itr->next;
    }
    temp->next=itr->next;
    itr->next = temp;
    // n=temp;

    return n;
}

void travarse(Node *first){
    Node *temp=first;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=first);
}
int main(){
    Node *last = nullptr;
    last= insert_empty(5,last);
    // travarse(last->next);
    last= insert_end(7,last);
    last= insert_end(2,last);
    last= insert_end(18,last);
    last= insert_end(10,last);
    last= insert_start(15,last);
    last= insert_pos(11,last,3);
    travarse(last->next);
return 0;
}
