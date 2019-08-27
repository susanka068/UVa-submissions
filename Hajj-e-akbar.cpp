/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int count =1;
    string s;
    while(cin>>s)
    {
        if(s=="*")
        exit(0);
        else if(s=="Hajj")
        cout<<"Case "<<count<<": "<<"Hajj-e-Akbar"<<'\n';
        else if(s=="Umrah")
        cout<<"Case "<<count<<": "<<"Hajj-e-Asghar"<<'\n';
        count++;
        
    }
	return 0;
}
