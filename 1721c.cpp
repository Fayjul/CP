#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    vector<int> va,vb, vmin,vmax;

    int n, a, b, mn;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a ;
        va.push_back(a);
    }
    mn = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> b;
        vb.push_back(b);
        /*
        while(b<vb[mn])
        {
            mn++;
        }
        cout << vb[mn]-va[i] << " ";
        if(va[i] == vb[mn])
            mn++;
            */
    }
    mn = 0;
    for(int i = 0; i<n; i++)
    {
        while(vb[mn]<va[i])
            mn++;
        cout << vb[mn] - va[i] << " ";
    }
    cout << endl;
    mn = 0;
    for(int i = 0;i<n; i++)
    {
        mn = max(mn, i);
        while(mn+1 < n && vb[mn]>= va[mn+1])
            mn++;
        cout << vb[mn]-va[i] << " ";
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

