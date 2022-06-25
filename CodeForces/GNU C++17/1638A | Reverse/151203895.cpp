#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 505;
int a[N];
 
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        int l = 0, r = 0;
        for(int i=1; i<=n; i++){
            if(a[i] != i){
                l = i;
                break;
            }
        }
        for(int i = 1; i<=n; i++){
            if(a[i] == l){
                r = i;
                break;
            }
        }
        reverse(a+l, a+r+1);
        for(int i = 1; i <=n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}