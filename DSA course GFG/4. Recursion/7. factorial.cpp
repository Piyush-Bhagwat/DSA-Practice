#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    if(n<=0) return 1;

    return n * fact(n-1);
}

main()
{
    cout<<fact(5);
    return 0;
}