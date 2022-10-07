#include<bits/stdc++.h>
using namespace std;

int binSearch(int ar[], int n, int k){
    int i=0, j=n-1;

    while(i<=j){
        int mid = (i+j)/2;
        if(ar[mid] == k){
            return mid;
        }
        else if(ar[mid] < k){
            i = mid+1;
        }
        else{
            j=mid-1;
        }
    
    }
    return -1;
}

main(){
    int a[]={1, 2, 3, 4, 5, 6};
    cout<<binSearch(a, 6, 1);

}