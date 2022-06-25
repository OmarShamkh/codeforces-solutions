#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    int a;
    int b =0;
    int c =0;
    cin>>n;
 
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=b){
         c++;   
        } 
        b=a;
    }
    cout<<c;
 
    return 0;
}