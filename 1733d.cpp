#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, x, y, diff=0, ans=0, flag=0;
    string s1, s2;
    cin >> n >> x >> y;

    cin >> s1;
    cin >> s2;

    for(int i = 0; i<n; i++)
    {
        if(s1[i] != s2[i])
        {
            diff++;
            if(i != 0)
            {
                if(s1[i-1] != s2[i-1])
                    flag = 1;
            }
        }

    }
    if(diff%2)
    {
        cout << "-1" << endl;
        return ;
    }
    if(diff == 0)
    {
        cout << "0" << endl;
        return ;
    }
    if(n == 2)
    {
        cout << x << endl;
        return;
    }
    if(diff > 2 || flag == 0)
        ans = (diff/2)*y;
    else
        ans = min(x,2*y);
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
