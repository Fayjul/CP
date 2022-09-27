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
    int a,b,c, mx;
    int a1=0,a2=0,a3=0;
    cin >> a >> b >> c;
    mx = max(a,b);
    mx = max(mx,c);

    if((a+b+c)%2 == 1 || mx > (a+b+c-mx))
    {
        cout << "Impossible" << endl;
        return ;
    }

    cout << (a+b-c)/2 << " " << (b+c-a)/2 << " " << (a+c-b)/2 << endl;
}

int main()
{
    int t=1;
   //  cin >> t;
    while(t--)
    {
        solve();
    }
}

