#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n=-INT_MAX, l, r, a, mx, mn;
    vector<long long int> v;

    cin >> l >> r;
    for(int i = 0;i<(r-l+1); i++)
    {
        cin >> a;
        v.push_back(a);
        if(a > n)
            n = a;
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i<(r-l+1); i++)
    {
        mx = -INT_MAX;
        mn = INT_MAX;

        a = v[i];
        for(int j = 0;j<(r-l+1);j++)
        {
            a = v[i]^v[j];
            if(a > mx)
                mx = a;
            if(a < mn)
                mn = a;

        }
        if( mx == r )
        {
            cout << v[i] << endl;
            return ;
        }
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

