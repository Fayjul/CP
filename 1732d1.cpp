#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, a, b, x;
    char c;
    set<ll> st;
    map<ll, ll> mp,mp2;

    cin >> n;
    for(int i = 0;i<n; i++)
    {
        //cout << "I am with " << i+1 << endl;
        cin >> c >> a;
        if(c == '+')
            mp[a] = 1;
        else
        {
            b = 1;
            x = a;
            while((mp[mp2[x]+x] == 1))
            {
                mp2[x] += x;
            }
            cout << mp2[x]+x << endl;
        }
    }

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
/*

*/

