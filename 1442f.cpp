#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, lenS=0, lenT=0, a, k;
    bool isOtherT = false, isOtherS = false;
    string x;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a >> k >> x;
        if(isOtherT)
        {
            cout << "YES" << endl;
            continue;
        }
        if(a == 1)
        {
            lenS += (k*x.length());
            for(auto c: x)
            {
                if(c != 'a')
                    isOtherS = true;
                if(isOtherS)
                    break;
            }
        }
        else
        {
            lenT += (k*x.length());
            for(auto c: x)
            {
                if(c != 'a')
                    isOtherT = true;
                if(isOtherT)
                    break;
            }
        }
        if(isOtherT)
        {
            cout << "YES" << endl;
        }
        else if(!isOtherS && lenS<lenT)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
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

