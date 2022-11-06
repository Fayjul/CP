#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, total=2, win = 1, lose= 0, draw = 1;

    cin >> n;
    for(int i = 4; i<=n; i += 2)
    {
        total = total*2*(i-1)/(i/2);
        win = (total/2)+lose;
        lose = total-win-1;
    }
    cout << win%998244353 << " " << lose%998244353 << " "  << draw << endl;

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

