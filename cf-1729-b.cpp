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
    long long int n, a, b;
    string s;
    vector<char> ans;
    vector<long long int> ans2;

    cin >> n;
    cin >> s;
    for(int i = n-1; i>=0; i--)
    {
        if(s[i] != '0')
        {
            a = s[i]-'0';
            ans2.push_back(a);
        }
        else
        {
            a = s[i-1]-'0';
            b = s[i-2]-'0';
            i -= 2;
            a = b*10+a;
            ans2.push_back(a);
        }
    }
    for(int i =ans2.size()-1; i>=0; i--)
    {
        char c;
        c = ans2[i]+'a'-1;
        ans.push_back(c);

    }
    for(int i =0; i<ans.size(); i++)
        cout << ans[i];
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

