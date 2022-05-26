/*Question:
    Given a rope of size n. we need to tell maximun no of pieces we can get of length a, b or c. if all the pices of 
    rope is not of a, b, c return -1
*/

/* Explanation:
    run 3 seprate recursive call for cut of each lenghts(a, b, c). and if the length gets 0 return 0, as we successfully divided the
    rope. and if n get negative we will return -1. if all the three recursive call return -1 we will return -1. relse we will return 
    max of them +1. this will give us the no of pieces

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxOfThree(int a, int b, int c){
    if(a>b){
        if(a<c) return c;
        else return a;
    }
    else {
        if(b>c) return b;
        else return c;
    }
}

int maxPieces(int n, int a, int b, int c){
    if(n==0) return 0;
    if(n<0) return -1;

    int res = maxOfThree(maxPieces(n-a, a, b, c), maxPieces(n-b, a, b, c), maxPieces(n-c, a, b, c));

    if(res==-1) return -1;

    return res+1;
}

main()
{
    cout<<maxPieces(23, 12, 9, 11);
  
    return 0;
}