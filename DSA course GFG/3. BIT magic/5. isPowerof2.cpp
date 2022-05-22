#include<iostream>
using namespace std;

bool isPowerOf2(long long n){
    if (n==0) return false;

    return ((n&(n-1)) == 0); //if the num only has one bit set it will return true
}

main(){
    long long n;
    cin>>n;

    if(isPowerOf2(n)) cout<<"yes";
    else cout<<"No";
}