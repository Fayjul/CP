#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    // cout << " Allahu Akbar" << endl
    ll n,a, mn=pow(10,9)+100;
    //cout << mn << endl;
    vector<ll> v;

    cin >> n;
    for(int i= 0; i<n; i++)
    {
        cin >> a;
        mn = min(a, mn);
        v.push_back(a);
    }
    if(v[0] == mn)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;


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

