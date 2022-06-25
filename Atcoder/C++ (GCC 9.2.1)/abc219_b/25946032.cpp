#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 310;

int main()
{
    INGZzz
    string s1,s2,s3,t;
    cin >> s1 >> s2 >> s3 >>t;
    string ans = "";
    for(int i=0; i<t.length(); i++){
        if(t[i] == '1') ans +=s1;
        else if(t[i] == '2') ans +=s2;
        else ans += s3;
    }
    cout << ans ;
    return 0;
}