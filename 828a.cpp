#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, a;
    vector<int> v;
    string s;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> s;
    for(int i = 0; i<n; i++)
    {
        a = v[i];
        for(int j = i+1; j<n; j++)
        {
            if(a == v[j])
            {
                if(s[i] != s[j])
                {
                    cout << "NO" << endl;
                    return ;
                }
            }
        }
    }
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
