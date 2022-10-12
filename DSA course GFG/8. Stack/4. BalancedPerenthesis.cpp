#include<iostream>
#include<stack>
using namespace std;

bool matching(char a, char b){
    return  (a=='{' && b=='}') || 
            (a=='[' &&  b==']') || 
            (a=='(' && b==')');
}

bool isBalanced(string n){
    stack<char> s;

    for(char cur : n){ //for each char in n. (current is stored in cur)
        if(cur=='{' || cur=='[' || cur=='('){ 
            s.push(cur);
        }

        if(s.empty()){
            return false;
        }
        if(matching(s.top(), cur)){
            s.pop();
        }
    }
    return s.empty();
}

main(){
    string n;
    cout<<"Enter string: ";
    cin>>n;
    
    if(isBalanced(n)){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
}