#include<iostream>
using namespace std;

main(){

    int n;
    cout<<"Enter num: ";
    cin>>n;

    int origNum = n;
    int rem =0, i=0, sum = 0;
    while (n>0){
        rem = n%10;
        sum = (sum*10) + rem;
        n = n/10;
    }
    
    cout<<"reversed Num: "<<sum<<endl;
    if(sum == origNum){
        cout<<"yes";
    }
    else cout<<"no";
}