#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, q, a,b,c, total=0, pos=0;
    vector<long long int> v, vtotal, vpos;

    cin >> n >> q;
    vtotal.push_back(0);
    vpos.push_back(0);

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        total += a;
        vtotal.push_back(total);
        pos = max(pos, a);
        vpos.push_back(pos);
    }

    for(int i=0; i<q; i++)
    {
        cin >> a;
        a++;
        b = lower_bound(vpos.begin(), vpos.end(), a) - vpos.begin();
        //cout << b << endl;
        cout << vtotal[b-1] << " ";
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


