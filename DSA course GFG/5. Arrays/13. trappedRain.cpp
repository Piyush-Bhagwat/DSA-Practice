#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int trappedRain(vector<int> a){
    int n = a.size(); //no of wall

    int rWall[n], lWall[n], waterLevel, totalWater = 0;

    lWall[0] = a[0];
    rWall[n-1] = a[n-1];
    for(int i=1; i<n; i++){
        lWall[i] = max(lWall[i-1], a[i]);  //Set the right walls for the i'th wall
    }

    for(int i=n-2; i>=0; i--){
        rWall[i] = max(rWall[i+1], a[i]); //sets the left wall for ith wall
    }

    for(int i=1; i<n-1; i++){ //the actual calculations
        waterLevel = min(rWall[i], lWall[i]);
        totalWater += waterLevel - a[i];
    }

    return totalWater;
}

main()
{
    vector<int> a = {3, 1, 5, 3, 2, 4, 1, 2, 4};

    cout<<trappedRain(a);
    return 0;
}