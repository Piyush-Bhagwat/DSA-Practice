#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int openTheDoor(int n){
    if(n == 0) return 1;
    return 0;
}

main()
{
    vector<int> ar(100, 1);

    for(int i=2; i<100; i++){
        int j=1, k=1;
        while((i*j) <= 100){
            ar[i*j] = openTheDoor(ar[i*j]);
            j=i*j;
        }
    }

    for(int i=0; i<100; i++){
        cout<<ar[i]<<" ";
    }

}