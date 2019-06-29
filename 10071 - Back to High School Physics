/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/
#include <bits/stdc++.h> 
#define pb push_back 
using namespace std; 
vector<int> v; 
vector<vector<int> > g;
void edge(int a, int b) 
{ 
	g[a].pb(b); 
    g[b].pb(a); 
} 
void bfs(int u,int k) 
{ 
	queue<int> q; 

	q.push(u); 
	v[u] = true; 
    int level=0;
	while (!q.empty() && level<=k)
	{ 

		int f = q.front(); 
		q.pop(); 
		for (auto i : g[f] ) { 
			if (!v[i]) { 
				q.push(i); 
				v[i] = true; 
			} 
		} 
	} 
} 

// Driver code 
int main() 
{ 
    long long a,b;
    while(cin>>a>>b)
    {
	cout<<2*a*b<<'\n';
    }
	return 0; 
} 
