#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    long long int n = 4*pow(10,4)+7, dp[n] = {0}, mod = pow(10,9)+7;
    string a;

    dp[0] = 1;
    for(int i = 1; i<n; i++)
    {
        a =to_string(i);
        if(string(a.rbegin(),a.rend())==a)
        {

            for(int j = i; j<n; j++)
            {
                dp[j] = (dp[j]+dp[j-i])%mod;
            }
        }
    }

    cin >> t;
    while(t--)
    {
        cin >> n ;
        cout << dp[n] << endl;
    }
}

