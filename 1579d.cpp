#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, total = 0, big=0;
    cin >> n;
    vector <int> v(n+10);

    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        if(v[i] > v[big])
            big = i;
        total += v[i];
    }
    if(total < 2*v[big])
        v[big] = total - v[big];
    vector<int> ans;
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<v[i];j++)
            ans.push_back(i+1);
    }
    n = ans.size()/2;
    cout << n << endl;
    for(int i = 0;i<n; i++)
    {
        cout << ans[i] << " " << ans[i+n] << endl;
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

