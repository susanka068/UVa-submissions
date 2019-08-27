/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=1;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==5)
        cout<<3<<'\n';
        else if((s[0]=='o' and s[1]=='n') or (s[1]=='n' and s[2]=='e') or (s[0]=='o' and s[2]=='e'))
        cout<<1<<'\n';
        else
        cout<<2<<'\n';
    }
	return 0;
}
