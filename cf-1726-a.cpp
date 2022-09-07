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
    int n, small=10000, big=0, ans, a, start, endd;
    cin >> n;
    int i = 0;
    while(n--)
    {

        cin >> a;
        if(a > big)
            big =a;
        if(a < small)
            small = a;
        if(n == 0)
            endd = a;
        if(i == 0)
            start = a;
        i++;
    }
    cout << max(endd-small, big-start) << endl;

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
