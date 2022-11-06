#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, gcd, a, ans=0, gcd2;
    vector<ll> v;

    cin >> n;
    for(int i=0; i<n;i++)
    {
        cin >> a;
        if(i == 0)
            gcd = a;
        gcd = __gcd(a,gcd);
    }
    gcd2 = gcd;
    for(int i = n-1; i>=0; i--)
    {
        if(gcd == 1)
            break;
        gcd2 = __gcd(gcd2,(ll)i+1);
        if( gcd2 == 1)
        {
            ll x = __gcd(gcd,(ll)i+1);
            if(x == 1)
            {
                gcd= 1;
                ans = n-i;
                break;
            }
            ans += (n-i);
            break;
        }
        else
            ans += (n-i);
    }
    cout << ans << endl;



}

int main()
{
    int t=1;


    cin >> t;
    while(t--)
    {
        solve();
    }
}
/*

*/

