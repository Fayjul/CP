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
    int n, m, a,b,c;

    cin >> n >> m;
    vector<int> v(n+10);
    for(int i = 0; i<m; i++)
    {
        cin >> a >> b >> c;
        v[b] = 1;
    }
    for(int i = 1; i<=n;i++)
    {
        if(v[i] == 0)
        {
            a = i;
            break;
        }
    }

    for(int i = 1; i<=n;i++)
    {
        if(i == a)
        {
           continue;
        }
        cout << i << " " << a << endl;
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
