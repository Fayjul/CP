
/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

bool isCircle(string s, int n)
{
    bool circle = false;
    for(int i = 0; i<n;i++)
    {
        if(s[i] == '>')
            break;
        if(i == n-1)
        {
            return !circle;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '<')
            break;
        if(i == n-1)
        {
            return !circle;
        }
    }
    return circle;
}

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n , ans=0;
    string s;
    char c, c1;

    cin >> n;
    cin >> s;
    if(isCircle(s, n))
    {
        cout << n << endl;
        return ;
    }
    for(int i = 0; i<n; i++)
    {
        c = s[i];
        if(i == 0)
            c1 = s[n-1];
        else
            c1 = s[i-1];
        if(c == '-' || c1 == '-')
            ans++;
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
