/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    //int count=1;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int l,w,h;
        cin>>l>>w>>h;
        if(l<=20 and w<=20 and h<=20)
        cout<<"Case "<<i<<": "<<"good"<<'\n';
        else
        cout<<"Case "<<i<<": "<<"bad"<<'\n';
    }
	return 0;
}
