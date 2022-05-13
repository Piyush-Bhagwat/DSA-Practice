/*Explanation: 
    traling 0 is dependent on the num of 5 we get in the series 0 - n;
    like in n=14; we will get 2 5's (5, 10(2x5)) so ans will be 2
    in n=28; we get 6 5's (5, 10, 15, 20, 25(5x5)) so 6 0's 
*/

#include<iostream>
using namespace std;

main(){
    int n =29;
    int ans=0;
    for(int i=5; i<n; i*=5){
        ans += (n/i);
    }

    cout<<ans;
}