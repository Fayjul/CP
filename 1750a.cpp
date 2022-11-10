#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, small, a, flag=0;

    cin >> n;

    for(int i=0; i<n;i++)
    {
        cin>> a;
        if(i == 0)
            small = a;
        else if( small > a)
            flag = 1;
        small = min(a, small);

    }
    if(flag == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


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

