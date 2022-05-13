#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n==1 || n==0){
        return n;
    }

    return n + sumOfN(n-1);
}

main(){
    cout<<sumOfN(3);
}