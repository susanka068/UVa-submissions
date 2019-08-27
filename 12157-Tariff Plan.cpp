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
  freopen("saminput.txt","r",stdin);
  freopen("samoutput.txt","w",stdout);
  #endif
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int n,a,ansmile=0,ansjuice=0;
      cin>>n;
      while(n--)
      {
        cin>>a;
        ansmile+=((int)(a/30)+1)*10;
        ansjuice+=((int)(a/60)+1)*15;
      }
      if(ansmile<ansjuice)
        cout<<"Case "<<i<<": "<<"Mile "<<ansmile<<'\n';
       else if(ansmile>ansjuice)
        cout<<"Case "<<i<<": "<<"Juice "<<ansjuice<<'\n';
       else if(ansmile==ansjuice)
        cout<<"Case "<<i<<": "<<"Mile Juice "<<ansjuice<<'\n';
   //cout<<"hello world"<<'\n';// your code goes here
    }
    

  return 0;
}
