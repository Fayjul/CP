/*
verdict: Wrong answer on test 2
109th test case.May be little change need;
date_start:2022-08-01 18:24:27

accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int n,m,k, even_row = 0, even_col = 0, odd_row=0,odd_col = 0,a,b,c,flag_row= 0, flag_col=0;

    cin >> n >> m >> k;
    for(int i = 0; i<k ; i++)
    {
        cin >> a;
        b = a/n;
        c = a/m;

        if(b > 1)
        {
            odd_row+= b;
            if(b > 2)
                flag_row = 1;
        }
        if(c > 1)
        {
            odd_col+=c;
            if(c > 2)
                flag_col=1;
        }

    }
    if(even_col+odd_col >= n)
    {
        if(n% 2 == 0 || flag_col == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }
    else if(even_row+odd_row >= m)
    {
        if(m % 2 == 0 || flag_row == 1)
            cout << "YES" << endl;
        else
        {

            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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

