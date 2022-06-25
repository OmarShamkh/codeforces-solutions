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
        int n,s;
        cin >> n >> s;
        if(n == 1) cout << s << "\n";
        else if(s == 1 && n!= 1) cout << "0\n";
        else{
            n++;
            int x = n/2;
            n-=x;
            cout << s/n << "\n";
        } 
    }
    
    return 0;
}