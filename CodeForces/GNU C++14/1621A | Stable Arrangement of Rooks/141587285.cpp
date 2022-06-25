#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
 
const int N = 1e5;
char grid[41][41];
int main()
{
 
    INGZzz
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        
        if(k > (n+1)/2){
            cout << "-1\n";
            continue;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                grid[i][j] = '.';
            }
        }
        for(int i=0; i<n; i+=2){
            for(int j=0; j<n; j+=2){
                if(i == j && k) grid[i][j] = 'R',k--;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    
    return 0;
}