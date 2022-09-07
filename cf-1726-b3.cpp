/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

vector<int>ans;

void ansPrint(int n)
{
    cout << "YES" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return ;
}
void solve()
{
    ans.clear();
    //cout << "Allahu Akbar" << endl
    int n, k,a=0,b;


    cin >> n >> k;
    if((k < n) || (n%2 == 0 && k%2 == 1))
    {
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i<n; i++)
    {
        ans.push_back(1);
        a++;
    }
    b = k-a;
    if(n%2 == 1)
        ans[n-1]+=b;
    else
    {
        b /= 2;
        ans[n-1] += b;
        ans[n-2] += b;
    }
    ansPrint(n);

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


