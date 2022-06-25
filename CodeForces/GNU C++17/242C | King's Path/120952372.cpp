#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
int dx[] = {1, -1, 0,  0, -1, -1,  1, 1};
int dy[] = {0,  0, 1, -1, -1,  1, -1, 1};
int x0, y0, x1, y1, n;
map<pair<int,int> , bool> allowed;
map<pair<int,int> , int> depth;
 
void bfs(){
    queue<pair<int,int>> q;
    depth[{x0,y0}] = 0;
    q.push({x0,y0});
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        int cnt = depth[{r,c}];
        q.pop();
        if(r == x1 && c == y1) break;
        for(int i=0; i<8; i++){
            int x = r + dx[i], y = c + dy[i];
            if(allowed.count({x,y}) && !depth.count({x,y})){
                q.push({x,y});
                depth[{x,y}] = cnt+1;
            }
        }
    }
    cout << (depth.count({x1, y1}) ? depth[{x1, y1}] : -1);
}
int main()
{
    INGZzz
    cin >> x0 >> y0 >> x1 >> y1 >> n;
    while(n--){
        int r,a,b;
        cin >> r >> a >> b;
        for(int j=a; j<=b; j++){
            allowed[{r,j}] = 1;
        }
    }
    bfs();
    return 0;
}