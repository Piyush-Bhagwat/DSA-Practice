#include<iostream>
using namespace std;

bool isPowerOf2(int n){
    if (n==0) return false;

    return ((n&(n-1)) == 0); //if the num only has one num it will return true
}

main(){
    int n;
    cin>>n;

    if(isPowerOf2(n)) cout<<"yes";
    else cout<<"No";
}