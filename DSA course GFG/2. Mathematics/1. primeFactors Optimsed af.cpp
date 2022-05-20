/* Explanation
Here we have separately checked for factors 2 and 3, until the
number is divisible by them, we will print 2 or 3. 
Now we don’t need to check for factors of 2 and 3. So we will check
for remaining numbers which are (5, 7, 11, 13, 17, 19…) 
which are 6 steps and 1 step away. So, we increased I by 6 and
checked for i and i+2 as well. Until they divide number,
we are going to print them. Now after the loop ended if n 
becomes any prime number higher than 3 then we will simply print it.
*/


#include<iostream>
using namespace std;

main(){
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    while(n%2 == 0){ //taking out all the 2
        cout<<"2 ";
        n=n/2;
    }
    while(n%3 == 0){ //take out all the 3
        cout<<"3 ";
        n=n/3;
    }

    for(int i=5; i*i<=n; i+=6){ // after taking out 2 and 3 the only things we need to check are 6 steps away
        while(n%i == 0){
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2) == 0){
            cout<<i+2<<" ";
            n = n/(i+2);
        }
    }

    if(n>3) cout<<n;
}