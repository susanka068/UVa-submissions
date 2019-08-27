/*******************************************
Author : Susanka Majumder (bingobong)
*******************************************/

#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
double inf = 1.0/0.0;
int main() {
    fio;
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
         int n;
         cin>>n;
         int height[n],highjump=0,lowjump=0;
         for(int i=0;i<n;i++)
         cin>>height[i];
         for(int i=0;i<(n-1);i++)
         {
             if(height[i+1]>height[i])
             highjump++;
             else if(height[i+1]<height[i])
             lowjump++;
         }
         cout<<"Case "<<j<<": "<<highjump<<" "<<lowjump<<'\n';
          
    }
	return 0;
}
