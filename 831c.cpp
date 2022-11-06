#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, ans, ans1,ans2, b, c, d;
    vector<ll> v;

    cin >> n;
    for(int i = 0;i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    a = v[0];
    d = v[n-1];
    c = v[1];
    b = v[n-2];
    for(int i = 0; i<n; i++)
    {
        if(v[i] != a)
        {
            d = v[i];
            break;
        }
    }
    ans1 = abs(a-d)+abs(d-c);
    ans = max(ans1, abs(a-c)+abs(a-d));

    for(int i = n-1; i>0; i--)
    {
        if(v[i] != d)
        {
            b = v[i];
            break;
        }
    }
    ans1 = abs(a-d)+abs(d-b);
    ans2 = max(ans1, abs(a-b)+abs(a-d));

    cout << max(ans, ans2) << endl;

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
