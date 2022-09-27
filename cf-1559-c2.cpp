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
    int n, a;
    vector<int> v;

    cin >> n;
    for(int i = 0; i <n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    if(v[0] == 1)
    {
        cout << n+1 << " ";
        for(int i = 1; i<= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    for(int i = 1; i<n ; i++)
    {
        if(!v[i-1] && v[i])
        {
            for(int j = 1; j<=i; j++)
                cout << j << " ";
            cout << n+1 << " ";
            for(int j = i+1; j<=n; j++)
                cout << j <<" ";
            cout << endl;
            return ;

        }
    }
    for(int i = 1; i<= n+1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return;

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

