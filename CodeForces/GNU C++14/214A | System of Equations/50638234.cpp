#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n, m ;
    cin >> n >> m;
    int  a, b, cntr =0;
 
    for(a = 0; a <= max(n , m); ++a)
    {
        for(b = 0; b <= max(n , m); ++b)
        {
            if(a * a + b == n && a + b * b == m)
                cntr++;
        }
    }
    cout << cntr ;
    return 0;
}