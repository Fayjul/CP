#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, b;
    cin >> n;
    vector<int> d, a;

    for(int i = 0; i<n; i++)
    {
        cin >> b;
        d.push_back(b);
    }
    a.push_back(d[0]);
    for(int i = 1; i<n; i++)
    {
        if(a[i-1]>=d[i] && d[i] != 0)
        {
            cout << "-1" << endl;
            return ;
        }
        a.push_back(d[i]+a[i-1]);
    }
    for(int i = 0; i<n;i++)
    {
        cout << a[i] << " ";
    }
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

