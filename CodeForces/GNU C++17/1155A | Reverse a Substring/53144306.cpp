#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    string s ;
    cin>>n>>s;
    int ind ;
    for(int i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
            cout<<"YES"<<endl;
            cout<< i+1 << " "<< i+2;
            return 0;
        }
    }
    cout<<"NO";
}