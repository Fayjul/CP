#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{


    ll n, a, b, c, total =0, mx = 0;
    vector<ll> v;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        total += a;
    }
    for(int i = 0;i<n; i++)
    {
        cin >> b;
        mx = max(mx, b);
        total += b;
    }
    cout << total-mx << endl;


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

