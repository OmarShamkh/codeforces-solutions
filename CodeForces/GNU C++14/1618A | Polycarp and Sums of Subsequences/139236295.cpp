#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
 
const int N = 1e5, OO = 0x3f3f3f3f, mod = 1e9 + 7;
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int a[7];
        for(int i=0; i<7; i++) cin >> a[i];
        if(a[0]+a[1] == a[3] && a[0]+a[2] == a[4] && a[1]+a[2] == a[5] && a[0]+a[1]+a[2] == a[6])
            cout << a[0] << ' ' << a[1] << ' ' << a[2];
        else cout << a[0] << ' ' << a[1] << ' ' << a[3]; 
        cout << "\n";
    }
    
    return 0;
}