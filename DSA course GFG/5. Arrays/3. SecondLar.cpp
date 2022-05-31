#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int seclarEle(int ar[], int n){
    int maxIdx=-1;
    int maxEle=INT_MIN;
    int secLar= -1;

    for(int i=0; i<n; i++){
        if(maxEle<ar[i]){
            secLar=maxIdx;
            maxIdx=i;
            maxEle = ar[i];
        }
        else if(maxEle>ar[i]){
            if(secLar == -1) secLar = i;

            if(ar[secLar]<ar[i]) secLar=i;
        }
    }
    return secLar;
}

main()
{
    // int ar[] = {3, 4, 2, 7, 1, 9};
    int ar[]={3, 3, 7, 5};
    cout<<seclarEle(ar, 4);
    return 0;
}