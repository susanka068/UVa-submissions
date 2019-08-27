/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n;
    while(cin>>n)
    { 
       if(n==0)
       exit(0);
       int res = n*(n+1)*(2*n+1)/6;
       cout<<res<<'\n';
    }
	return 0; 
} 
