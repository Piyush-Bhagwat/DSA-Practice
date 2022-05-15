//xor will give 0 if we xor number with itself

#include<iostream>
using namespace std;

main(){
    int n[] = {1, 2, 3, 2, 1};

    int rep=0;

    for(int i=0; i<5; i++){
        rep = rep^n[i];
    }
    cout<<rep;
}