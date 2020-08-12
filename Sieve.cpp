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
const ll mx = 4010;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};

void Sieve(ll n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    prime[0] = prime[1] = false;

    for(ll i=4; i<=n; i+=2)
          prime[i] = false;

    for(ll i=3; i*i<=n; i+=2)
          if(prime[i])
                for(ll j=i*i; j<=n; j+=(i*2))
                        prime[j] = false;

    for(ll i=2; i<=n; i++)
          if(prime[i])
               cout << i << " ";
}
int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll n;
    cin >> n;
    cout << "Following are the prime numbers Less than or equal to " << n << endl;
    Sieve(n);

    return 0;
}
