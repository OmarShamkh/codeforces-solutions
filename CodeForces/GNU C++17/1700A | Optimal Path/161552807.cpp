#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e4+5;
 
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        // a(ij) = (i-1)*m + j
        ll ans = 0;
        ans += n*(n+1) / 2;
        ans *= m;
        ans += m*(m-1) /2;
 
        cout << ans << "\n";
        
    }
 
    return 0;
}