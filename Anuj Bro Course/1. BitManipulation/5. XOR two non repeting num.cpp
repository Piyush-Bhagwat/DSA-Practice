#include<iostream>
using namespace std;

main(){
    int arr[] = {1, 1, 2, 2, 3, 3, 5, 9};
    int n = 8, res = 0;

    for(int i=0; i<n; i++){
        res = res^arr[i];
    }

    int temp = 6, count=0;
    while(temp>>1){
       
        count++;
    }

    cout<<count;

}