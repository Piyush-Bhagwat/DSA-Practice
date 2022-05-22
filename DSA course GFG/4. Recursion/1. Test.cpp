#include<iostream>
using namespace std;

void func(int n){
    if(n==0) return;

    cout<<n<<endl;
    func(n-1); //function waits to end this function
    cout<<n<<endl;
}

main(){
    func(5);

}