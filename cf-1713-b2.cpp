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
    // cout << "Allahu Akbar" << endl;
    long long int a,b,c,l_increase=1,r_decrease=1, n;

    cin >> n;
    vector <long long int > v(n+10);
    for(int i = 1; i<=n; i++)
    {
        cin >> a;
        v[i] = a;
    }
    while(l_increase < n && v[l_increase] <= v[l_increase+1])
        l_increase++;
    while(r_decrease < n && v[n-r_decrease] >= v[n-r_decrease+1])
        r_decrease++;
    if(l_increase+r_decrease >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


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

