//timecomplexity is theta(no of set bit)

//guves the number of set bits
#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int count =0;
    while(n!=0){
        n = n&(n-1);
        count++;
    }
    cout<<count;
}