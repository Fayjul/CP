#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    int n, a, b, ans=0;

    vector<int> v;

    cin >> n;
    v.push_back(0);
    for(int i = 0; i<n ;i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for(int i = 1; i<=n; i++)
    {
        a = i-1;
        for(int j = 1; j <= i+a; j++)
        {
            if(i+a > n)
                break;
            if(j+a <= n && v[j+a] > j)
                break;
            if(j == i+a)
                ans = a+1;
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
/*
1
4
1 1 2 1
*/
