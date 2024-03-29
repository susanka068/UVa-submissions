    /**************************************
    Author : Susanka Majumder ( bingobong )
    ***************************************/
     
    #ifndef _GLIBCXX_NO_ASSERT
    #include <cassert>
    #endif
    #include <cctype>
    #include <cerrno>
    #include <cfloat>
    #include <ciso646>
    #include <climits>
    #include <clocale>
    #include <cmath>
    #include <csetjmp>
    #include <csignal>
    #include <cstdarg>
    #include <cstddef>
    #include <cstdio>
    #include <cstdlib>
    #include <cstring>
    #include <ctime>
     
    #if __cplusplus >= 201103L
    #include <ccomplex>
    #include <cfenv>
    #include <cinttypes>
    #include <cstdbool>
    #include <cstdint>
    #include <ctgmath>
    #include <cwchar>
    #include <cwctype>
    #endif
     
    // C++
    #include <algorithm>
    #include <bitset>
    #include <complex>
    #include <deque>
    #include <exception>
    #include <fstream>
    #include <functional>
    #include <iomanip>
    #include <ios>
    #include <iosfwd>
    #include <iostream>
    #include <istream>
    #include <iterator>
    #include <limits>
    #include <list>
    #include <locale>
    #include <map>
    #include <memory>
    #include <new>
    #include <numeric>
    #include <ostream>
    #include <queue>
    #include <set>
    #include <sstream>
    #include <stack>
    #include <stdexcept>
    #include <streambuf>
    #include <string>
    #include <typeinfo>
    #include <utility>
    #include <valarray>
    #include <vector>
     
    #if __cplusplus >= 201103L
    #include <array>
    #include <atomic>
    #include <chrono>
    #include <condition_variable>
    #include <forward_list>
    #include <future>
    #include <initializer_list>
    #include <mutex>
    #include <random>
    #include <ratio>
    #include <regex>
    #include <scoped_allocator>
    #include <system_error>
    #include <thread>
    #include <tuple>
    #include <typeindex>
    #include <type_traits>
    #include <unordered_map>
    #include <unordered_set>
    #endif
     
    #include<bits/stdc++.h>
    using namespace std;
     
    /* Template file for Online Algorithmic Competitions */
    /* Typedefs */
        /* Basic types */
        typedef long long           ll;
        typedef long double         ld;
        typedef unsigned long long ull;
        /* STL containers */
        typedef vector <int>    vi;
        typedef vector <ll>     vll;
        typedef pair <int, int> pii;
        typedef pair <ll, ll>   pll;
        typedef vector < pii >  vpii;
        typedef vector < pll >  vpll;
        typedef vector <string> vs;
        typedef vector < vi >   vvi;
        typedef vector < vll >  vvll;
        typedef vector < vpii > vvpii;
        typedef set <int>       si;
    /* Macros */
        /* Loops */
        #define fl(i, a, b)     for(ll i(a); i <= (b); i ++)
        #define rep(i, n)       fl(i, 1, (n))
        #define loop(i, n)      fl(i, 0, (n) - 1)
        #define rfl(i, a, b)    for(int i(a); i >= (b); i --)
        #define rrep(i, n)      rfl(i, (n), 1)
        /* Algorithmic functions */
        #define pow2(x) ((x)*(x))
        #define mod(x, m) ((((x) % (m)) + (m)) % (m))
        #define max3(a, b, c) max(a, max(b, c))
        #define min3(a, b, c) min(a, min(b, c))
        #define srt(v)          sort((v).begin(), (v).end())
        /* STL container methods */
        #define pb              push_back
        #define mp              make_pair
        #define eb              emplace_back
        /* String methods */
        #define dig(i)          (s[i] - '0')
        #define slen(s)         s.length()
        /* Shorthand notations */
        #define fr              first
        #define sc              second
        #define re              return 
        #define sz(x)           ((int) (x).size())
        #define all(x)          (x).begin(), (x).end()
        #define sqr(x)          ((x) * (x))
        #define fill(x, y)      memset(x, y, sizeof(x))
        #define clr(a)          fill(a, 0)
        #define endl            '\n'
        /* Mathematical */
        #define IINF            0x3f3f3f3f
        #define LLINF           1000111000111000111LL
        #define PI              3.14159265358979323
        #define NIL             -1
        /* Debugging purpose */
        #define trace1(x)                cerr << #x << ": " << x << endl
        #define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl
        #define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl
        /* Fast Input Output */
        #define FAST_IO                  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
    /* Constants */
        const ll mod = 1000000007LL;
        const ll MAX = 100010LL;
        const ll INF64 = 1e18+100;
    /* Templates */
    template<class T> T abs(T x) { re x > 0 ? x : -x; }
    template<typename T> T gcd(T a, T b){ if(b == 0) return a; return gcd(b, a % b); }
    template<typename T> T power(T x, T y, ll m = mod){T ans = 1; x %= m; while(y > 0){ if(y & 1LL) ans = (ans * x)%m; y >>= 1LL; x = (x*x)%m; } return ans%m; }
    /* additional*/
    #define tr(c,i) for(typeid((c).begin()) i ( (c).begin()); i != (c).end(); i++)
    #define present(c,x) ((c).find(x) != (c).end())
    #define cpresent(c,x) (find(all(c),x) != (c).end())
  ll memo[MAX],len[MAX];
  ll ackermann(ll x)
  {
    return (x&1)?3*x+1:x/2;
  }
  ll calc(ll x)
  {
    ll cnt = 0;
    while(ackermann(x)!=1)
    {
        cnt++;
        x = ackermann(x);
    }
    return (cnt+1);
  }
  ll func(ll x)
  {
    ll &res = memo[x];
    if(res!= -1)
        return res;
    if(x == 1)
        return res = 0;
    //if(x == 2)
    res = func(ackermann(x)) +1 ;
    return res ;
  }
  void filldp()
  {
    for(ll i=1;i<10000;++i)
    {
        if(memo[i]==-1)
            memo[i] = func(i);
    }
  }
    int main(){

        
       /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        #endif
        */
        FAST_IO;   
        fill(memo,-1); 
        ll x,y;
        while(cin>>x>>y)
        {
            if(x==0 and y==0)
                break;
            ll max = 0 , k ;
            fl(i,x,y)
            {
                if(func(i)>max)
                {
                    max = func(i);
                    k = i ;
                }
            }
           printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",x,y,k,max );
        }
        /*
        #ifndef ONLINE_JUDGE
        cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
        #endif
        */
        return 0;
    }
    
