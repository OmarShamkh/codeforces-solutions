#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        int cnt = 0;
        for(int i=1; i+1<n; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                cnt++;
                a[i+1] = max(a[i] , a[i+2]);
            }
        }
        cout << cnt << "\n";
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << "\n";
 
    }
 
    return 0;
}