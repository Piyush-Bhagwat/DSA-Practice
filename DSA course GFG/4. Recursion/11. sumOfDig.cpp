#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int digSum(int n){
    if(n == 0) return 0;

    int ch = n%10;
    return ch + digSum(n/10);
}

main()
{
    cout<<digSum(9987);
    return 0;
}