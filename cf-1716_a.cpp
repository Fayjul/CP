/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int a=0,b,c=0,n,ans = 0;
    cin >> n;
    if(n%3 == 0)
        ans = n/3;
    if(n%3 == 2)
        ans = (n/3)+1;
    if(n%3 == 1)
    {
        n -= 4;
        a = max(c,n/3);
        ans = a+2;

    }
    cout << ans << endl;


}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
