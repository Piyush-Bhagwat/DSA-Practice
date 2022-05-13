#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a%b == 0){
        return b;
    }

    return GCD(b, a%b); //This is the Euclidean Algorithm
}

main(){

    cout<<GCD(69, 27);

}
