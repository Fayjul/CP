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
    vector<int> addList[n+10], leaf(n+10, true);

    for(int i = 2; i<=n ; i++)
    {
        cin >> a;
        addList[a].push_back(i);
        leaf[a] = false;
    }
    int ans = 0;
    for(int i = 1;i<= n;i++)
    {
        ans = 0;
        if(addList[i].size() == 0)
            continue;
        for(int j = 0;j<addList[i].size(); j++)
        {
            a = addList[i][j];
            if(leaf[a])
                ans++;
        }
        if(ans < 3)
        {
            cout << "No" << endl;
            return ;
        }
    }
    cout << "Yes" << endl;

}

int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}

