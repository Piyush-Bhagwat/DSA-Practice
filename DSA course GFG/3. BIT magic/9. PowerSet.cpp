#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void printPowerSet(string s){
    int size = pow(2, s.size());

    for(int i=0; i<size; i++){
        int temp = i;
        int j=0;
        cout<<'"';
        while (temp!=0){
            if(temp & 1) cout<<s[j];

            j++; 
            temp = temp>>1;
        }
        cout<<'"';
        cout<<endl;
    }
}

main(){
    string a = "abc";

    printPowerSet(a);
}