#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, c;
    cin >> n;
    vector<ll> v(n+10);
    vector<bool> dp(n+10,false);

    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }
    dp[0] = true;
    for(int i = 1; i<=n; i++)
    {
        if(i-v[i]>=1 && dp[i-v[i]-1])
            dp[i] = true;
        if(i+v[i] <= n && dp[i-1])
            dp[i+v[i]] = true;

    }
    cout << (dp[n]?"YES":"NO") << endl;

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

