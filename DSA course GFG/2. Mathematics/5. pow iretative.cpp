#include<iostream>
using namespace std;

double pow(int idx, int n){
    double res = 1;
    while(n>0){
        if(n%2) {
            res = res * idx;
            cout<<n<<": "<<res<<endl;
        }

        idx = idx*idx;
        n = n/2;
    }
    return res;
}

main(){
    cout<<pow(3, 10);
}