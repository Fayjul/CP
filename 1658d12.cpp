#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    vector<int> v;
    int l, r, n,a;

    cin >> l >> r;
    n = r-l+1;

    for(int i =0;i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    /*
    for(int i =0;i<n; i++)
        cout << v[i] << " ";
    cout << endl;
    */
    l = l;
    r = n;
    while(l<=r)
    {
        int middle = (l+r)/2;
        vector<int> ans;

        for(int i=l; i<r+1; i++)
        {
            a = v[middle]^i;
            ans.push_back(a);
        }
        sort(ans.begin(), ans.end());
        if(v == ans)
        {
            cout << v[middle] << endl;
            return;
        }
        if(v > ans)
        {
            l = middle+1;
        }
        else
            r = middle-1;
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
