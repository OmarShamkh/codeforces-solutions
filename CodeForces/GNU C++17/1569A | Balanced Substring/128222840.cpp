#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
 
        int l =-1;
        for(int i=1; i<n; i++){
            if(s[i] == 'a' && s[i-1] == 'b'|| s[i] == 'b' && s[i-1] == 'a'){
                l = i;
                break;
            }
        }
        if(l == -1) cout << "-1 -1\n";
        else cout << l << " " << l+1 << "\n";
        
    }
    
    return 0;
}