#include<iostream>
using namespace std;

main(){
    int n = 5;

    long long int ans = 1;

    for(int i=1; i<=n; i++){
        ans *= i;
    }

    cout<<ans;
}