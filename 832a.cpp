#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, total = 0;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        total += a;
    }
    cout << abs(total) << endl;

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

