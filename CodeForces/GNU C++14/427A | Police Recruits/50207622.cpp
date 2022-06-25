#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , c =0 , a=0;
    cin>>n;
    int x[n];
 
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]>0){
            a+=x[i];
        } else if(x[i]<0){
            if(a>0){
                a--;
            }else{
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}