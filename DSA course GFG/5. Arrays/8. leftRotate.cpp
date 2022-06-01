#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int a[], int n){
    int first = a[0];

    for(int i=0; i<n-1; i++){
        a[i] = a[i+1];
    }

    a[n-1] = first;
}

void leftRotate(int a[], int n, int d){
    d = d%n;

    int f[d];


    for(int i=0; i<d; i++){
        f[i] = a[i];
    }

    for(int i=0; i<n-d; i++){
        a[i] = a[i+d];
    }

    for(int i=0; i<d; i++){
        a[n-d+i] = f[i];
    }
}

main()
{
    int ar[] = {1, 2, 3, 4, 5};
    leftRotate(ar, 5, 6);

    for(int i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}