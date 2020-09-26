/*
      blog: https://codeforces.com/blog/entry/14516
*/
#include<bits/stdc++.h>
#include<cstring>
//#define Mfc_Tanzim
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define all(v) (v.begin(), v.end())
#define pi acos(-1.0)
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define bug(a) cerr << #a << " : " << a << endl
using namespace std;
const ll mod = 1e9+7;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
map<ll, ll>F;

ll fibonacci(ll n)
{
    if (F.count(n))
        return F[n];
    ll k=n/2;
    if (n%2==0)   // n=2*k
        return F[n] = (fibonacci(k)*fibonacci(k) + fibonacci(k-1)*fibonacci(k-1)) % mod;

    else     // n=2*k+1
        return F[n] = (fibonacci(k)*fibonacci(k+1) + fibonacci(k-1)*fibonacci(k)) % mod;
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll n, t=1;
    cin >> n;
    F[0]=F[1]=1;
    cout << (n==0?0: fibonacci(n-1)) << endl;

    return 0;
}

