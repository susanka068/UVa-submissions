/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
        int d,u,v;
        cin>>d>>v>>u;
        float t1,t2,tt;
        if(u<v)
        printf("Case %d: can't determine\n",i);
        else
        {
            t1=(float)d/u;
            t2=(float)d/sqrt(u*u-v*v);
            tt=t2-t1;
            printf("Case %d: %.3f\n",i,tt);
        }
    }
	return 0; 
} 
