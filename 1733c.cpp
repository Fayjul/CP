#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b;

    cin >> n;
    vector<long long int> v;
    vector<pair<int, int>> ans;

    for(int i = 0;i<n;i++)
    {
        cin >>a;
        v.push_back(a);
    }
    if(n == 1)
    {
        a =0;
        cout << a << endl;
        return ;
    }
    ans.push_back({1,n});
    if((v[0]+v[n-1])%2)
    {
        v[n-1] = v[0];

    }
    else
    {
        v[0] = v[n-1];
    }
    for(int i = 1; i<n-1;i++)
    {
        if((v[i]+v[0])% 2)
        {
            ans.push_back({1,i+1});
        }
        else
        ans.push_back({i+1, n});
    }
    cout << ans.size() << endl;
    for(int i = 0; i<ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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
