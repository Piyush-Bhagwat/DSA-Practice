#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> a, int key, int i, int j){
    int mid = (i+j)/2;
    if(a[mid] == key){
        return mid;
    }
    if(j<=i){
        return -1;
    }

    if(a[mid]<key){
        return binSearch(a, key, mid+1, j);
    }
    else if(a[mid]>key){
        return binSearch(a, key, i, mid-1);
    }
}

main(){
    vector<int> b = {1, 3, 5, 10, 11};

    cout<<binSearch(b, 9, 0, 5);
}