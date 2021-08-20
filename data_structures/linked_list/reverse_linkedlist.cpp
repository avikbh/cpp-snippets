//! Recall:
// Add nodes to a linkedlist
// Use of 3 pointers to reverse the linkedlist

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n) : data(n), next(nullptr) {}
};
// Node *insert(int d, Node *n)
// {
//     Node *temp = new Node(d);
//     n = temp;
//     n->next = nullptr;

//     return n;
// }
// Node *add(int d, Node *head)
// {
//     Node *tmp = new Node(d);
//     tmp->next = head;
//     head = tmp;
//     return head;
// }

Node *reverse(Node *head)
{
    Node *current = head;
    Node *prev = nullptr, *next = nullptr;

    while (current)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;

    return head;
}

void travarse(Node *head)
{
    // Node *temp=head;
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // Node *last = nullptr;

    // last = add(5, last);
    // // Node *head = last;
    // // head->next = last->next;
    // // travarse(last->next);
    // last = add(7, last);
    // last = add(2, last);
    // last = add(18, last);
    // last = add(10, last);
    // Node *head = nullptr;
    // head = reverse(last);
    // travarse(head);

    Node *head = new Node(5);
    head->next = new Node(12);
    head->next->next = new Node(2);
    head->next->next->next = new Node(18);
    head->next->next->next->next = new Node(10);
    travarse(head);
    cout<<endl;

    head = reverse(head);
    travarse(head);
    cout << endl;
    return 0;
}
