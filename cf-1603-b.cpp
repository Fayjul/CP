
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
    long long int x,y, n=1;

    cin >> x >> y;

    if(x <= y)
    {
        cout << y-(y%x)/2 << endl;

    }
    else
    {
        cout << x+y << endl;
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
