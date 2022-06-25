#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((s2[i] == '1') && (s1[i] == '0'))
                ans++;
            else if ((s2[i] == '1' )&& (s1[i] == '1') ||  (s2[i] == '1' )&& (s1[i] == '2'))
            {
                if ( (i) && (s1[i - 1] == '1'))
                {
                    ans++;
                    s1[i - 1] = '2';
                }
                else if( (i <n) && (s1[i+1] == '1'))
                {
                    ans++;
                    s1[i + 1] = '2';
                }
            }
        }    
        cout << ans << "\n";
    }      
 
    return 0;
}