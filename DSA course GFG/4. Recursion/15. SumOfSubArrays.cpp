#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countSubarray(int a[], int n, int key, int sum=0){
    if(n-1<0){
        return (key==sum)? 1 : 0; // if sum = key return 1 else 0
    }

    int pre = countSubarray(a, n-1, key, sum+a[n-1]) + countSubarray(a, n-1, key, sum);
     
    return pre;
}

main()
{
    int a[] = {10, 5, 2, 3, 6};

    cout<<countSubarray(a, 5, 8);

    return 0;
}