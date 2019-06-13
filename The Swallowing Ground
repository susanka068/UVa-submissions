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
    while(t--)
    {
      int w;
      cin>>w;
      int y1,y2,diff,count=0,dif[w];
      for(int i=0;i<w;i++)
      {
          cin>>y2>>y1;
          diff=(y2-y1);
          dif[i]=diff;
      }
      sort(dif,dif+w);
      if(dif[0]==dif[w-1])
     cout<<"yes"<<'\n'<<'\n';
      else
      cout<<"no"<<'\n'<<'\n';
    }
	return 0;
}
