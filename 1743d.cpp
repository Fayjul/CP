#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl
    int n, a=0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i<n ;i++)
    {
        if(s[i] == '1')
            a = 1;
        if(i == n-1 && a == 0)
        {
            cout << "0" << endl;
            return;
        }
    }
    for(int i = 0; i<n; i++)
        cout << "1";
    cout << endl;


}

int main()
{
    int t=1;


    //cin >> t;
    while(t--)
    {
        solve();
    }
}
