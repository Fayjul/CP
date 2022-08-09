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
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;

    int n, a,b,c, flag=1, length;
    cin >> n;
    vector<int> v(n+10), visite(n+10),va, vb;
    va.push_back(0);
    vb.push_back(0);
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        if(v[a] == 0)
            v[a] = b;
        else
            v[b] = a;
        va.push_back(a);
        vb.push_back(b);
    }
    // cout << "hello" << endl;
    for(int i = 1; i<=n; i++)
    {
        if(v[i] == 0)
        {
            cout << "I am here for " << i << endl;
            for(int j = 1; j<=n; j++)
            {
                if((va[j]== i || vb[j] == i))
                {
                    a = i;
                    if(va[j] == i)
                        b = vb[j];
                    else
                        b=va[j];
                    cout << va[j] << " " << vb[j] << endl;
                    if(va[j] == i)
                        v[i] = vb[j];
                    else
                        v[i] = va[j];
                }
            }
            cout << v[i] << endl;
        }
    }
    for(int i = 1; i<= n; i++)
    {
        a = i;
        b = v[a];
        length=1;
        if(a == b)
            length = 3;
        while(b != i && visite[a] == 0)
        {

            visite[a] == 1;
            a = b;
            b = v[a];
            length++;
            //  cout << "I am here with a =" << a  << " b = " << b << endl;
        }
        if(length%2 == 1 && length != 1)
            flag = 0;
    }
    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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
