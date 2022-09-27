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
    long long int n, a, b, c, ans=0, x=0;
    vector<long long int > va, vb, positive, negative;

    cin >> n;
    for(int i = 0; i<n ; i++)
    {
        cin >> a;
        va.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {
        cin >> b ;

        a = va[i];
        c = b-a;
        vb.push_back(c);
    }
    sort(vb.begin(), vb.end());

    for(int i = 0, j = vb.size()-1; i<j;)
    {
        if(vb[i]+vb[j] >= 0)
        {
            ans++;
            i++;
            j--;
        }
        else
            i++;
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
