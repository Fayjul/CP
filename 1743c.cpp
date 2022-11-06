#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl

    long long int n, a, ans=0, reserve=0;
    vector<long long int> v;

    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if(s[0] == '1')
        ans += v[0];
    else
        reserve = v[0];
    for(int i = 1; i<n; i++)
    {
        if(s[i] == '0')
            reserve = v[i];
        else{
            if(s[i-1] == '1')
            {
                ans += max(reserve,v[i]);
                reserve = min(reserve, v[i]);
            }
            else{
                ans += max(reserve, v[i]);
                reserve = min(reserve, v[i]);
            }
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
