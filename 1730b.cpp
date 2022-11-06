#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, mx, mn;
    cin >> n;
    vector<ll> x(n+10),t(n+10), mix;



    for(int i = 0; i<n; i++)
        cin >> x[i];
    for(int i = 0 ; i<n; i++)
        cin >> t[i];
    mx = x[0];
    mn = x[0];
    for(int i =0; i<n; i++)
    {
        mix.push_back(x[i]+t[i]);
        mix.push_back(x[i]-t[i]);
        mx = max(mx, x[i]+t[i]);
        mn = min(mn, x[i]-t[i]);
    }

    cout << (mx+mn)/2 ;
    if((mx+mn)%2)
        cout << ".5" << endl;
    else
        cout << endl;

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

