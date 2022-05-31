#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(int ar[], int n, int e){
    for(int i=0; i<n; i++){
        if(ar[i] == e) return i;
    }

    return -1;
}

int del(int ar[], int n, int cap, int e){
    if(n==0) return 0;

    int idx = find(ar, n, e);

    if(idx==-1) return n;

    for(int i=idx; i<n; i++){
        ar[i] = ar[i+1];
    }

    ar[n-1] = -20;
    return n-1;
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

main()
{
    int arr[6] = {2, 4, 6, 8, 9, 7};

    display(arr, 6);
    del(arr, 6, 6, 8);
    display(arr, 6);
    return 0;
}