#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(vector<int> ar){
    int size = ar.size();

    int curVal, preVal, curCount=1, maxCount=1;

    for(int i=1; i<size; i++){
        preVal = ar[i-1]&1;
        curVal = ar[i]&1;

        if(preVal == curVal){
            curCount = 1;
        }
        else{
            curCount++;
        }
        maxCount = max(maxCount, curCount);
    }

    return maxCount;
}

main()
{
    vector<int> a = {7, 10, 13, 17};
    cout<<maxEvenOdd(a);
    return 0;
}