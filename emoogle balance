/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=1;
    int t;
    while(cin>>t)
    {
        int nxz=0;
        if(t==0)
        exit(0);
        int a[t];
        for(int i=0;i<t;i++)
        cin>>a[i];
        sort(a,a+t);
          //for(int i=0;i<t;i++)
        //cout<<a[i]<<" ";
        int i=0;
        while(a[i]==0 and i<t)
        {
            nxz++;
            i++;
        }
        //cout<<t<<" "<<nxz<<'\n';
        cout<<"Case "<<count<<": "<<(t-2*nxz)<<'\n';
        count++;
    }
	return 0;
}
