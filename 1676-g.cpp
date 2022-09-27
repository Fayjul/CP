#include<bits/stdc++.h>
using namespace std;



void solve()
{

    //cout << "Allahu Akbar" << endl;
    int n;
    cin >> n;
    int a;
    string s;
    vector<int> v, addList[n+10], root(n+10), value(n+10, 0);
    vector<bool> leaf(n+10, true), visited(n+10, false);
    vector<int> dp(n+10, 0);

    for(int i = 2; i<=n; i++)
    {
        cin >> a;
        root[i] = a;
        leaf[a] = false;
        addList[a].push_back(i);
    }

    cin >> s;

    for(int i = n; i>=1; i--)
    {
        if(s[i-1] == 'B')
            a = 1;
        else
            a = -1;
        value[i] += a;
        value[root[i]] += value[i];

    }

    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        //cout << i << " value " << value[i] << endl;
        if(value[i] == 0)
            ans++;
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

