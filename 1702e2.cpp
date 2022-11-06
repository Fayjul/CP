#include<bits/stdc++.h>
using namespace std;

map<long long, vector<long long> > mp;
vector <bool> root;

int go(int v)
{
    //cout << mp[v].size() << endl;
    root[v] = true;
    for(auto now : mp[v])
    {
        if(!root[now])
            return go(now)+1;
    }
    return 1;
}

void solve()
{
    //cout << "Allahu Akbar" << endl;

    mp.clear();
    root.clear();

    long long n, a, b, length;
    bool ans = true;

    cin >> n;
    root.resize(n+10, false);

    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
        if(a == b || mp[a].size()>2 || mp[b].size() > 2)
            ans = false;

    }
    if(!ans)
    {

        cout << "NO" << endl;
        return;
    }
    for(int i = 0;i<n;i++)
    {
        if(!root[i+1])
        {
            if(go(i+1)%2)
            {
                cout << "NO" << endl;
                return ;
            }
        }
    }
    cout << "YES" << endl;
    return ;


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

