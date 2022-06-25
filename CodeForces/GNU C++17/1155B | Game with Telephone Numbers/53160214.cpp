#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, cnt=0 , ind ;
    string s;
    cin>>n>>s;
    int turn =(n-11)/2;
    for (int i =0 ; i<n; i++)if (s[i]=='8')
        {
            cnt++;
            if(cnt==turn+1)
            {
                ind=i+1;
            }
        }
 
    if (cnt > turn)
    {
        if (ind > 2*turn +1)
            cout<<"NO";
        else
            cout<<"YES\n";
    }
    else cout<<"NO";
    return 0;
}