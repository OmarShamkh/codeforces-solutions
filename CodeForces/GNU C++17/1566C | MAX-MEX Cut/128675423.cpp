#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        int ans = 0;
        vector<int> tmp;
        for(int i=0; i<n; i++){
            if(s[i] == '0' && t[i] == '0') tmp.push_back(1);
            else if(s[i] == '1' && t[i] == '1') tmp.push_back(0);
            else tmp.push_back(2);
        }
        for(int i=0; i<n; i++){
            if(tmp[i] == 1){
                if(i+1<n && tmp[i+1] == 0){
                    i++;
                    ans += 2;
                }
                else ans++;
            }
            else if(tmp[i] == 0){
                if(i+1<n && tmp[i+1] == 1){
                    i++;
                    ans += 2;
                }
            }
            else ans += 2;
        }
        cout << ans << "\n";
    }
    
    return 0;
}