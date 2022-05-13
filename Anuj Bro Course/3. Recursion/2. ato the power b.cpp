#include<iostream>
using namespace std;

int power(int a, int b, int M){
    if(b == 0){
        return 1;
    }

    return ((a%M)  * power(a, b-1, M) %M) %M;
}

main(){
    cout<<power(2634823, 4, 1000007);
}