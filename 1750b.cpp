#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, total_a=0, total_b=0, max_a=0, max_b=0, a=0, b=0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0')
        {
            total_a ++;
            a++;
            max_a= max(a, max_a);
            b=0;
        }
        else
        {
            total_b ++;
            b++;
            max_b= max(b, max_b);
            a=0;
        }
    }
    ll ans = max(max_a*max_a, max_b*max_b);
    ans = max(ans, total_a*total_b);
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

*/

