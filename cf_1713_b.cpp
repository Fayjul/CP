/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;
vector<long long int> v;

bool isAssending()
{
    for(int i = 0; i<v.size()-1; i++)
        if(v[i]>v[i+1])
            return false;

    return true;

}
bool isDessending()
{
    for(int i = 0; i<v.size()-1; i++)
        if(v[i]<v[i+1])
            return false;

    return true;

}

void solve()
{
    long long int n, a,b=0,c=0;
    v.clear();

    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> a;

        v.push_back(a);
    }

    if(isAssending() || isDessending())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

/*
10
4
2 3 5 4
3
1 2 3
4
3 1 3 2
3
3 3 3
4
1 2 3 4
4
4 3 2 1
6
1 2 4 3 4 1

*/

