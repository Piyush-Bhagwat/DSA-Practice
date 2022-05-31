#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int joseps(int n, int k){
    if(n==1) return 1;

    // int pre = (joseps(n-1, k) + k) % n;

    return (joseps(n-1, k) + k) % n + 1;
}

main()
{
    cout<<joseps(3, 2);
    return 0; 
}