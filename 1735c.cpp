#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    int n, a,b,c;
    vector<bool> visited(30,0);
    cin >> n;
    vector<char> ans(n+10);
    map<char, char> mp;
    string s;
    char c1, c2;

    cin >> s;

    for(int i =0; i<n; i++)
    {
        c1 = s[i];
        //cout << c1 << endl;
        if(mp[c1])
        {
           // cout << "Iam here" << endl;
            ans[i] = mp[c1];
            continue;
        }
        for(int j =0 ; j<26; j++)
        {
            a = c1-'a';
            if(visited[j] == 0 && j != a)
            {

                visited[j] = 1;
                c2 = 'a'+j;
                ans[i] = c2;
                mp[c1] = c2;
                break;
            }
        }
    }
    for(int i = 0;i<n; i++)
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
/*
5
1
a
2
ba
10
codeforces
26
abcdefghijklmnopqrstuvwxyz
26
abcdefghijklmnopqrstuvwxzy


*/
