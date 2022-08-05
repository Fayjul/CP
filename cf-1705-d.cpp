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

    long long int n, ans=0, a;
    string s, t;
    vector<int> s_position, t_position;

    cin >> n;
    cin >> s;
    cin >> t;


    for(int i = 0; i<n-1 ; i++)
    {
        if(s[i] != s[i+1])
            s_position.push_back(i);
        if(t[i] != t[i+1])
            t_position.push_back(i);
    }
    //cout << s_position.size() << t_position.size() << endl;
    if(s[0]!= t[0] || s[n-1] != t[n-1] || s_position.size() != t_position.size())
    {
        cout << "-1" << endl;
        return ;
    }
    for(int i = 0; i<s_position.size(); i++)
    {
        a = abs(s_position[i] - t_position[i]);
        ans += a;
    }
    cout <<ans << endl;

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
