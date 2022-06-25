#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+10;
int t,n,m;
vector<int> adj[N];
int dis[N]; 
void bfs(int node){
    for(int i =1; i<=n+1; i++) dis[i] = -1;
    queue<int> q;
    q.push(node);
    dis[node] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(auto child : adj[parent]){
            if(dis[child] == -1){
                dis[child] = dis[parent] +1;
                q.push(child);
            }
        }
    }
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i =1; i<=n; i++) adj[i].clear();
        while(m--){
            int u,v;
            cin >> u >> v ;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1);
        vector<int> even_edges , odd_edges;
        for(int i=1; i<=n; i++){
            if(dis[i] & 1) odd_edges.push_back(i);
            else even_edges.push_back(i);
        }
        if(even_edges.size() > odd_edges.size()){
            cout << odd_edges.size() <<"\n";
            for(auto i : odd_edges) cout << i << ' ';
        }
        else{
            cout << even_edges.size() <<"\n";
            for(auto i : even_edges) cout << i << ' ';
        }
        cout << "\n";
    }
    return 0;
}