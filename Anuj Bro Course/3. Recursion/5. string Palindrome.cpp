#include<iostream>
using namespace std;

bool isPal(string s, int l, int r){
    if(l>=r){
        return 1;
    }
    if(s[l] != s[r]){
        return 0;
    }

    return isPal(s, l+1, r-1);
}

main(){
    cout<<isPal("helleh", 0, 5);
}