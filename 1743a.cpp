#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl
    int n, a, ans=0;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
    }
    if(n == 8)
        ans = 6;
    else
    {
        n = 10-n;
        ans = n*(n-1)*3;
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
