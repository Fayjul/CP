#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, c, ans, ans2, ans1, ans3;
    vector<ll> v;
    set<ll> st;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        st.insert(a);
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    a = v[0];
    b = v[n-1];
    c = v[n-2];
    ans = abs(a-b)+abs(b-c);
    c = v[1];
    ans2 = abs(a-b)+abs(b-c);
    ans = min(ans, ans2);
    ans1 = abs(a-b)+abs(a-c);
    ans = max(ans, ans1);
    if(st.size()>2)
    {
        v.clear();
        for(auto x : st)
            v.push_back(x);
        sort(v.begin(), v.end());
        a = min(a,v[0]);
        b = v[v.size()-1];
        c = v[v.size()-2];
        ans2 = abs(a-b)+abs(b-c);
        ans = max(ans, ans2);
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
10
5
3 1 5 2 3
4
17 8 19 45
8
265 265 265 265 265 265 265 265
6
5 5 4 4 3 3
12
2 2 4 2 5 4 2 5 2 2 2 3
14
5 5 4 2 2 2 4 5 5 3 5 5 5 1

*/

