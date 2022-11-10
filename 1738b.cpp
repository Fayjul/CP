#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, k, a,b, c;
    vector<ll> v;

    cin >> n >> k;
    for(int i = 0; i<k; i++)
    {
        cin >> c;
        if(i == 0)
            a = c;
        else
            v.push_back(c-b);
        b = c;
    }
    if(n != k)
        a = ceil(double(a)/double(n-k+1));
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] < a)
        {
            cout << "NO" << endl;
            return ;
        }
        a = v[i];
    }
    cout << "YES" << endl;


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
