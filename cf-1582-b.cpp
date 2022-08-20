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
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b, flag=0, test;

    cin >> n >> a >> b;

    if(a == 1)
    {
        if((n-1)%b == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return ;
    }
    test=1;


    while(test <= n)
    {
        if(test%b == n%b)
        {
            flag = 1;
            break;
        }
        test *= a;
    }
    if(flag)
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
