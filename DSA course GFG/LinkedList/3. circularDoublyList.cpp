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

    
}


main()
{
    return 0;
}