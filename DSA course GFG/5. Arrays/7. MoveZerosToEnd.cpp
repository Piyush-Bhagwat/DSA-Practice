#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZero(int ar[], int n){
    int nonZ=0;

    for(int i=0; i<n; i++){
        if(ar[i] != 0 ){
            ar[nonZ] = ar[i];
            ar[i] =0;
            nonZ++;
        }
    }
}

main()
{
    int a[]={0, 0, 7, 0, 3, 2};
    moveZero(a, 6);

    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}