#include<iostream>
using namespace std;

void toBin(int n){
    if(n==0) return;

    //we are first getting to 0 and then printing.. cause we usually divide the 
    //num save the remainder and then prints them in reverse order
    toBin(n>>1); //this willget to the next bit
    cout<<(n&1); //this will prin the bit
}

main(){

    toBin(0);

}