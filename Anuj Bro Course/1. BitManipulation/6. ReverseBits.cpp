#include<iostream>
using namespace std;

void setBit(int &n, int i){
    int mask = 1<<(i-1);
    n = n | mask;
}

void clearBit(int &n, int i){
    int mask = ~(1<<(i-1));
    n = n & mask;
}

bool findBit(int n, int i){
    int mask = 1<<(i-1);

    return n&mask;
}

void clearLeastBit(int &n){
    n = n & (n-1);
}

main(){
    int n = 11;
    int rev=0;

    while( n>0 ){
        bool bit = findBit(n,1);
        n = n>>1;
        
        if(bit){
            setBit(rev, 1);
        }

        if(n!=0){
            rev = rev<<1;
        }
    }

    cout<<rev;

}