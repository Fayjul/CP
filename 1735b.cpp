#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b, ans=0;
    vector<long long int> v;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    double mn, mx;
    mn = v[0];
    mx = 2*mn;
    for(int i = 0; i<n; i++)
    {
        double p;
        p = v[i];
        a = ceil(p/mx);
        a --;
        ans += a;
    }
    cout << ans << endl;

}

int main()
{
    int t=1;
    long long int n = 4*pow(10,4)+7, dp[n] ={0};

    cin >> t;
    while(t--)
    {
        solve();
    }
}

