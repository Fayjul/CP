
/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

//#define mod 1e9+7;
const int mod=1e9+7;

void solve()
{
  // cout << "Allahu Akbar" << endl;
 // cout << mod << endl;
    long long n, ans=0,a=1, i=1,b,c;

    cin >> n;

    while(a <= n)
    {
        b = __gcd(a,i);
        a = (a*i)/b;
        //cout << a << endl;
        if(n<a)break;

        ans += (n/a);
        i++;
    }
    cout << (ans+n)%mod << endl;

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
