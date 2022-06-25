#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    int moves =0;
    int start =0;
 
    for(int i=0;i<str.length();i++){
            int index = str[i] - 97; 
            int walk = abs(start-index);
            if(walk <=13){
                moves+=walk;
            } else if(walk >13){
                moves+= 26-walk;
            }
            start = index;
    }
        cout<<moves;
    return 0;
}