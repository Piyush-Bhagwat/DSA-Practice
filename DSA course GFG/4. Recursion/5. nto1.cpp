#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Nto1(int n){
    if(n == 0) return;

    cout<<n<<" ";
    Nto1(n-1);
}

main()
{   
    Nto1(6);
    return 0;
}