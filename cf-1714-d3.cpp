/*
verdict:
date_start:
time:
accepted_time:
massege:

*/



#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int n, k, mod=998244353,a,b,c;

    cin >> n >> k;
    vector<long long int>dp(n+10), ans(n+10);
    dp[0] = 1;
    for(int start = 0; start+k <= n; start += k++)
    {
        vector<long long int > sum(k+10);
        for(int i =start ; i<=n; i++)
        {
            a = dp[i];
            dp[i] = sum[i%k];
            (sum[i%k] += a) %= mod;
            (ans[i] += dp[i]) %= mod;
        }

       // k++;
    }
    for(int i = 1; i<=n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    //cin >> t;
    t=1;
    while(t--)
    {
        solve();
    }
}
