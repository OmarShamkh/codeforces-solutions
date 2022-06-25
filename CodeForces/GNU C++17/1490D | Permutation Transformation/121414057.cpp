#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+10;
int n,t , a[N] , ans[N];
void dfs(int l, int r, int d){
    if(l <= r){
        int ma = l;
        for(int i=l; i<=r; i++){
            if(a[i] > a[ma]) ma = i;
        }
        ans[ma] = d;
        dfs(l, ma-1, d+1);
        dfs(ma+1, r, d+1);
    }
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        dfs(0,n-1,0);
        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout <<"\n";
    }
 
    return 0;
}