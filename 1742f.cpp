#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    string s="a",t="a", x;

    int n, k, a;

    cin >> n ;
    for(int i = 0; i<n; i++)
    {
        cin >> a >> k >> x;
        if(a == 1)
        {
            for(int j = 0; j<k; j++)
                s += x;
            sort(s.begin(),s.end());
        }
        else
        {
            for(int j = 0; j<k; j++)
                t += x;
            sort(t.rbegin(),t.rend());
        }
        //cout << "s = " << s << " t = " << t << endl;
        if(s<t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

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

