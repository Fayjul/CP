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
    long long int n, k, ans=0, a, defferent, b;

    cin >> n >> k;
    vector < long long int > v(n+10), taken(n+10);

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v[i] = a;
    }
    k++;
    for(int i = 0; i<n; i++)
    {
        if(i == n-1)
        {
            taken[i] = k;
            break;
        }
        defferent = v[i+1]-v[i];
        b = pow(10,defferent)-1;
        a = min(k,b);
        taken[i]  = a;
        k-=a;
        if(k == 0)
            break;
    }
  //  cout << "taken array" << endl;

    for(int i = 0; i<n; i++)
    {
        //cout << taken[i] << " ";
        a = pow(10, v[i]);
        ans += (a*taken[i]);
    }
    //cout << endl;
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

