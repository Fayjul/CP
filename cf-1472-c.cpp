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

    long long int n, a, ans = 0, b;
    vector<long long int> v;
    map<long long int, long long int > m;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {
        int j = i;
        b = 0;
        while(j < n)
        {
            if(m[j])
                break;
            if(j > n)
                break;
            m[j] = b;
            b += v[j];
            j = j + v[j];




        }
        ans = max(ans, b);
        //cout << i << " " << ans << endl;
    }
    cout << ans << endl;
    return ;

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

