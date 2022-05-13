#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){

   if(n == 1) return false;
   if(n==2) return true;

   for(int i=2; i*i<=n; i++){
      if(n%i == 0) return false;
   }
   return true;
}

void primeFactors(int n, vector<int> &fac){
   if(isPrime(n)){
      fac.push_back(n);
      return;
   }

   for(int i=2; i*i<=n; i++){
      for(int j=2; j<=n; j++){
            if(i*j == n){
               primeFactors(i, fac);
               primeFactors(j, fac);
               
               return;
            }
      }
      
   }
}

main(){
   vector<int> fac;
   int n;

   cin>>n;

   primeFactors(n, fac);

   cout<<"Prime factors are: ";
   for(int i=0; i<fac.size(); i++){
      cout<<fac[i]<<" ";
   }

}