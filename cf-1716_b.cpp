
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
    int n, a;
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    cin >> n;
    vector<int> v;
    for(int i =0; i<n; i++)
    {
        v.push_back(i+1);
    }
    a = n-1;
    cout << n << endl;
    for(int i = 0; i<n; i++)
    {
        for(int i = 0; i<n; i++)
        {
            if(i != n-1)
                cout << v[i] << " ";
            else
                cout << v[i];
        }
        cout << endl;
        if(a>0)
        {
            swap(v[a], v[a-1]);
            a--;
        }
    }


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
