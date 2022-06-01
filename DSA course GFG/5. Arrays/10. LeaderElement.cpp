#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leaderEle(int a[], int n){
    int grt = INT_MIN;

    cout<<"greater Element are: ";

    for(int i=n-1; i>=0; i--){
        if(grt<a[i]){
            cout<<a[i]<<" ";
            grt = a[i];
        }
    }
}

main()
{
    int a[] = {2, 10, 10, 6, 3, 2};
    leaderEle(a, 6);

    return 0;
}