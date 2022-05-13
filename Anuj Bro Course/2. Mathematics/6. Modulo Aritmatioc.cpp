// explanation: https://youtu.be/RCq5TYMZEwg

#include<iostream>
using namespace std;

long modolusPower(long a, long b, int M){
   long res = 1;

    while (b > 0){
        if((b&1) != 0){  //b%2
            res = ((res%M) * (a%M)) %M;
        }

        a = ((a%M) * (a%M)) %M;
        b = b>>1;  // b/2
    }

    return res;
}

main(){
    cout<<modolusPower(3978431, 5, 10000007);
}