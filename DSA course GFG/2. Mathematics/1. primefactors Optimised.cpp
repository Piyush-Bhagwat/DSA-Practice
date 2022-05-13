#include<iostream>
using namespace std;


bool isPrime(int n){

   if(n == 1) return false;
   if(n==2) return true;

   for(int i=2; i*i<=n; i++){
      if(n%i == 0) return false;
   }
   return true;
}

main(){
    int n;
    cin>>n;

    for(int i=2; i*i<n; i++){
        if(isPrime(i)){

            while(n%i == 0){
                cout<<i<<' ';
                n=n/i;
            }
        }
    }

    if(n>1) cout<<n;
}