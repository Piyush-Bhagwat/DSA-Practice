/* Explanation: 
in XOR 
    -> 0 xor anynum is the num itself
    -> n xor n is 0
*/
#include<iostream>
using namespace std;

main(){
    int n = 7;
    int arr[n] = {1, 3, 5, 3, 7, 1, 5};

    int result = 0;

    for(int i=0; i<n; i++){
        result = result ^ arr[i];
    }

    cout<<result;
}