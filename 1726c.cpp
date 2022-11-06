#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, ans;
    string s;

    cin >> n;
    ans = n;

    cin >> s;

    for(int i = 0; i<s.size()-1; i++)
    {
        if((s[i] == '(' && s[i+1] == ')'))
            ans--;
    }
    cout << ans+1 << endl;


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

