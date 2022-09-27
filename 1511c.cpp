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
    int n, q, a, ans=0;
    vector<int> v, v1;
    cin >>n >> q;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    for(int i = n-1; i >= 0; i--)
    {
        v.push_back(v1[i]);
    }
    for(int i = 0; i<q; i++)
    {
        cin >> a;
       /* for(int j = 0;j<v.size();j++)
            cout << v[j] << " ";
        cout << endl; */
        for(int j = v.size()-1; j>=0;j--)
        {
            if(v[j] == 0)
                continue;
            ans++;
            if(v[j] == a)
            {
                v[j] = 0;
                cout << ans << " ";
                v.push_back(a);
                ans = 0;
                break;
            }
        }
    }
    cout << endl;

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
