#include<iostream>
using namespace std;

void powSet(string s, int i, string cur){
    if (i==s.length()){
        cout<<cur<<"| ";
        return;
    }

    powSet(s, i+1, cur+s[i]);
    powSet(s, i+1, cur);
}

main(){
    string s = "Amit";

    powSet(s, 0, "");

}