/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int sum=0;
    cin>>t;
    while(t--)
    {
        
       string s;
       long int k;
       cin>>s;
       if(s=="donate")
       {
           cin>>k;
           sum+=k;
       }
       else if (s=="report")
       cout<<sum<<'\n';
    }
	return 0;
}
