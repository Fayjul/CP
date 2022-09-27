#include<bits/stdc++.h>
using namespace std;



void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n;
    cin >> n;
    int a;
    string s;
    vector<int> v, addList[n+10], root(n+10), value(n+10, 0);
    vector<bool> leaf(n+10, true), visited(n+10, false);

    for(int i = 2; i<=n; i++)
    {
        cin >> a;
        root[i] = a;
        leaf[a] = false;
        addList[a].push_back(i);
    }
    root[1] = 1;
    leaf[1] = false;
    cin >> s;

    for(int i = 1; i<=n; i++)
    {
        if(s[i-1] == 'B')
            value[i] = 1;
        else
            value[i] = -1;

    }
    /*
    for(int i = 1; i<=n ; i++)
    {
        cout << i << " " << s[i-1] << " " << value[i] << endl;
    }*/
    for(int i = 1; i<= n; i++)
    {
        if(leaf[i])
        {
            a = root[i];
            int b = i;
            while(1)
            {

                value[a] += (value[b]);
                b = a;
                a = root[a];
                if(a == 1)
                {

                    value[a] += (value[b]);
                    break;

                }

            }
        }
    }
    /*
    for(int i = 1; i<=n ; i++)
    {
        cout << i << " " << s[i-1] << " " << value[i] << endl;
    }
    */
    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        //cout << i << " value " << value[i] << endl;
        if(value[i] == 0)
            ans++;
    }
    cout << ans << endl;
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

