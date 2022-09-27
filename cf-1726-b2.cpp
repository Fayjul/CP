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
    int n, k,a,b;


    cin >> n >> k;
    if((k < n) || (n%2 == 0 && k%2 == 1))
    {
        cout << "NO" << endl;
        return;
    }
    if(n%2 == 1)
    {
        for(int i = 0; i<n; i++)
        {
            if(i == n-1)
                ans.push_back(k);
            else
                ans.push_back(1);
            k--;
            if(k <= 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        ansPrint(n);
        return;
    }
    else if(n+1 == k)
    {
        cout << "NO" << endl;
        return;
    }
    a = k/n;
    for(int i = 0; i < n; i++)
        ans.push_back(a);
    b = k-(a*n);
    int c = b/2;
    int d = b-c;
    ans[n-1]+= d;
    ans[n-2]+= c;
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

