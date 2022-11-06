#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, a, total=0, x=0;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        if(i%2 == 0)
            total += a;
        else
            total -= a;

    }
    if(total % 2 == 1)
    {
        cout << "-1" << endl;
        return;
    }
    if(total == 0)
    {
        cout << "1" << endl;
        cout << "1 " << n << endl;
        return ;
    }
    else
    {
        cout << "2" << endl;
        cout << "1 " << n-1 << endl;
        cout << n << " "<< n << endl;
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

