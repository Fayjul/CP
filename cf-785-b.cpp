#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m, a,b,c,ans, inf=pow(10,10), mn, mx;
    vector< long long int > vn,vm;

    mn = ans = inf;
    mx = -inf;
    //cout << inf << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        mn = min(mn,b);
        mx = max(mx,a);
    }

    cin >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> a >> b;
        if(a >= mn)
        {
            ans = min(ans,a-mn);
        }
        if(b >= )
    }
    if(ans == inf)
        cout << "0" << endl;
    else
        cout << ans << endl;

    return 0;
}
