//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int a[], int n){
    if (n<=1) return 0;

    int minEle = a[0], diff=a[0]-a[1];

    for(int i=1; i<n; i++){
        diff = max(diff, a[i]-minEle);
        minEle = min(minEle, a[i]);
    }

    return diff;
}

main()
{
    int ar[] = {2, 3, 10, 6, 4, 8, 1};
    cout<<maxDiff(ar, 7);
    return 0;
}