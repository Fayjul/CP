#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long n, ans=0, a, b,c;

    cin >> n;
    vector<long long > v, t(n+10, 0);

    for(int i = 0; i<n ; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = n-1; i>=0; i--)
    {
        for(int x = v[i]; x>0; x -= x&-x)
            ans += t[x];
        for(int x = v[i]; x<=n; x+= x&-x)
            t[x]++;
    }
    cout << ans << endl;

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

