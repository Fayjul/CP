#include<bits/stdc++.h>
using namespace std;

int n, a,b;
map<int,vector<int>> mp;
set<int> st;
set<int> :: iterator it;
vector<int> root;

int find_root(int p)
{
    if(root[p] == p || root[p] == 0)
        return root[p] = p;
    return root[p] = find_root(root[p]);
}

void solve()
{
    //cout << "Allahu Akbar" << endl;
    mp.clear();
    root.clear();
    st.clear();
    cin >> n;
    root.resize(n+10, 0);
    for(int i = 0; i<n;i++)
    {
        cin >> a >> b;
        a = find_root(a);
        b = find_root(b);
        int x = min(a,b);
        mp[x].push_back(max(a,b));
    }
    for(int i = 0; i<n; i++)
    {
        if(root[i] != 0)
            st.insert(root[i]);
    }
    for(it = st.begin(); it != st.end(); it++)
    {
        int x = *it;
        if(mp[x].size() % 2 == 1)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;


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

