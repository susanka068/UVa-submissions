/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n,r,test=1;
    while(cin>>r>>n)
    { if(r==0 || n==0)
    exit(0);
        int sol;
        float res;
        res = (float)r/n;
        sol = ceil(res);
         if(sol>27)
         cout<<"Case "<<test<<": "<<"impossible"<<'\n';
          else
         cout<<"Case "<<test<<": "<<sol-1<<'\n';
         test++;
    }
	return 0; 
} 
