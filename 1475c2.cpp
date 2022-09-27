#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int a,b,k, match=0, ans=0, x, y;

    cin >> a >> b >> k;
    vector<long long int> va, vb, vaa(a+10,0), vbb(b+10,0);
    set<long long int> st;

    for(int i = 0;i<k ;i++)
    {
        cin >> x;
        va.push_back(x);
        vaa[x]++;

    }
    for(int i = 0; i<k;i++)
    {
        cin >> x;
        vb.push_back(x);
        vbb[x]++;
    }
    for(int i = 0; i<k; i++)
    {
        x = va[i];
        y = vb[i];
        //cout << vaa[x] << " " << vbb[y];
        ans += (k-vaa[x]-vbb[y]+1);
    }
    cout << ans/2 << endl;





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


