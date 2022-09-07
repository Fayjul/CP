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
    long long int a,b,x, temp;

    cin >> a >> b >> x;
    temp = max(a,b);
    if(x > temp)
    {
        cout << "NO" << endl;
        return ;
    }
    b = min(a,b);
    a = temp;
    while(b > 0)
    {
        if(a == x || b == x)
        {
            cout << "YES" << endl;
            return ;
        }
        if(a > x && b < x)
        {
            long long int defference = a - x;
            if(defference % b == 0 )
            {
                cout << "YES" << endl;
                return ;
            }
            else
            {
                cout << "NO" << endl;
                return ;
            }
        }
        else
        {
            long long int defference = a-b, decrease;
            decrease = defference/b;
            a -= (decrease*b);
        }
        temp = max(b, a-b);
        b = min(b,a-b);
        a = temp;
    }
    cout << "NO" << endl;
    return ;
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

