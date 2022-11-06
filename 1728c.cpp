#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll digit(ll x)
{
    ll ans=0;
    while(x)
    {
        x /= 10;
        ans++;
    }
    return ans;
}


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, ans=0;
    priority_queue<ll> va, vb;

    cin >> n;

    for(int i = 0;i<n; i++)
    {
        cin >> a;
        va.push(a);
    }
    for(int i = 0; i<n;i++)
    {
        cin >> b;
        vb.push(b);
    }
    while(va.size())
    {
        a = va.top();
        b = vb.top();
        if( a == b)
        {
            va.pop();
            vb.pop();
        }
        else if ( a > b)
        {
            ans++;
            va.pop();
            ll x = digit(a);
            va.push(x);
        }
        else{
            ans++;
            vb.pop();
            ll x = digit(b);
            vb.push(x);
        }
    }
    cout <<ans << endl;


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
