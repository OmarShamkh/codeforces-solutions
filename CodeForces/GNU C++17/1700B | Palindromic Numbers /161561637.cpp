#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz   cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+1;
int a[N];
int main()
{
    INGZzz
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s[0] != '9'){
            for(int i=0; i<n; i++){
                int tmp = s[i] - '0';
                a[i] = 9 - tmp;
            }   
        }
        else{
            int carry = 0;
            for(int i=n-1; i>=0; i--){
                int tmp = s[i] - '0';
                a[i] = 1 - carry - tmp;
                carry = 0;
                if(a[i] < 0){
                    carry = 1;
                    a[i] += 10;
                }
            } 
        }
        for(int i=0; i<n; i++) cout << a[i];
        cout << "\n";
    }
 
    return 0;
}