#include<iostream>
using namespace std;

int countBits(int n){
    int count =0;
    while(n!=0){
        if(n&1) count++;

        n = n>>1;
    }
    return count;
}

main(){
    int n=3;
    cout<<countBits(n);
}