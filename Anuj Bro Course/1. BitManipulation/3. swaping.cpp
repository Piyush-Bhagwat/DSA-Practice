#include<iostream>
using namespace std;

main(){
    int a = 8, b= 3;

    // it just does swapping... there is no reason at least i dont know
    a = a^b;
    b=a^b;
    a = a^b;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b;
}