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
    int n, x, y, a;

    cin >> n >> x >> y;
    if(min(x,y) != 0 || max(x,y) == 0 || (n-1) % max(x,y) != 0)
    {
        cout << "-1" << endl;
        return ;
    }
    a = 0;
    int flag = 0;
    for(int i = 2; i<=n; i++)
    {
        a = i;
        for(int j = 0;j<max(x,y);j++)
        {
            cout << a << " ";
            i++;
        }
        i--;
    }
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
/*
10
5 2 0
8 1 2
3 0 0
2 0 1
6 3 0
7 0 1
7 0 2
8 0 7
*/


