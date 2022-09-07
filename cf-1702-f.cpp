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
    map <int,int> mapp;
    map <int,int> :: iterator it;
    int n, a, flag=0;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        while(a%2 == 0)
            a/= 2;
        // cout << a << endl;
        mapp[a]++;
    }
    for( int i = 0; i<n; i++ )
    {
        cin >> a;
        while(a && mapp[a] == 0)
        {
            a /= 2;
        }
        if(a)
            mapp[a]--;
        else
            flag = 1;

    }
    if(flag)
        cout << "NO" << endl;
    else
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

