#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 310;
int n,x,y,a[N],b[N], dp[N][N][N];
int solve(int idx, int xx, int yy){
    if(idx == n){
        if(xx >= x && yy >= y) return 0;
        else return 1e9;
    }
    int &ret = dp[idx][xx][yy];
    if(~ret) return ret;
    return ret = min(solve(idx+1 , min(x,a[idx]+xx), min(y,b[idx]+yy))+1,(solve(idx+1,xx,yy)));
}
int main()
{
    INGZzz
    cin >> n >> x >> y;
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    memset(dp,-1,sizeof dp);
    int ans = solve(0,0,0);
    cout << (ans == 1e9 ? -1 : ans) << "\n";
    return 0;
}