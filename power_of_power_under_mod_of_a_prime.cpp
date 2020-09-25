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

ll bigmod(ll a, ll b, ll c)
{
    /// (a*b)%c = ((a%c)*(b%c))%c;
    if(b==0)
        return 1;
    else if(b&1)
    {
        ll left = a%c;
        ll right = bigmod(a, b-1, c);
        return (left*right)%c;
    }
    else
    {
        ll half = bigmod(a, b/2, c);
        return (half*half)%c;
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

    while(t--)
    {
        cin >> a >> b >> c;
        b = bigmod(b, c, mod-1);
        cout << bigmod(a, b, mod) << endl;
    }
    return 0;
}
