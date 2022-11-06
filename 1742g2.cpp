#include<bits/stdc++.h>
using namespace std;

#define lli long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    lli n,a,mx=0,orValue=0;
    vector<lli>v, va, temp, ans;

    cin >> n;
    cin >> mx;

    for(int i = 1;i<n; i++)
    {
        cin >> a;
        if(mx>a)
            v.push_back(a);
        else{
            v.push_back(mx);
            mx = a;
        }
    }
    ans.push_back(mx);
    orValue = mx;
    for(int i = 0; i<n-1; i++)
    {

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

