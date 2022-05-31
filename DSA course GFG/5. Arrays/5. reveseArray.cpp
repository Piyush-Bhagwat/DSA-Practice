#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int n){
    for(int i=0; i<floor(n/2); i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

main()
{   
    int ar[]= {3, 12, 5, 6};
    reverse(ar, 4);

    for(int i=0; i<4; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}