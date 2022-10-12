#include<iostream>
using namespace std;

class Node{     
    public:
        int data;
        Node* next;

        Node(){}
        Node(int n){
            data = n;
            next = NULL;
        }
};

class Lstack{
    private:
        Node* list;
        int len=0;
    
    public:
        Lstack(){
            list = NULL;
            len = 0;
        }

        void push(int n){
            Node* newNode = new Node(n);
            len++;

            newNode->next = list;
            list = newNode;
        }

        int pop(){
            if(list == NULL){
                return -1111;
            }

            len--;
            Node* toDel = list;
            int temp = top();

            if(list->next == NULL){
                delete toDel;
                list = NULL;
                return temp;
            }

            list = list->next;
            delete toDel;
            return temp;
        }

        int top(){
            if(list==NULL){
                return -1111;
            }
            return list->data;
        }

        int size(){
            return len;
        }

        bool isEmpty(){
            return (len == 0);
        }
};

main(){
    Lstack s;
    s.push(8);
    s.push(9);
    s.push(2);
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}