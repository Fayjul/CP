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
    long long int n, k, b, s;

    cin >> n >> k >> b >> s;
    vector<long long int> ans(n+10);

    long long int lower_limit,upper_limit;

    lower_limit = k*b;
    upper_limit = lower_limit + ((k-1)*n);

    if(s < lower_limit || s > upper_limit)
    {
        cout << "-1" << endl;
        return ;
    }
    ans[0] = lower_limit;
    s -= lower_limit;

    long long int position = 0, added_value;
    while(s > 0)
    {
        added_value = min(k-1, s);
        ans[position] += added_value;
        s -= added_value;
        position++;
    }
    for(int i = 0; i<n; i++)
        cout << ans[i] << " ";
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

/*
10
1 6 3 100
3 6 3 12
3 6 3 19
5 4 7 38
5 4 7 80
99978 1000000000 100000000 1000000000000000000
1 1 0 0
4 1000000000 1000000000 1000000000000000000
7 5 5 40
7 5 5 53
*/

