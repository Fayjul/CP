#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a;
    vector<long long int> v;

    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if(n < 3)
    {
        cout << "YES" << endl;
        return;
    }
    for(int i = 1; i<n-1; i++)
    {
        a = v[i]*v[i];

        if(v[i-1] %a == 0 && v[i+1]%a == 0 && v[i] != 1)
        {
            //cout << i << endl;
            cout << "NO" << endl;
            return;
        }
        if(v[i] == 1 && v[i-1] == v[i+1] && v[i+1] != 1 )
        {
            //cout << i << endl;
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" <<endl;

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
1 1 2 1 1
5
2 1 2 1 1
*/
