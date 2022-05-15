#include<iostream>
using namespace std;

main(){
    int n = 5;
    int a[] = {1,2,4,5};

    int missing = 0;

    for(int i=1; i<=n; i++){
        missing = missing^i;
    }

    for(int i=0; i<=n; i++){
        missing = missing^a[i];
    }
    cout<<missing;
}