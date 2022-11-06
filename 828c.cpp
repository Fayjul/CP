#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b;
    string s;
    char c;

    cin >> n >> c;
    cin >> s;
    vector<long long int> ans(n+10, 0);
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'g')
        {
            b = i;
            break;
        }

    }
    a = 0;
    for(int i = n-1; i>=0; i--)
    {
        b ++;
        if(s[i] == 'g')
        {
            b = 0;
        }
        if(s[i] == c)
        {
            ans[i]  = b;
        }
    }
    for(int i = 0; i<ans.size(); i++)
    {
        a = max(a, ans[i]);
    }
    cout << a << endl;


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

