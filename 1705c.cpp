
#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, c, q, l, r, t;
    vector<char> v;
    char x;

    cin >> n >> c >> q;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i<c; i++)
    {
        cin >> l >> r;
        for(int j = l-1; j<r; j++)
        {
            v.push_back(v[j]);
        }
    }

    for(int i = 0; i<q; i++)
    {
        cin >> t;
        cout << v[t-1] << endl;
    }


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
