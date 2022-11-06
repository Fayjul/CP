#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, k, a, ans=0, position=1;
    vector<ll> v;

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
        if(i>0)
        {
            if(2*a > v[i-1])
            {
                position++;
                if(position > k)
                    ans++;
            }
            else
                position = 1;
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

*/

