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
        string s;
        cin >> s;
        int cnt0 = 0 , cnt1 = 0 , cnt = 0;
        for(int i=0; i<s.length(); i++){
            cnt0 += s[i] == '0';
            cnt1 += s[i] == '1';
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                cnt++;
                while(s[i] == '0' && i <s.length()){
                    i++;
                }
            }
        }
        if(cnt0 && !cnt1){//0000
            cout << "1\n";
        }
        else if(!cnt0 && cnt1){//11111
            cout << "0\n";
        }
        else {//101
            cout << min(cnt , 2) << "\n";
        }
    }
    
    return 0;
}