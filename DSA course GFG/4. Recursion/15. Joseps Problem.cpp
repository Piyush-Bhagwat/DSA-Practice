#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int joseps(int n, int k){
    if(n==1) return 0;

    return (joseps(n-1, k) + k) % n;
}

main()
{
    cout<<joseps(4, 2);
    return 0; 
}