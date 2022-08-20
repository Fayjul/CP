/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, ans=0, gcd=0, a,b,length=0;


    cin >> n;

    vector<long long int> va(n+10), vb(n+10);
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        va[i] = a;
    }
    for(int i = 1; i<n; i++)
    {
        vb[i] = abs(va[i]-va[i-1]);
    }


    for(int i = 1; i<n; i++)
    {
        // cout << "va " << va[i] << " vb " << vb[i] << endl;
        gcd = __gcd(vb[i], gcd);

        if(gcd == 1)
        {
            gcd = length = 0;
            for(int j = i; j>0; j--)
            {
                a = __gcd(gcd,vb[j]);
                if(a > 1)
                {
                    length++;
                    ans = max(length,ans);
                    gcd = a;
                }
                else
                    break;

            }

        }
        else
        {
            length++;
            ans = max(ans,length);
        }
    }
    cout << ans+1 << endl;

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
4
5
1 5 2 4 6
4
8 2 5 10
2
1000 2000
8
465 55 3 54 234 12 45 78
*/
