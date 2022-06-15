#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> ar){
    int size = ar.size();
    int maxSum = ar[0];
    int ans = INT_MIN;

    for(int i=1; i<size; i++){
        maxSum = max(maxSum +ar[i], ar[i]);
        ans = max(maxSum, ans);
    }

    return ans;
}

main()
{
    vector<int> n = {-5, 1, -2, 3, -1, 2, -2};
    cout<<maxSubArraySum(n);
    return 0;
}