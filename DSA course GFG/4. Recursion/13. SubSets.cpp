#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subSets(string &s, int n, int i=0, string r=""){
    if(i==n){
        cout<<'"'<<r<<'"'<<" ";
        return;
    }

    subSets(s, n, i+1, r+s[i]);
    subSets(s, n, i+1, r);
}

main()
{
    string s = "piy";
    subSets(s, 3);
    return 0;
}