#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, x, modValue=1, a;

    cin >> n >> x;
    vector<ll> mod(x+10,0);

    for(int i = 0; i<n; i++)
    {
        cin >> a ;
        mod[a]++;
    }
    for(int i = 1;i<x; i++)
    {
        if(mod[i]%(i+1) != 0)
        {
            cout << "NO" << endl;
            return;
        }
        mod[i+1] += mod[i]/(i+1);
    }
    cout << "YES" << endl;

}

int main()
{
    int t=1;


   // cin >> t;
    while(t--)
    {
        solve();
    }
}
