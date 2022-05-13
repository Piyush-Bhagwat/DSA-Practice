#include<iostream>
using namespace std;

main(){

    int n;

    cout<<"Enter num: ";
    cin>>n;

    if(n&1){ //this is masking it is basically checking what the last bit is, if its 1 then odd else even
        cout<<"Odd";
    }
    else cout<<"Even";
}