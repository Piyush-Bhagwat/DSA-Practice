#include<iostream>
using namespace std;

struct Node{
        Node* prev;
        Node* next;
        int data;

        Node(){};
        Node(int n){
            prev = NULL;
            next = NULL;
            data= n;
        }
};

void beginInsert(Node* &head, int n){
    Node* newNode = new Node(n);

    if(head == NULL){
        head = newNode;
        return;
    }

    head->prev = newNode;
    Node* temp = head;
    head = newNode;
    newNode->next = temp;
}

void backInsert(Node* &head, int n){
    Node* temp = head;
    Node* newNode = new Node(n);
    if(head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next=newNode;
    newNode->prev = temp;

}

void reverse(Node*& head){
    Node* cur = head;
    Node* temp = NULL;
    
    while(cur!=NULL){
        temp = cur->prev; //its important to store the preious value into the temp var
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    }
    head = temp->prev; //as head is poointing to the second last (i.e is the second valuse) so the head is its previos node

}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data;
        if(head->next != NULL){
            cout<<", ";
        }
        head = head->next;
    }
    cout<<endl;
}

void deleteHead(Node* &head){
    Node* toDel = head;

    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        head = NULL;
        delete toDel;
        return;
    }

    head = head->next;
    head->prev = NULL;

    delete toDel;
}

void deleteLast(Node* &head){
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* toDel = temp;

    temp = temp->prev;
    temp->next = NULL;

    delete toDel;
}

void makeCircular(Node* &head){
    Node* temp = head;
    if(temp == NULL) return;
    if(temp->next == NULL){
        temp->next = head;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = head;
}

void cirDisplay(Node* head){
    Node* temp = head;
    if (head == NULL) return;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != head);
    cout<<endl;
}

void cirFrontInsert(Node* &head, int n){
    Node* newNode = new Node(n);

    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
        return;
    }

    newNode->next = head->next;
    head->next = newNode;

    int temp = newNode->data;
    newNode->data = head->data;
    head->data = temp;


}

void cirInsert(Node* &head, int n){
    Node* newNode = new Node(n);
    Node* cur = head;

    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
        return;
    }

    while(cur->next != head){
        cur = cur->next;
    }

    cur->next = newNode;
    newNode->next = head;
}

void cirDeleteHead(Node* &head){
    Node* temp = head;
    if(head == NULL){
        return;
    }
    if(temp->next == head){
        head = NULL;
        delete head;
        return;
    }

    head->data = head->next->data;
   
    Node* toDel = head->next;
    head->next = head->next->next;

    delete toDel;
}


void cirDelete(Node* &head, int k){
    if(k==1) {
        cirDeleteHead(head);
        return;
    }
    Node* temp=head;
    int i=1;
    while(i+1 < k){
        temp=temp->next;
        i++;
    }

    Node* toDel = temp->next;
    temp->next = toDel->next;
    delete toDel;
}

main(){
  Node* hd = NULL;

    beginInsert(hd, 6);  
    beginInsert(hd, 5);
    beginInsert(hd, 10);
    beginInsert(hd, 23);
    beginInsert(hd, 43);
    beginInsert(hd, 93);

    Node* hd1 = NULL;
    makeCircular(hd1);
    cirFrontInsert(hd1, 6);
    cirFrontInsert(hd1, 8);
    cirFrontInsert(hd1, 1);
    cirInsert(hd1, 99);
    cirInsert(hd1, 3);
    cirDisplay(hd1);
    cirDelete(hd1, 5);
    cirDisplay(hd1);

 
}