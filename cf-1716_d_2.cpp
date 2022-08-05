
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
    long long int n,k,a;
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    cin >> n >> k;
    long long int dp[n+10][n+10]= {0}, ans[n+10]= {0};

    for(int i = 1; i <= n; i++)
    {
        if(i%k == 0)
        {
            dp[i]++;
            for(int j = i+k+1; j <= n; j+= (k+1))
                dp[j]++;
        }
    }
    for(int i = 1; i<= n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;


}

int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}
