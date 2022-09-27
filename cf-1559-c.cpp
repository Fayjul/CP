
/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void printAns(int i, int n)
{
    for(; i<=n; i++)
    {
        cout << i << " ";
    }
    //cout << endl;
}

void solve()
{
    //cout << "Allahu Akbar" << endl;

    int n, flag = 0, a, b, c;
    vector<int> v;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if(n == 1 && a == 1)
    {
        cout << "2 1" << endl;
        return;
    }
    if(v[n-1] == 0)
    {
        printAns(1,n+1);
        cout << endl;
        return;
    }
    for(int i = 1; i<n; i++)
    {
        if(v[i-1] == 0 && v[i] == 1)
        {
            printAns(1,i);
            cout << n+1 << " ";
            printAns(i+1,n);
            cout << endl;
            return;
        }
        if(i == n-1)
        {
            cout << "-1" << endl;
            return;
        }
    }


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
