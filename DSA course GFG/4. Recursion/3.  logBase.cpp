// b^a = n
// log base b of n = a

#include<iostream>
using namespace std;

int logBase(int b, int n){ //returns the floor of logbase b of n
    if(n<b){
        return 0;
    }

    return 1 + logBase(b, n/b);
}

main(){
    cout<<logBase(2, 19);
}