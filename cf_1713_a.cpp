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
    int n,a,b,c, up=0,down=0,left=0,right=0;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a >> b;
        if(a == 0)
        {
            if(b>=0)
                up = max(up,b);
            else
                down = max(down, abs(b));
        }
        else
        {
            if(a>=0)
                left = max(left,a);
            else
                right = max(right, abs(a));
        }
    }
   // cout << up <<down << left << right << endl;
    cout << 2*(up+down+left+right) << endl;
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

