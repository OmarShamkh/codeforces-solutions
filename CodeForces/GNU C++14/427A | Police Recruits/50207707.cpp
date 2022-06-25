#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , c =0 , a=0;
    cin>>n;
    int x;
 
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            a+=x;
        } else if(x<0){
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