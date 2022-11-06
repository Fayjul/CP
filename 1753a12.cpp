#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, total=0, a;
    vector<pair<int,int>> vans;
    vector<int> v;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        total += a;
        v.push_back(a);
    }
    if(total %2 == 1 || n%2 == 1)
    {
        cout << "-1" << endl;
        return;
    }
    for(int i = 0; i<n-1; i+=2)
    {
        if(v[i] == v[i+1])
            vans.push_back(make_pair(i+1,i+2));
        else
        {
            vans.push_back(make_pair(i+1, i+1));
            vans.push_back(make_pair(i+2, i+2));
        }

    }
    cout << vans.size() << endl;
    for (auto it: vans)
    {
        cout << it.first << " " << it.second << endl;
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

*/

