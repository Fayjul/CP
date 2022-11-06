#include<bits/stdc++.h>
using namespace std;

#define lli long long int


void solve()
{
    lli n,a,c,mx=0,orValue=0, temp, pos;
    vector<lli> v;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    c = 31;
    for(int i = 0; i<min(n,c); i++)
    {
        temp = orValue;
        for(int j = 0; j<n; j++)
        {
            if(temp < (orValue|v[j]))
            {
                temp = (orValue|v[j]);
                pos = j;
            }
        }
        if(temp != orValue)
        {
            cout << v[pos] << " ";
            v[pos] = 0;
            orValue = temp;
        }
        else
            break;
    }
    for(int i = 0; i<n; i++)
    {
        if(v[i] != 0)
            cout << v[i] << " ";
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
5
4
1 2 4 8
7
5 1 2 3 4 5 5
2
1 101
6
2 3 4 2 3 4
8
1 4 2 3 4 5 7 1


//
1
6
2 3 4 2 3 4
1
7
5 1 2 3 4 5 5

*/

