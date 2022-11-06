#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, total=0, a, b;
    vector<ll> v;

    cin >> n;
    for(int i = 0; i<n ;i++)
    {
        cin >> a >> b;
        total += (2*(a+b));
        v.push_back(max(a,b));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size()-1; i++)
    {
        total -= 2*v[i];
    }
    cout << total << endl;


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
