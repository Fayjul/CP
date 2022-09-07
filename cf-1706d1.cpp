
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
        if(a < mn)
            mn = a;
        if(a > mx)
            mx = a;
    }
    small = min(mn, mx/k);
    //cout << mn << " " << small << endl;
    for(small; small <= mn; small++)
    {
        int big = small;

        for(int j = 0; j<n; j++)
        {

            for(int i = k ; i>0; i--)
            {
                a = v[j]/i;
                if(a >= small && a <= big)
                    break;
                if(a >= big)
                {
                    big = a;
                    break;
                }
            }
        }
        ans = min(ans, big-small);
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
