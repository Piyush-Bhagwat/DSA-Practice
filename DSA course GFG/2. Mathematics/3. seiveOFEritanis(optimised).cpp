//time complexity theta(n loglog n)

/* Explanation
First, we take a Boolean array(a) of size n+1
and fill it with true. We set a[0] and a[1] as false
as they are not prime number.

Then we run a loop from 2 to n and as we run, we mark out
all the multiples of i as false. We do by first check if i
is true. If it is then we first print the i then we run another
loop to make its multiple false. We initialized it ixi because
all the previous multiples will be already marked as false
by the previous values of i.

The time complexity is theta(n loglogn)

*/

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