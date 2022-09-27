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
    long long int n, k, a, ans=0;
    cin >> n >> k;
    vector<long long int> v[k+10];
    for(int i = 0;i<n; i++)
    {
        cin >> a;
        v[i%k].push_back(a);
    }
    for(int i = 0; i<k; i++)
    {
        sort(v[i].rbegin(), v[i].rend());
        ans += v[i][0];
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

