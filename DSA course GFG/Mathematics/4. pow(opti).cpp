#include<iostream>
using namespace std;

double pow(int idx, int n){
    if(n == 0) return 1;

    if(n%2 == 0) return pow(idx, n/2) * pow(idx, n/2);
    else return pow(idx, n/2) * idx;

}

main(){
    cout<<pow(3, 4);
}