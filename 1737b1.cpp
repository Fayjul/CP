#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long a,b, ans=0,c, l, r;
    set<long long int> st;

    cin >> l >> r;

    a = sqrt(l);
    b = sqrt(r);
    if(a == b)
    {
        c = a*a;
        if(c>=l && c<= r)
            ans++;
        c += a;
        if(c>=l && c<= r)
            ans++;
        c += a;
        if(c>=l && c<= r)
            ans++;
        cout << ans << endl;
        return;
    }
    if(a*a != l)
        a++;
    ans = (b-a)*3;
    a--;
    c = a*a;
    c += a;
    if(c>=l && c<= r)
        ans++;
    c += a;
    if(c>=l && c<= r)
        ans++;
    c = b*b;
    if(c>=l && c<= r)
        ans++;
    c = b*(b+1);
    if(c>=l && c<= r)
        ans++;
    c += b;
    if(c>=l && c<= r)
        ans++;

    cout << ans << endl;

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
8 19
8 20
119 121
1 100000000000000000
1234567891011 1000000000000000000
10 15
9 15
10 16
*/
