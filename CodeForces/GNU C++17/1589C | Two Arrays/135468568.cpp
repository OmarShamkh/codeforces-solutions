#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef long double ld;
typedef pair<ll,ll> pll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define len(s)   (int)s.length()
#define sz(v)    (int)v.size()
#define all(a)   a.begin(),a.end()
const int N = 105, OO = 0x3f3f3f3f, mod = 1e9 + 7;
int a[N], b[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        bool chk = true;
        for(int i=0; i<n; i++){
            chk &= ((a[i] == b[i]-1) || a[i] == b[i]);
        }
        cout << (chk ? "YES\n" : "NO\n");
    }
    
    return 0;
}