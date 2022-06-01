#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseAr(int a[], int s, int e){
    int i=s-1, j = e-1;

    while( i < j){
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

void leftRotate(int a[], int n, int d){ //bas ek bar paper pe krke dekho samzega
    reverseAr(a, 1, d);
    reverseAr(a, d+1, n);
    reverseAr(a, 1, n);
}

main()
{
    int a[] = {1, 2, 3, 4, 5};
    leftRotate(a, 5, 2);

    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}