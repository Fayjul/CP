#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve()
{
    //cout << "Allahu Akbar" << endl
    ll a, b, c, d, x,y,z;
    vector<ll> feca,fecb,mulab;

    cin >> a >> b >> c >> d;

    for(ll i = 1; i*i <= a; i++)
    {
        if(a%i == 0)
        {
            feca.push_back(i);
            if(i*i < a)
                feca.push_back(a/i);
        }
    }
    for(ll i = 1; i*i <= b; i++)
    {
        if(b%i == 0)
        {
            fecb.push_back(i);
            if(i*i < b)
                fecb.push_back(b/i);
        }
    }
    sort(feca.begin(),feca.end());
    sort(fecb.begin(), fecb.end());
    /*
    for(int i = 0; i<feca.size(); i++)
        cout << feca[i] << " ";
    cout << endl;
    for(int i=0; i<fecb.size(); i++)
        cout << fecb[i] << " ";
    cout << endl;
    */

    for(ll i : feca)
    {
        for(ll j: fecb)
        {
            mulab.push_back(i*j);
        }
    }
    sort(mulab.begin(), mulab.end());
    mulab.erase(unique(mulab.begin(),mulab.end()), mulab.end());

    z = a*b;
    for(ll i: mulab)
    {
        x = c/i*i;
        y = d/ (z/i)*(z/i);
        if(x>a && y > b)
        {
            cout << x << " " << y<< endl;
            return;
        }
    }
    cout << "-1 -1" << endl;


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

