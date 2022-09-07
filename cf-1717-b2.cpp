
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
    int n,k,r,c;
    cin >> n >> k >> r >> c;

    char ans[n][n] = {'0'};
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
            ans[i][j] = 'a';
    }
    //cout << ans[n-1][n-1];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0;j <n;j++)
            cout << ans[i][j];
        cout << endl;
    }
    ans[r-1][c-1] = 'X';
    for(int x = 1; x<k; x++)
    {
        //cout << "I am here" << endl;
        int i = r-1;
        int j = c-1;
        if(i+x < n)
            ans[i+x][j] = '.';
        if(i-x >= 0)
            ans[i-x][j] = '.';
        if(j+x <n)
            ans[i][j+x] = '.';
        if(j-x >= 0)
            ans[i][j-x] = '.';
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            // cout << "I am here " << ans[i][j] << endl;
            if(ans[i][j] == 'a')
            {
                ans[i][j] = 'X';
                for(int x = 1; x<k; x++)
                {

                   // cout << "I am here " << ans[i][j] << endl;
                    if(i+x < n)
                        ans[i+x][j] = '.';
                    if(i-x >= 0)
                        ans[i-x][j] = '.';
                    if(j+x <n)
                        ans[i][j+x] = '.';
                    if(j-x >= 0)
                        ans[i][j-x] = '.';
                }
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
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

