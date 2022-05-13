#include<iostream>
using namespace std;

double pow(int idx, int n){
    double pw=1;

    for(int i=1; i<=n; i++){
        pw*=idx;
    }
    return pw;

}

main(){
    cout<<pow(3, 1);
}