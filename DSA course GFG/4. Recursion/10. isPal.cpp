#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPal(string s, int b, int e){
    if(b>=e) return true;  //in even string we will get empty string once b and e get crossed. and an empty string is pal
    

    return((s[b]==s[e]) && isPal(s, b+1, e-1));
}

main()
{
    string s ="racecar";
    cout<<isPal(s, 0, s.size()-1);
    return 0;
}