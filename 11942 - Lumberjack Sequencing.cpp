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
    int n,beards[10],checker[10],checkcheck[10];
    cin>>n;
    cout<<"Lumberjacks:"<<'\n';
    while(n--)
    {
        int count=0,countasc=0;
        for(int i=0;i<10;++i)
        {
        cin>>beards[i];
        checker[i]=beards[i];
        }
        sort(beards,beards+10);
             for(int i=0;i<10;++i)
        {
        checkcheck[i]=beards[i];
        }
        reverse(beards,beards+10);
        for(int i=0;i<10;++i)
        {
            if( checker[i]==beards[i])
            count++;
            if(checker[i]==checkcheck[i])
            countasc++;
        }
      //  cout<<count<<'\n';
        if(count==10 || countasc==10)
        cout<<"Ordered"<<'\n';
        else 
        cout<<"Unordered"<<'\n';
    }
         
	return 0;
}
