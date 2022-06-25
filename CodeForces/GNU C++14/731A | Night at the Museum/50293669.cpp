#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int res =0 , a , b , c;
    char ch = 'a';
 
    for(int i=0;i<s.length();i++){
        a=abs(s[i]-ch);
        b=abs(s[i]-(26+ch));
        c=abs(s[i]+26-ch);
 
        ch=s[i];
 
        res+=min(c,min(a,b));
    }
    cout<<res;
    return 0;
}