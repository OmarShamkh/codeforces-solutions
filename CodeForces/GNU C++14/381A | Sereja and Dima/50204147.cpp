#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int s =0 , d =0, l =0 , r = n-1;
    bool b = true;
    while(l<=r){
        if(x[l]>=x[r]){
            if(b){
                s+=x[l];
            } else{
            d+=x[l];
            }
            l++;
        }else if(x[l]<x[r]){
            if(b){
                s+=x[r];
            }else{
                d+=x[r];
            }
            r--;
        }
        if(b){
            b=false;
        }else{
            b =true;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}