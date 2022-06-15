#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printFrequencies(vector<int> a){
    int size = a.size();
    int curEle = a[0], freq=1;


    for(int i=1; i<size; i++){

        if(curEle != a[i]){
            cout<<curEle<<": "<<freq<<endl;
            curEle = a[i];
            freq = 1;
        }
        else freq++;
    }

    cout<<curEle<<": "<<freq<<endl;
}

main()
{
    vector<int> n = {10, 10, 10, 12, 18, 18, 19};

    printFrequencies(n);
    return 0;
}