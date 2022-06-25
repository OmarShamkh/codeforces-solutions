#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    //  Shaass and Oskols
    int n, b[100] , m , x , y ;
    cin>>n; // number of wires
 
    for(int i=0;i<n;i++){
        cin>>b[i];  // number of birds
    }
    cin>>m; // number of shoots
    for(int i=0;i<m;i++){
        cin>>x>>y; // kill yth bird in xth position
        --x;       // to acess array
        if(x!=0){
            b[x-1]+= y-1; // jump up
        }
        if(x!=n-1){
            b[x+1]+= b[x]-y; // jump down
        }
        b[x]=0; // kill the bird (now empty)
 
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<"\n";
    }
    return 0;
}