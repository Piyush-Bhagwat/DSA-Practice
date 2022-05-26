#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void hanoi(int n, char a, char b, char c){
    if(n==1){
        cout<<1<<" --> "<<c<<endl;
        return;
    }

    hanoi(n-1, a, c, b);
    cout<<n<<" --> "<<c<<endl;
    hanoi(n-1, b, a, c);
}

main()
{
    hanoi(3, 'a', 'b', 'c');
    return 0;
}