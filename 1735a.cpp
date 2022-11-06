#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b,c;

    cin >> n;
    a = n/3;
    b = (2*n)/3;
    c = min(b-a-1, a-1);
    c = min(n-b-1,c);
    cout << c << endl;

}

int main()
{
    int t=1;
    long long int n = 4*pow(10,4)+7, dp[n] ={0};

    cin >> t;
    while(t--)
    {
        solve();
    }
}

