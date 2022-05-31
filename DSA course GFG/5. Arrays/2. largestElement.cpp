#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int larEle(int ar[], int n){
    int maxIdx=-1;
    int maxEle=INT_MIN;

    for(int i=0; i<n; i++){
        if(maxEle<ar[i]){
            maxIdx=i;
            maxEle = ar[i];
        }
    }
    return maxIdx;
}

main()
{
    int ar[] = {3, 5, 3, 7, 55, 9};

    cout<<larEle(ar, 6);
    return 0;
}