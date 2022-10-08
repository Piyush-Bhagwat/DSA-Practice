#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(){}
        Node(int n){
            data = n;
            next = this;
            prev = this;
        }
};

void insertHead(Node* &head, int n){
    Node* newNode = new Node(n);
    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head->next;
    newNode->next = temp;
    newNode->prev = head;
    head->next = newNode;
    temp->prev = newNode;

    int data = head->data;
    head->data = newNode->data;
    newNode->data = data;
}

void display(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<' ';
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}


main()
{
    Node* hd =NULL;

    insertHead(hd, 2);
    insertHead(hd, 8);
    insertHead(hd, 9);
    display(hd);
    return 0;
}