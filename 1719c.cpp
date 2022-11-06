#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, q, k, a, big=0, x=1;

    cin >> n >> q ;

    map<int,int> ans;
    int v[n+10];
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];

    }

    for(int i = 2; i<=n; i++)
    {
        if(v[i]>v[x]) x = i;
        ans[x]++;
    }
    ans[x] = INT_MAX;
    for(int i = 1; i<= q; i++)
    {
        cin >> a >> k;
        k -= max(a-2,0);
        cout << max(min(ans[a], k), 0) << endl;
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

