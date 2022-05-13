#include<iostream>
using namespace std;

main(){
    int a, b, c;

    cin>>a;

    b = a>>1; //riht shift divide's by 2^n
    c = a<<1; // left shift multiplys by 2^n

    cout<<"right shift: "<<b<<endl;
    cout<<"left shift: "<<c;
}