/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a<b)
        cout<<"<"<<'\n';
        else if(a>b)
         cout<<">"<<'\n';
         else if(a==b)
         cout<<"="<<'\n';
        
    }
	// your code goes here
	return 0;
}