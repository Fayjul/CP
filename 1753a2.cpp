#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, total=0, reserve=0;
    vector<ll> v;
    vector<pair<ll,ll>> vans;

    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> a;
        total += a;
        v.push_back(a);
    }
    if(abs(total) % 2 == 1)
    {
        cout << "-1" << endl;
        return ;
    }

    for(int i = 0; i<n; i++)
    {
        if(v[i] == 0)
        {
            vans.push_back(make_pair(i+1,i+1));
        }
        else{
            if(reserve == 0)
            {
                reserve = v[i];
                vans.push_back(make_pair(i+1,i+1));
            }
            else
            {
                if(reserve == -v[i])
                {
                    reserve = 0;
                    vans.push_back(make_pair(i+1,i+1));
                }
                else
                {
                    reserve = 0;
                    vans[vans.size()-1].second++;
                }
            }
        }
    }
    cout << vans.size() << endl;
    for(int i =0 ; i<vans.size(); i++)
    {
        cout << vans[i].first << " " << vans[i].second << endl;
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
/*
10
7
-1 -1 -1 0 -1 0 1

*/
