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