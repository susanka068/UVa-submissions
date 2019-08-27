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
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
    int n,repeat,t,i=0,j=0,count=0;
    cin>>n;
    t=n;
    repeat = n/16+1;
    vector<string> v1,v2={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    string sss;
    while(t--)
    {
    	cin>>sss;
    	v1.push_back(sss);
    }
   while(count<repeat*16)
   {
   	if(i>=n)
   		i=n-i;
   	if(j>=16)
   		j=16-j;
   	cout<<v1[i]<<": "<<v2[j]<<'\n';
    i++;
    j++;
    count++;
   }
	return 0;
}
