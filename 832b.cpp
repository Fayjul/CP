#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b;

    cin >> n;
    cout << (n+1)/2 << endl;
    a = (n+1)/2;

    for(int i = 0; i<a; i++)
    {
        cout << 3*i+2 << " " << 3*(n-i) << endl;
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

