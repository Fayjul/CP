
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
    // cout << "Allahu Akbar" << endl;
    int n, k, a, b, c, ans=5000, mn = 5000, mx= 0, small;
    vector<int> v;

    cin >> n >> k;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 1;i <= v[0]; i++)
    {
        int current_max = i;
        for(int j = 0;j<n; j++)
        {
            int p = min(k, i ? (v[j]/i):k);
            current_max = max(current_max, v[j]/p);
        }
        ans = min(ans, current_max-i);
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

/*
7
5 2
4 5 6 8 11
5 12
4 5 6 8 11
3 1
2 9 15
7 3
2 3 5 5 6 9 10
6 56
54 286 527 1436 2450 2681
3 95
16 340 2241
2 2
1 3
*/

