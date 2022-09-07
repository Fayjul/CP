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
    int n, a;
    vector<int> va, vb;

    cin >> n ;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        va.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        vb.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {
        if(va[i] != vb[i])
            break;

        if(i == n-1)
        {
            cout << "YES" << endl;
            return ;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(va[i] > vb[i])
        {
            cout << "NO" << endl;
            return ;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(va[i] == vb[i])
            continue;
        if(i == n-1)
        {
            if(vb[i]-vb[0] > 1)
            {
                cout << "NO" << endl;
                return ;
            }
            break;
        }
        if(vb[i]-vb[i+1] > 1)
        {
            cout << "NO" << endl;
            return ;
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

