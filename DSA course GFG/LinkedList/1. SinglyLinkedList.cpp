#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{    
    public:
        int data;
        Node *next;

        Node(){}
        Node(int n){
            data = n;
            next = NULL;
        }
};

void display(Node* head){
    Node* cur = head;
    while(cur!= NULL){
        cout<<cur->data<<" ";
        cur = cur->next;
    } 
    cout<<endl;
}

void recuDisplay(Node* head){
    if(head == NULL){
        cout<<endl;
        return;
    }

    cout<<head->data<<' ';
    recuDisplay(head->next);
}

void insertAtFront(Node*& head, int n){
    Node* temp = new Node(n);

    if(head == NULL){
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void append(Node*& head, int n){
    Node* temp = new Node(n);

    Node* cur = head;
    if(cur==NULL){
        head = temp;
        return;
    }
    while(cur->next!=NULL){
        cur = cur->next;
    }
    cur->next=temp;
}

void deleteFirst(Node*& head){
    if(head==NULL){
        return;
    }

    Node* temp = head->next;
    delete head;
    head = temp;
}

void deleteLast(Node*& head){
    Node* cur = head;
    if(cur == NULL) return;
    if(cur->next == NULL){
        delete head;
        cur = NULL;
        return;
    }
    while(cur->next->next != NULL){
        cur = cur->next;
    }
    delete cur->next;
    cur->next = NULL;
}

void insert(Node*& head, int n, int pos){
    Node* cur = head;

    Node* newNode = new Node(n);
    if(pos == 1){
        newNode->next=cur;
        head = newNode;
        return;
    }
    int i=2;
    while(cur != NULL){
        if (i == pos){

            Node* temp = cur->next;
    
            cur->next = newNode;
            newNode->next = temp;
            break;
        }
        i++;
        cur = cur->next;   
    }
}

int search(Node* head, int key){
    
    int i = 1;
    while(head!=NULL){
        if(head->data==key){
            return i; 
        }
        i++;
        head = head->next;
    }
    return -1;
}

int searchRecu(Node* head, int key){
    if(head == NULL){
        return -1;
    }
    if(head->data == key){
        return 1;
    }

    int res = searchRecu(head->next, key);
    if(res == -1) return res;
    return res+1;
}

void merge(Node* &head1,Node* &head2){
    Node* temp = head1;
    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next = head2;
}

main(){
    Node *head = NULL;

    insertAtFront(head, 10);
    insertAtFront(head, 20);
    insertAtFront(head, 30);
    insertAtFront(head, 5);
    append(head, 55);
    insert(head, 8, 6);

    Node* head2 = NULL;
    insertAtFront(head2, 54);
    insertAtFront(head2, 98);
    insertAtFront(head2, 43);
    insertAtFront(head2, 3);
    insertAtFront(head2, 56);

    display(head);
    display(head2);

    merge(head, head2);
    display(head);

}
