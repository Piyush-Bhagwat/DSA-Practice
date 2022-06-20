#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int indexOf(int ar[], int n, int k){
    for(int i=0; i<n; i++){
        if(ar[i] == k){
            return i;
        }
    }
    return -1;
}

int majorEle(int ar[], int n){
    int maxEle=INT_MIN;
    for(int i=0; i<n; i++){
        maxEle = max(maxEle, ar[i]);
    }
    
    vector<int> freq(maxEle+1, 0);

    for(int i=0; i<n; i++){
        freq[ar[i]]++;
    }

    for(int i=0; i<maxEle+1; i++){
        if(freq[i] > n/2){
            return indexOf(ar, n, i);
        }
    }
    return -1;
}

main()
{
    int a[] = {8, 7, 6, 8, 6, 6, 6, 6};
    cout<<majorEle(a, 8);
    return 0;
}