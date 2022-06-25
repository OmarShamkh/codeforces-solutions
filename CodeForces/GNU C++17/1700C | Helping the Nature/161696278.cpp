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
        ll cost1 = 0  , cost2 = 0;
        for(int i=0; i+1<n; i++){
            if(a[i] < a[i+1]) cost1 += a[i+1] - a[i];
        }
        for(int i=n-2; i>=0; i--){
            if(a[i] > a[i+1]) cost2 += a[i] - a[i+1]; 
        }
        ll tmp = abs(a[n-1] - cost1);
        cout << cost1 + cost2 + tmp << "\n";
 
    }
 
    return 0;
}