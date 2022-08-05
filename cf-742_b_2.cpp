/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;
#define cheek cout<<"ok i reached here\n";
#define bug(x) cout << #x << " = " << x<<endl;

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;

    long long int n, k, a,b,c=2e6, ans=0;
    //cout << c <<endl;
    cin >> n >> k;
    vector<long long int> v;
    int number_presence[c+10] = {0};
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
        number_presence[a]++;
    }
    //cheek;
    for(int i = 0; i<n ;i++)
    {
        a = v[i];
        b = a^k;
        ans += number_presence[b];
    }
    ans/=2;
    if(k == 0)
        ans -= (n/2);
    cout << ans << endl;

}

int main()
{
    int t;
    //cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }
}

