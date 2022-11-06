#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n, a,b, dif=0, ans=0, a1=0,b1=0;
    vector<int> va,vb;

    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        va.push_back(a);
        if(a == 1)
            a1++;
    }
    for(int i = 0; i<n; i++)
    {
        cin >> b;
        vb.push_back(b);
        if(b == 1)
            b1++;
        if(va[i] != vb[i])
            dif++;
    }
    if(va == vb)
    {
        cout << ans << endl;
        return ;
    }
    if(a1 == b1)
    {
        ans = 1;
        cout << ans << endl;
        return ;
    }
    int change = abs(b1-a1);
    if(dif == change)
    {
        cout << dif << endl;
        return;
    }
    cout << change+1 <<endl;
    return;

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

