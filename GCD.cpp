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

ll gcd(ll a, ll b)
{
    if(!b){
            return a;
    }
    else{
           return gcd(b, a%b);
    }
}

int main()
{
    FastRead

#ifdef Mfc_Tanzim
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
#endif /// Mfc_Tanzim

    ll t=1, n, k, m, a, b, c, d;
    cin >> t;

    while(t--){
              cin >> a >> b;
              cout << "GCD of " << a << " and " << b << " is : " << gcd(a, b) << endl; /// or cout << __gcd(a, b) << endl;
    }
    return 0;
}
