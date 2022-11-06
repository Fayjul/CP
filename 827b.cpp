#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n, a, b,c;
    vector<int> v;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<n-1; i++)
    {
        if(v[i] == v[i+1])
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
    return ;

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
