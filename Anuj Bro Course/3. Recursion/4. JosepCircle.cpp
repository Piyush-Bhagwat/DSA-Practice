#include<iostream>
using namespace std;

int josCir(int n, int k){
    if(n == 1){
        return 0;
    }

    return (josCir(n-1, k) + k) % n;
}

main(){
    cout<<josCir(6, 2);
}