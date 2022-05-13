#include<iostream>
using namespace std;

bool leftBitSet(int n, int k){ //using left shift
    int mask = 1<<(k-1);

    if(n & mask) return 1;
    return 0;
}

bool rightBitSet(int n, int k){//using right shift
    n = n>>(k-1);

    if(n&1) return 1;
    return 0; 
}

main(){

    int n=6, k=3;

    if(rightBitSet(n, k)) cout<<"Yes";
    else cout<<"No";

}