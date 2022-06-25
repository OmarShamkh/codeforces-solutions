#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    string s = "";
    for(char i=1; i<=26; i++){
        int x; cin >> x;
        char c = 'a'+x-1;
        s += c;
    }
    cout << s;
    return 0;
}