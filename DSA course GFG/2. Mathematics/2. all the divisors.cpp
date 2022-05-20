/* Explanation

Here we used two loops. First one starts with i=0 and
goes up to i= root(n), this loop prints the factor less
than root(n) of n from pair of factors (like 3x10=30, will print 3).
It’s very basic condition.

The second loop starts from i=root(n) and goes up to i=0.
This loop prints the other factor from pair of factors of n.
if n=30 then the pairs be like (1x30/1=30, 3x30/3=10, 5x30/5=6)
so the smaller once are already printed now if i divides n then
we will simply print n/I this will give us the other factor.
And that condition (i! = n/i) is to avoid printing same factors again

*/

#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int i;

    for(i=1; i*i<=n; i++){ //prints the first pair of divisors
        if(n%i == 0){
            cout<<i<<" ";
        }
    }

    for(; i>=1; i--){ //print the second pair of divisor
        if(n%i == 0){
            if(i!=n/i){ //this is not to print 5x5 if the n = 25 and i =5;
                cout<<n/i<<" ";
            }
        }
    }
}