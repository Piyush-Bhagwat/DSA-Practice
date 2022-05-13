#include<iostream>
using namespace std;

int noOfWays(int n, int m){
    if(n==1 || m==1){
        return 1;
    }

    return noOfWays(n, m-1) + noOfWays(n-1, m);
}

main(){
    cout<<noOfWays(3, 3);
}