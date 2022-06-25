#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+5;
int n,m;
char grid[N][N];
bool vis[N][N][4][3];
int dx[]= {0,1,0,-1};
int dy[]= {1,0,-1,0};
bool valid(int x, int y){
    return (x >= 0 && x < n && y >=0 && y < m );
}
bool dfs(int x, int y, int dir, int turn){
    if(!valid(x,y) || turn > 2 || vis[x][y][dir][turn] || grid[x][y] == '*') return 0;
    if(grid[x][y] == 'T') return 1;
    vis[x][y][dir][turn] = 1;
    bool ans = false;
    for(int i=0; i<4; i++){
        int newx = x+dx[i] , newy = y+dy[i];
        ans |= dfs(newx , newy , i , turn + ((i == dir || dir == -1) ? 0 : 1));
    }
    return ans;
}
 
int main()
{
    INGZzz
    cin >> n >> m;
 int x,y;
 for (int i=0; i<n; i++){
  for (int j=0; j<m; j++){
   cin >> grid[i][j];
   if (grid[i][j] == 'S') x = i, y = j;
  }
 }
    cout << (dfs(x, y, -1, 0)? "YES\n": "NO\n");
    return 0;
}