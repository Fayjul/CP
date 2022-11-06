#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a=1, xor_odd=0, xor_even=0, x=pow(2,31)-1;

    cin >> n;
    vector<ll> v(n+10);

    /*
    if(n == 3)
    {
        cout << "1 3 2\n";
    }
    */

    for(int i = 1; i<=n; i++)
    {
        v[i] = i;
        if(i%2==0)
        {
            xor_even = i^xor_even;

        }
    }
    a = (n+1)/2;
    v[2*a-1] = 0;
    v[2*a-3] = x;
    for(int i = 1 ; i<=n; i+=2)
        xor_odd = xor_odd^v[i];
    v[2*a-1] = xor_even^xor_odd;

    for(int i = 1; i<=n; i++)
        cout << v[i] << " ";
    cout << endl;
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

