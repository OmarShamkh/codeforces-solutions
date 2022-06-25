#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N], b[N];
 
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
 
        bool flag = false;
        int cur_odd = 0 , cur_even = 0;
        for(int i=0; i<n; i++){
            if(a[i] % 2 == 1){
                if(a[i] >= cur_odd) cur_odd = a[i];
                else{
                    flag = true;
                    break;
                }
            }
            else if(a[i] % 2 == 0){
                if(a[i] >= cur_even) cur_even = a[i];
                else{
                    flag = true;
                    break;
                }
            }
        }
        cout << (flag ? "NO\n" : "YES\n");
    }
 
    return 0;
}