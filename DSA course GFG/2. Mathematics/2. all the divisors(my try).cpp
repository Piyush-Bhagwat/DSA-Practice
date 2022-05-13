#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int i;

    for(i=1; i*i<=n; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }


    for(; i>=1; i--){
        if(n%i == 0){

            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }


}