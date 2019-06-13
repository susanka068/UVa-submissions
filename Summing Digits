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
int sumofdigits(int n)
{
    int sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
double inf = 1.0/0.0;
int main() {
    fio;
    long long n;
   
    while(cin>>n)
    {
         int summ=sumofdigits(n);
        if(n==0)
        exit(0);
      while(summ>9)
      {
          summ=sumofdigits(summ);
      }
      cout<<summ<<'\n';
    }
	return 0;
}
