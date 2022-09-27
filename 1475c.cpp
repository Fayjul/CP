#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int a,b,k, match=0, ans=0, x, y;

    cin >> a >> b >> k;
    vector<long long int> va, vb, vaa[a+10], vbb[b+10];
    set<long long int> st;

    for(int i = 0;i<k ;i++)
    {
        cin >> x;
        va.push_back(x);
        vaa[x].push_back(i);

    }
    for(int i = 0; i<k;i++)
    {
        cin >> x;
        vb.push_back(x);
        vbb[x].push_back(i);
    }
    for(int i = 0; i<k; i++)
    {
        x = va[i];
        y = vb[i];

        for(int j = 0;j<vaa[x].size();j++)
        {
            st.insert(vaa[x][j]);
        }
        for(int j = 0; j<vbb[y].size();j++)
            st.insert(vbb[y][j]);
        ans += (k-st.size());
        st.clear();
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

