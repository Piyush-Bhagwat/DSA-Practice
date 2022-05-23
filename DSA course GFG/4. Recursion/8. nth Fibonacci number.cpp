//to find nth fibbo number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=2) return n-1; //as 1st postion have 0 and second 1 

    return fibo(n-1)+fibo(n-2);
}

main()
{
    cout<<"the 5th num is: "<<fibo(5);
    return 0;
}