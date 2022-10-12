#include<iostream>
using namespace std;

class ArrStack{
    private:
        int *data;
        int size = 0;
        int cap = 0;    

    public:
        ArrStack(){
            cap = 10;
            data = new int[cap];
        }

        ArrStack(int n){
            cap = n;
            data = new int[cap];

        }

        void push(int n){
            if(size == cap){
                return;
            }
            data[size] = n;
            size++;
        }

        bool isEmpty(){
            return (size == 0);
        }

        int pop(){
            if(isEmpty()){
                return -1;
            }

            int temp = top();
            size--;
            return temp;
        }

        int top(){
            if(isEmpty()){
                return -1;
            }

            return data[size-1];
        }

        void display(){
            for(int i=0; i<size; i++){
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
};

main(){
    ArrStack s(5);
     cout<<s.isEmpty()<<endl;
    s.push(8);
    s.push(3);
    s.push(2);

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;

}