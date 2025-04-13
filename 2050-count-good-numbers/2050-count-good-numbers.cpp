class Solution {
    #define ll long long
    int evn =5;
    int prime= 4;
    const int MOD= 1e9+7;
    ll binPow(ll x, ll y, int p)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }

    return res;
}

public:
    int countGoodNumbers(long long n) {
        ll evenPos= (n+1)/2;
        ll oddPos= n/2;
        ll ans = ((ll)binPow(evn,evenPos,MOD)* (ll)binPow(prime,oddPos,MOD))%MOD;

        return (int)ans;
    }
};