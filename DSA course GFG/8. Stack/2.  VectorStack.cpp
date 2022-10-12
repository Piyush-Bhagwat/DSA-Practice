#include<iostream>
#include<vector>
using namespace std;

class Vstack{
    private:
        vector<int> data;
    public:
        void push(int n){
            data.push_back(n);
        }

        int top(){
            return data.back();
        }

        int size(){
            return data.size();
        }

        void pop(){
            data.pop_back();
        }

        bool isEmpty(){
            return data.empty();
        }
};

main(){
    Vstack s;

    s.push(3);
    s.push(7);
    s.pop();
    cout<<s.top();
}