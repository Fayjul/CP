#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{

    int n, a=0, b;
    string s;

    cin >> n;
    cin >> s;

    for(int i =0; i<n; i++)
    {
        if(s[i] == 'Q')
            a++;
        else
            a = max(a-1,0);
    }
    if(a>0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

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

