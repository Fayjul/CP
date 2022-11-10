#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    bool fullEqual=false, fullUnEqual=true;
    ll n;
    string a, b;

    cin >> n >> a >> b;

    if(a == b)
        fullEqual = true;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == b[i])
            fullUnEqual = false;
    }
    if(!(fullEqual || fullUnEqual))
    {
        cout << "NO" << endl;
        return;
    }

    vector<pair<int,int>> ans;
    for(int i = 1; i<n; i++)
    {
        if(b[i] != b[i-1])
        {
            ans.push_back(make_pair(0,i-1));
            swap(fullEqual, fullUnEqual);
        }
    }
    if(b[0] == '1')
    {
        ans.push_back({0,0});
        ans.push_back(make_pair(1,n-1));
    }
    if(fullUnEqual)
        ans.push_back(make_pair(0,n-1));

    cout << "YES" << endl;
    cout << ans.size() << endl;
    for(auto i : ans)
        cout << i.first+1 << " " << i.second+1 << endl;


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

*/

