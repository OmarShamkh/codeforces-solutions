#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 310;

int main()
{
    INGZzz
    int x; cin >> x;
    
    if(x>=0 && x < 40) cout << 40-x; 
    else if(x >=40 && x < 70) cout << 70-x; 
    else if(x>=70 && x<90) cout << 90-x; 
    else cout << "expert";
    return 0;
}