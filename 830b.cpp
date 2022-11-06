#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, ans=0, one=0, zero=0, exist;
    string s;
    char c;

    cin >> n;
    cin >> s;
    for(int i =0; i<n; i++)
    {
        if(s[i] == '1')
            one++;
        else
            zero++;
    }
    if(one == n || zero == n)
    {
        cout << ans << endl;
        return;
    }
    for(int i = 0; i<n;i++)
    {
        c = s[i];
        exist = n-i+1;
        if(c == '1')
            one--;
        else
            zero--;
        if(one == exist)
            break;
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
/*

*/

