#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, a, b, c, d, ans=0;
    vector<ll> v;
    set<ll> st;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<n-2; i++)
    {
        ans = max(ans, v[n-1]-v[i]+v[i+1]-v[i]);
    }
    for(int i = 2; i<n; i++)
    {
        ans = max(ans, v[i]-v[0]+v[i]-v[i-1]);
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
10
11
5 2 2 5 2 5 2 2 5 2 2
*/

