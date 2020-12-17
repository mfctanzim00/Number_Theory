ll fact[mx], inverse[mx];
ll BigMod(ll a, ll b)
{
    a%=mod;
    ll ret=1;
    while(b){
            if(b&1)ret=(ret*a)%mod;
            a=(a*a)%mod;
            b>>=1;
    }
    return ret;
}
 
void pre_calc()
{
    fact[0]=1;
    for(ll i=1; i<mx; i++)
         fact[i]=(i*fact[i-1])%mod;
 
    inverse[mx-1]=BigMod(fact[mx-1], mod-2);
    for(ll i=mx-1; i>=1; i--)
         inverse[i-1]=(i*inverse[i])%mod;
}
 
ll nCr(ll n, ll r)
{
    if(n<r)return 0;
    return fact[n]*(inverse[r]*inverse[n-r]%mod)%mod;
}
