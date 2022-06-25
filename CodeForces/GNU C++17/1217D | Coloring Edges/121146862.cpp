#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 5e3+10;
vector<int> adj[N];
vector<pair<int,int>> edges;
bool vis[N];
stack<int> st;
int n,m , colors[N];
void dfs(int node){
    vis[node] = true;
    for(auto child : adj[node]){
        if(!vis[child]) dfs(child);
    }
    st.push(node);
}
int main()
{
    INGZzz
    cin >> n >> m;
    for(int i =1; i<=m; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        edges.push_back({x,y});
    }
    for(int i=1; i<=n; i++){
        if(!vis[i]) dfs(i);
    }
    int color = 1;
    while(!st.empty()){
        colors[st.top()] = color++;
        st.pop();
    }
    int k = 1;
    for(auto e : edges){
        if(colors[e.first] > colors[e.second] ){
            k = 2;
        }
    }
    cout << k << "\n";
 
    for(auto e : edges){
        cout << (colors[e.first] > colors[e.second] ? 2 : 1) << ' ';
    }
        
    return 0;
}