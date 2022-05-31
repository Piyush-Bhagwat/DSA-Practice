#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n){
    if(n==1) return 1;

    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]) return 0;
    }
    return 1;
}

main()
{
    int ar[]={2, 3, 3, 4, 5};
    cout<<isSorted(ar, 4);
    return 0;
}