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
    
}