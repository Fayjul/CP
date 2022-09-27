/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, a;
    cin >> n;
    vector<int> root(n+10), ans[n+10];
    vector<bool> leaf(n+10, true);
    vector<bool> visited(n+10, false);

    for(int i = 1; i<=n; i++)
    {
        cin >> a;
        root[i] = a;
        leaf[a] = false;
    }
    if(n == 1)
    {
        cout << 1 << endl << 1 << endl << 1;
        return ;
    }
    int color = 0;
    for(int i = 1; i<= n; i++)
    {
        if(!leaf[i])
            continue;
        ans[color].push_back(i);
        a = root[i];
        while(1)
        {
            if(a == root[a] && visited[a] == false)
            {
                ans[color].push_back(a);
                visited[a] = true;
            }
            if(a == root[a] || visited[a] == true)
                break;
            ans[color].push_back(a);
            visited[a] = true;
            a = root[a];
        }
        color++;
    }
    cout << color << endl;
    for(int i =0; i<color ; i++)
    {
        cout << ans[i].size() << endl;
        for(int j = 0; j<ans[i].size(); j++)
            cout << ans[i][j]<< " ";
        cout << endl;
    }
    cout << endl;


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

