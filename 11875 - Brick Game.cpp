/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int test=1,t;
    cin>>t;
    while(t--)
    { 
        int n,med;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        cin>>a[i];
        med = n/2;
         cout<<"Case "<<test<<": "<<a[med]<<'\n';
         test++;
    }
	return 0; 
} 
