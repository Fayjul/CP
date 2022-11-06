#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    int n, a, b,c=0, ans=0, ans1=0, reserve=0;


    cin >> n;
    vector<int> v(n+10,0);

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v[a] ++;
    }
    ans = v[1];
    for(int i = 2; i<=ans; i++)
    {
        if(v[i] > 1)
            reserve += (v[i]-1);
        if(v[i] == 0 && reserve == 0)
            ans -= 2;
        else if (v[i] == 0 )
            reserve --;

    }

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
