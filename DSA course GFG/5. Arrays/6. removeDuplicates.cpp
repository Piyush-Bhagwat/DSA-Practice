#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeDupli(int a[], int n){
    int uniqueEles=1;

    for(int i=0; i<n; i++){
        if(a[i] != a[uniqueEles-1]){
            a[uniqueEles] = a[i];
            uniqueEles++;
        }
    }

    return uniqueEles;
}

main()
{
    int a[] = {8, 12, 12, 12, 45};
    int n = removeDupli(a, 5);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}