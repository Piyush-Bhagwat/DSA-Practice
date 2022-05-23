#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Nto1(int n){
    if(n == 0) return;

    Nto1(n-1);
    cout<<n<<" ";
}

main()
{   
    Nto1(6);
    return 0;
}