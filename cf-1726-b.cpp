/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;
vector<int>v;

int getPowerOf2(int k)
{
    int i = 0, b;
    while(1)
    {
        int a = pow(2,i)-1;
        if(a == k)
            return a;
        if(a > k)
            return b;
        b = a;
    }
}

void ans(int n)
{
    cout << "YES" << endl;
    for(int i = 0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return ;
}
void solve()
{
    //cout << "Allahu Akbar" << endl;

    int n, k, a=1;
    v.clear();

    cin >> n >> k;
    if(n == 1)
    {
        cout << "YES" << endl;
        cout << k << endl;
        return ;
    }
    if((k < n) && (n%2 == 0 && k%2 == 1))
    {
        cout << "NO" << endl;
        return;
    }
    if(n == 2)
    {
        if(k%2 == 0)
        {
            cout << "YES" << endl;
            cout << k/2 << " " << k/2 << endl;
        }
        else
        {
            if(k == 1)
            {
                cout << "NO" << endl;
                return ;
            }
            int powerOf2 = getPowerOf2(k);
            if(powerOf2 == k)
            {
                cout << "NO" << endl;
                return ;
            }
            else
            {
                cout << "YES" << endl;
                cout << k-powerOf2 << powerOf2 << endl;

            }
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

