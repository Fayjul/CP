/*
verdict: Accepted
109th test case.May be little change need;
date_start:2022-08-01 18:24:27

accepted_time:Aug/02/2022 07:03
massege: need to try again

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int n,m,k,a,b,c,total = 0, flag=0;
    vector<long long int> v;

    cin >> n >> m >> k;
    for(int i = 0; i<k; i++)
    {
        cin >> a;
        v.push_back(a);
        b = a/n;
        if(b>1)
            total += b;
        if(b>2)
            flag=1;
    }
    if(total >= m && (m%2 == 0 || flag==1))
    {
        cout << "YES" << endl;
        return;
    }
    total = 0;
    flag = 0;
    for(int i = 0; i<k; i++)
    {
        a = v[i];
        c = a/m;
        if(c > 1)
            total+= c;
        if(c > 2)
            flag = 1;
    }
    if(total >= n && ( n % 2 == 0 || flag == 1) )
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return ;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

