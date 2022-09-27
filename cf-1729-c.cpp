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
    string s;
    long long int n;
    vector<int> v[30];
    vector<int> ans;
    cin >> s;
    n = s.length();

    for(int i = 0; i <n; i++)
    {
        int a = s[i]-'a'+1;
        //cout << a << endl;
        v[a].push_back(i+1);
    }
    int start = s[0]-'a'+1;
    int endd = s[n-1]-'a'+1;
    if(endd >= start)
    {
        for(int i = start; i<= endd; i++)
        {
            for(int j = 0; j<v[i].size(); j++)
                ans.push_back(v[i][j]);
        }
        cout << endd-start << " " << ans.size() << endl;
        for(int i = 0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    else
    {
        for(int i = start; i >= endd; i--)
        {
            for(int j = 0; j<v[i].size(); j++)
                ans.push_back(v[i][j]);
        }
        cout << start-endd << " " << ans.size() << endl;
        for(int i = 0; i<ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
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

