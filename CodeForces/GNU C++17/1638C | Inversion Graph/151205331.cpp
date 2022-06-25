#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+5;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ma = 0 , cnt = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            ma = max(ma , a[i]);
            if(ma == i+1){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
 
    return 0;
}