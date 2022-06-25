#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
 
    int n, ans = 9 ;
    cin>>n;
 
    while( n > 9){
        n++;
        while( n % 10 == 0){
            n = n /10;
        }
        ans++;
    }
 
    cout<<ans;
 
}