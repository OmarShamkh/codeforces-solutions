#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int h1 ,h2 ,m1 ,m2;
    char c ;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int x =h1;
    h1 = h1 +(h2-h1)/2;
    m1 = m1 +(m2-m1)/2;
 
    if((h2-x) %2 !=0){
        m1 = m1 +30;
    }
    if(m1>=60){
        m1 = m1-60;
        h1++;
    }
    if(h1<10) cout<<"0";
    cout<<h1<<":";
    if(m1<10) cout<<"0";
    cout<<m1;
 
    return 0;
}