#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int Y , K , D ;
    cin >> Y >> K ;
    D = max(Y,K);
    D = (6-D) +1 ;
    if(D%2==1){
        if(D==3) cout<<"1/2";
        else printf("%d/6\n",D);
    }
    else {
        if(D==4) cout<<"2/3";
        else  printf("1/%d\n",6/D);
    }
    return 0;
}