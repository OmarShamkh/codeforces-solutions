#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 310;
map<char,int>mp;
bool comp(string s1, string s2){
    int n = s1.length(),  l = s2.length();
    for(int i=0; i<min(n,l); i++){
        if(mp[s1[i]] < mp[s2[i]]) return true;
        else if(mp[s1[i]] > mp[s2[i]]) return false;
    }
    if(n<l) return true;
    else return false;
}
int main()
{
    INGZzz
    string s; cin >> s;
    for(int i=0; i<s.length(); i++) mp[s[i]] = i;
    int n; cin >> n;
    vector<string>v(n+1);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end(), comp); 
    for(auto i : v) cout << i << "\n";
    return 0;
}