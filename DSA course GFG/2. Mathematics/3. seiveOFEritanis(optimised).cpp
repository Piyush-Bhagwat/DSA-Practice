//time complexity theta(n loglog n)
#include<iostream>
using namespace std;

void printPrime(int n){
    bool a[n+1];
    for(int i=0; i<n+1; i++){
        a[i] = true;
    }

    a[0] = a[1] = false;

    for(int i=2; i<=n; i++){
        if(a[i] == true){
            cout<<i<<" ";

            for(int j=i*i; j<=n; j+=i){
                
                a[j] = false;
            }
        }
    }

}

main(){
    int n;
    cin>>n;
 
    printPrime(n);
}