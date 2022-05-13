#include <iostream>
#include <array>
#include <vector>

using namespace std;

main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;

    vector<bool> arr;

    for (int i = 0; i < n + 1; i++)  //we make all the values true(prime) exept for 0 and 1 as they are not prime nor notprime
    {
        arr.push_back(true);
    }

    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i*i < n ; i++) //then we go to each num one by one upto root(n)
    {
        for (int j = 2*i; j <= n; j += i) //then all the multiple of the num we are at we mark those false(not prime)
        {
            arr[j] = false;
        }
    }

    cout<<"Prime num: ";
    for (int i = 1; i < n + 1; i++)
    {
        if(arr[i] == true){
            cout<<i<<" ";
        }
    }
}