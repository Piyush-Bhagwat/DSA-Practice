#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> ar){
    int curCount = 0, Count = 0;

    for(int i=0; i<ar.size(); i++){
        if(ar[i] == 1){
            curCount++;
        }
        else{
            curCount = 0;
        }

        Count = max(Count, curCount);
    }

    return Count;
}

main()
{
    vector<int> a = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1};
    cout << maxConsecutive(a);
    return 0;
}