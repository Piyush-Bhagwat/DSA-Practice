//time complexity is theta(1)

#include<iostream>
using namespace std;

void initialize(int a[]){
    a[0] = 0;
    for(int i=1; i<256; i++){
        a[i] = (i&1) + a[i/2]; //save the count of set bit upto 255
    }
}

int countBits(int n, int a[]){
    int res=0;
    for(int i=1; i<=4; i++){
        res+=a[n & 0xff];  //has last 8 bits as 1
        n= n>>8;
    }
    
    return res;
}

main(){
    int table[256];

    initialize(table);
    int n;
    cin>>n;

    cout<<countBits(n, table);

}