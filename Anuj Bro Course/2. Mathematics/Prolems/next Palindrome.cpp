#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
    int start, n;
    cin>>start;

    bool got = false;
    n = start+1;


    while(!got){
        int preN = n;
        int curN = n;
        while(n > 0){
            int numOfZero = log10(n) ;
            int firstDigGet = pow(10, numOfZero);

            int firstDig = n/firstDigGet;
            int lastDig = n%10;

            if(firstDig != lastDig){
                cout<<n<<": fail"<<endl;
                // curN++;
                n = ++curN;
                break;
            }

            n = (n%firstDigGet)/10;
        }

        if(preN == curN){
            
            n = preN;
            got = true;
            break;
        }
        
    }
        
    cout<<n<<": success";
}