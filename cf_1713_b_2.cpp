/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

vector<long long int > v;

bool isAssending(long long int start, long long int endd)
{
    for(int i = start; i<endd; i++)
        if(i+1 != endd)
            if(v[i]>v[i+1])
                return false;

    return true;

}
bool isDessending(long long int start, long long int endd)
{
    for(int i = start; i<endd; i++)
        if(i+1 != endd)
            if(v[i]<v[i+1])
                return false;

    return true;

}

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int a,b,c=0,n,position=0;
    v.clear();
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
        if(a > c)
        {
            position =i;
            c = a;
        }
    }
    // cout << position << " " << isDessending(0,position) << endl;
//    cout << position << endl;
//    cout << isAssending(0,position) << endl;
//    cout << isAssending(position,n) << endl;
//    cout << isDessending(0,position) << endl;
//    cout << isDessending(position,n) << endl;
    if((isAssending(0,position) && isDessending(position,n)) || (isDessending(0,position) && isAssending(position,n)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
20
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
7
1 2 3 4 4 3 2
8
1 2 3 2 3 3 4 5
10
1 2 2 3 3 4 4 3 3 1
10
1 2 2 3 3 4 4 3 3 9


*/
