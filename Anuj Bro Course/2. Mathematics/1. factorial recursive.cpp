#include<iostream>
using namespace std;

long int fact(long int n){
    if(n <= 0){ //fact of 0 is 1
        return 1;
    }
    return n * fact(n-1);
}

main(){
    cout<<fact(5);
}