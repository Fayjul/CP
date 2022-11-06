#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    ll n, m, k,palce, a, p, b, ans=0;
    priority_queue<ll> prio;

    cin >> n >> m >> k;
    p = k;
    palce = n*m;
    for(int i = 0; i<p; i++)
    {
        cin >> a;
        if(a == k)
        {
            while(1)
            {
                k--;
                if(prio.size() == 0)
                    break;
                b = prio.top();
                if(b != k)
                    break;
                else
                {
                    prio.pop();
                    palce++;
                    palce = min(palce, n*m);
                }
            }
        }
        else
        {
            prio.push(a);
            palce--;
            if(palce <= (n+m-3))
            {
                ans = 1;
            }
        }
    }
    if(ans)
        cout << "TIDAK" << endl;
    else
        cout << "YA" << endl;

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

