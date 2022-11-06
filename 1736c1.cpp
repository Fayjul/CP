#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, c, ans=0;


    cin >> n;
    vector<ll> v(n+2);
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
        v[n-a+1] = i+1;
    }
    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";
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

