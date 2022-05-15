#include<iostream>
using namespace std;

main(){
    int a[] = {8,4,3,2,4,2};

    int xOR=0, r1=0, r2=0;
    for(int i=0; i<6; i++){
        xOR = xOR^a[i];
    }

    int lastBit = xOR & ~(xOR-1); //this will find the rightmost set bit

    for(int i=0; i<6; i++){ //then we are dividing array into two groups 1. having last bit same as lastBit, 2. who dont. each num belong in each group
        if((a[i] & lastBit) != 0) r1=r1^a[i];
        else r2 = r2^a[i];
    }

    cout<<r1<<" "<<r2;
}