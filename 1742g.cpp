#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, mx=0,orValue, pos,temp=0;
    vector<ll>v, ans;

    cin >> n;
    cin >> mx;

    //ans.push_back(mx);
    for(int i = 1; i<n; i++)
    {
        cin >> a;
        if(a<=mx)
            v.push_back(a);
        else
        {
            v.push_back(mx);
            mx = a;
        }
    }
    /*
    sort(v.rbegin(), v.rend());*/
    ans.push_back(mx);
    orValue = mx;
    a = 31;
    for(int i = 0; i<min(n-1, a); i++)
    {

        temp = orValue;
        //cout << "temp start = " << temp << endl;
        for(int j = 0;j<n-1; j++)
        {
            ll xyz = orValue|v[j];
            //cout << "start orvalue = " << orValue << " v[j] = " << v[j] << "orValue|v[j] " << xyz << " temp " << temp << " \n";
            if(xyz>temp)
            {
                temp = orValue|v[j];
                pos = j;
            }
          // cout << "end orvalue = " << orValue << " v[j] = " << v[j] << " temp " << temp << " \n";
        }
        //cout << orValue << " temp = " << temp << " pos = " << pos << endl;
        if(orValue != temp)
        {
            ans.push_back(v[pos]);
            v[pos] = 0;
        }
        else
            break;
    }
    for(int i = 0; i<n-1;i++)
    {
        if(v[i] != 0)
            ans.push_back(v[i]);
    }
    for(int i = 0; i<ans.size(); i++)
        cout << ans[i] << " ";
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
/*
5
4
1 2 4 8
7
5 1 2 3 4 5 5
2
1 101
6
2 3 4 2 3 4
8
1 4 2 3 4 5 7 1


//
1
6
2 3 4 2 3 4
1
7
5 1 2 3 4 5 5

*/
