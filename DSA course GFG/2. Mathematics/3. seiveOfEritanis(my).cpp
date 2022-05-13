#include<iostream>
using namespace std;

void printPrime(int n){
    bool a[n+1];
    for(int i=0; i<n+1; i++){
        a[i] = true;
    }

    a[0] = a[1] = false;

    for(int i=2; i*i<=n; i++){
        if(a[i] == true){
            for(int j=i*i; j<=n; j+=i){
                // cout<<"hello";
                a[j] = false;
            }
        }
    }

    for(int i=0; i<=n; i++){
        if(a[i] == true) cout<<i<<" ";
    }
    return;
}

main(){
    int n;
    cin>>n;
 
    printPrime(n);
}