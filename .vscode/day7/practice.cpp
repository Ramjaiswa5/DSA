#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next =NULL;
    }
};
class Queue{
    public:
    Node* head = NULL;
    void push(int d){
        // insert at Tail
        Node* nn = new Node(d);

        if (head == NULL)
        {
            head = nn;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
    int font(){
        return head->data;
    }
    void pop(){
        head = head->next;
    }
    int empty(){
        if (head == NULL)
        {
            return 1;
        }
        return 0;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    while (q.empty() != 1)
    {
        cout<<q.font()<<" ";
        q.pop();
    }
    return 0;
}