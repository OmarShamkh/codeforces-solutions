#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, k;
    cin >> n >> k;
    if(!(n%2))
    {
        if(k > n/2) cout << (k - (n/2))*2;
        else cout << k*2 -1;
    }
    else
    {
        if(k > n/2 +1) cout << (k - (n/2 +1))*2;
        else cout << k*2 -1;
    }
    return 0;
}