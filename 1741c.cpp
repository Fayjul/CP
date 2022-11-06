#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, total=0, ans=0,ans1, a, b,c, mx=0;
    vector<long long int> v, va;

    cin >> n;
    ans = n;
    ans1 = n;
    for(int i = 0; i<n ; i++)
    {
        cin >> a;
        v.push_back(a);
        total += a;
        mx = max(mx, a);
    }
    a = total / mx;

    for(int i = 2; i<= a; i++)
    {
        if(total %i == 0)
        {
            b = total/i;
            ans1=0;
            long long int x=0, p=0;
            for(int i = 0;i<n ;i++)
            {
                x += v[i];
                p++;
                if(x == b)
                {
                    ans1 = max(ans1,p);
                    x = 0;
                    p=0;
                }
                if(x > b)
                {
                    ans1=n;
                    break;
                }
            }
        }
        ans = min(ans, ans1);
    }
    cout << ans << endl;


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
