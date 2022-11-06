#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a,b, c;

    cin >> n;

    cout << (n+1)/2 << " ";

    c = (n-1)/2;
    a = n;
    b = (n-1)/2;

    for(int i =0; i<c;i++)
    {
        cout << a << " " << b << " ";
        a--;
        b--;
    }
    if(n%2 == 0)
        cout << a << endl;
    else
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

