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
const ll mx = 1e5+9;

ll posx[] = {1,-1, 0, 0};
ll posy[] = {0, 0, 1,-1};
vector<ll>arr;

void Sieve()
{
    bool prime[mx+1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for(ll i=2; i<=mx ; i++){
          if(prime[i]){
                  arr.push_back(i);
                  for(ll j=i*i; j<=mx; j+=(i*2)){
                            prime[j]=false;
                  }
          }
    }
}


void Segmented_Sieve(ll x, ll y)
{
    bool is_Prime[y-x+1];
    memset(is_Prime, true, sizeof(is_Prime));

    if(x==1)
            is_Prime[0] = false;

    for(ll i=0; arr[i]*arr[i]<=y; i++){
              /// ll Prime = arr[i];
              ll base = arr[i]*arr[i];
              if(base<x)
                       base=((x+arr[i]-1)/arr[i])*arr[i];
              for(ll j=base; j<=y; j+=arr[i])
                       is_Prime[j-x] = false;
    }
    ll cnt = 0;
    for(ll i=0; i<=y-x; i++){
            if(is_Prime[i])
                   cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    Sieve();
    ll lower_limit, upper_limit;
    cin >> lower_limit >> upper_limit;
    Segmented_Sieve(lower_limit, upper_limit);

    return 0;
}
