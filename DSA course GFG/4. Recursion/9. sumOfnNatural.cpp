#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int naturalSum(int n){
    if(n<=0) return 0;
    if(n==1) return 1;

    return n + naturalSum(n-1);
}

main()
{
    cout<<naturalSum(4);
    return 0;
}