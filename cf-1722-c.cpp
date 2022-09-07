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
    int n, a = 0, b = 0, c = 0;
    vector<string> v1, v2, v3;
    string s;
    map < string, int > mp;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        v1.push_back(s);
        mp[s]++;
    }
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        v2.push_back(s);
        mp[s]++;
    }
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        v3.push_back(s);
        mp[s]++;
    }
    for(int i = 0; i<n; i++)
    {
        int x;
        s = v1[i];
        x = mp[s];
        if(x == 1)
            a+=3;
        else if (x == 2)
            a++;
        s = v2[i];
        x = mp[s];
        if(x == 1)
            b+=3;
        else if (x == 2)
            b++;
        s = v3[i];
        x = mp[s];
        if(x == 1)
            c+=3;
        else if (x == 2)
            c++;
    }
    cout << a << " " << b << " " << c << endl;

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

