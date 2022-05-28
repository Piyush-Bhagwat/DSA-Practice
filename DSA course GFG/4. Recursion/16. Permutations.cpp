#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permuations(string s, int i=0){
    if(i == s.length()-1) {
        cout<<s<<" ";
        return;
    }

    for(int j=i; j<s.length(); j++){
        swap(s[i], s[j]);
        permuations(s, i+1);
        swap(s[j], s[i]);
    }

}

main()
{
    permuations("HIE");
    return 0;
}