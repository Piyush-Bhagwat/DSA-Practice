//this is bit more complicated

#include<iostream>
using namespace std;

void func(int n){
    if(n==0) return;

    func(n-1);
    cout<<n<<endl;
    func(n-1);
}

main(){

    func(3);

}