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
    int n,k,r,c;
    cin >> n >> k >> r >> c;

    char ans[n][n] = {'0'};
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if((i+j+2)% k == (r+c)%k)
                ans[i][j] = 'X';
            else
                ans[i][j] = '.';
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j <n; j++)
            cout << ans[i][j];
        cout << endl;
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
