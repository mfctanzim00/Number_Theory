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

void prime_factor(ll n)
{
    while(n%2==0){
             cout << 2 << " ";
             n = n/2;
    }
    for(ll i=3; i*i<=n; i+=2){
                 while (n%i == 0){
                              cout << i << " ";
                              n = n/i;
                 }
    }
    if(n>2)
           cout << n << " ";
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
    prime_factor(n);

    return 0;
}
