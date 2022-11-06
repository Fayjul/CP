#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long n, ans=0, a;
    vector<long long > v;

    cin >> n;
    for(int i = 0; i<n;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i<n;i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(v[i] >= v[j])
                ans++;
        }
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
