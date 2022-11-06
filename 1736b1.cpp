#include<bits/stdc++.h>
using namespace std;

long long int lcm(long long int a, long long int b)
{
    return a*b/(__gcd(a,b));
}

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a;


    cin >> n;
    vector<long long int> v(n+3,1), vans(n+3,1);
    for(int i =1; i<=n; i++)
    {
        cin >> v[i];
    }

    for(int i = 1; i<=n; i++)
    {
        vans[i] = lcm(v[i],v[i-1]);
    }
    vans[n+1] = v[n];
    for(int i = 1; i<= n; i++)
    {
        if(__gcd(vans[i],vans[i+1]) != v[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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
5
1 1 2 1 1
5
2 1 2 1 1
*/

