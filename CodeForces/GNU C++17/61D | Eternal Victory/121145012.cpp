#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
vector<vector<pair<int,int> > >adj;
int n;
ll dfs(int node, int parent){
    ll ans = 0;
    for(auto ch : adj[node]){
        int to = ch.first;
        int we = ch.second;
        if(to != parent){
            ans = max(ans , dfs(to , node) + we);
        }
    }
    return ans;
}
int main()
{
    INGZzz
    cin >> n;
    adj = vector<vector<pair<int,int> > >(n+1);
    ll sum = 0;
    for(int i=1; i<n; i++){
        ll u,v,w;
        cin >> u >> v >> w;
        sum += 2*w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    cout << sum - dfs(1,0) << "\n";
    return 0;
}