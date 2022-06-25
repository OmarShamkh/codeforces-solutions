#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 505;
int n, m, k;
char grid[N][N];
bool vis[N][N];
int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};
bool valid(int x, int y){
    return (x>=0 && x<n && y>=0 && y<m && grid[x][y]!= '#');
}
void dfs(int x, int y){
    if(!valid(x,y)) return;
    vis[x][y] = true;
    for(int i=0; i<4; i++){
        int newx = x+dx[i], newy = y+dy[i];
        if(valid(newx, newy) && !vis[newx][newy]) dfs(newx, newy);
    }
    if(k > 0){
        grid[x][y] = 'X';
        k--;
    }
}
int main()
{
    INGZzz
    cin >> n >> m >> k;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    bool f = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == '.'){
                dfs(i,j);
                f = true;
                break;
            }
            if (f) break;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << grid[i][j];
        }
        cout<<"\n";
    }
    return 0;
}