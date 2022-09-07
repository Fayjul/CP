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
    int n;
    string s1, s2;
    char ss1[120], ss2[120];
    cin >> n;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i<n; i++)
    {
        if(s1[i] == 'G')

            s1[i] = 'B';
        if(s2[i] == 'G')
            s2[i] = 'B';
    }

    if(s1 == s2)
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

