#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    if(n == 1 || n == 3)
    {
        cout << "-1" << endl;
        return;
    }
    cout << n << " " << n-1 << " ";
    for(int i = 1;i<n-1; i++)
        cout << i << " ";
    cout << endl;

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

