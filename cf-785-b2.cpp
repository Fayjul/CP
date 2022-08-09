#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m, a,b,c,ans, inf=pow(10,10), mn, a_n_max, b_n_min, a_m_max, b_m_min;
    vector< long long int > vn,vm;

    mn = ans = inf;
    b_n_min = b_m_min = inf;
    a_n_max = a_m_max = -inf;
    //cout << inf << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        a_n_max = max(a,a_n_max);
        b_n_min = min(b, b_n_min);
    }

    cin >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> a >> b;
        a_m_max = max(a,a_m_max);
        b_m_min = min(b, b_m_min);
    }
    ans = max(a_m_max-b_n_min, a_n_max-b_m_min);
    if(ans < 0)
        cout << "0" << endl;
    else
        cout << ans << endl;

    return 0;
}
