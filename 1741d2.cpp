#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl
    int n, a,b, ans=0;
    vector<int> v, va;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    a = 1;
    while(a<n)
    {
        for(int i = 0; i<n; )
        {
            if(v[i+a-1]> v[i+a])
            {
                ans++;
                for(int j = 0;j<a;j++)
                {
                    va.push_back(v[i+j]);
                    v[i+j] = v[i+j+a];
                }
                for(int j = 0;j<a;j++)
                {
                    v[i+j+a] = va[j];
                }
                va.clear();
            }
            i += 2*a;
        }
        a *= 2;
    }
    for(int i = 1 ; i<n; i++)
    {
        if(v[i-1]>v[i])
        {
            cout << "-1" << endl;
            return;
        }
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

