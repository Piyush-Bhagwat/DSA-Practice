#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadenes(int ar[], int n){
    int curSum=ar[0], maxSum=ar[0];
    for(int i=1; i<n; i++){
        curSum= max(curSum+ar[i], ar[i]);
        maxSum = max(curSum, maxSum);
    }

    return maxSum;
}

int reverseKaden(int ar[], int n){
    int curSum=ar[0], minSum=ar[0];
    for(int i=1; i<n; i++){
        curSum= min(curSum+ar[i], ar[i]);
        minSum = min(curSum, minSum);
    }

    return minSum;
}

int circularMaxSum(int ar[], int n){
    int normalSum = kadenes(ar, n);
    int minSum = reverseKaden(ar, n);

    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum += ar[i];
    }

    int circularSum = totalSum - minSum;
    return max (circularSum, normalSum);
}
main(){

    int a[] = {-3, 4, 6, -2};
    cout<<circularMaxSum(a, 4);
    return 0;
}
