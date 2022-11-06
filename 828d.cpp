#include<bits/stdc++.h>
using namespace std;

vector<long long int> v, binary;

void makeBinary(long long int n)
{
    while(n != 0)
    {
        binary.push_back(n%2);
        n /= 2;
    }
}


void solve()
{
    //cout << "Allahu Akbar" << endl;
    binary.clear();
    v.clear();

    long long int n, a, have2=0, b;

    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> a;
        while(a%2 == 0 && a != 0)
        {
            have2++;
            a/=2;
        }
    }
    if(have2 >= n)
    {
        cout << "0" << endl;
        return;
    }
    for(int i = 1; i<=n ; i++)
    {
        a = i;
        b = 0;
        while(a%2 == 0 && a!= 0)
        {
            b++;
            a /= 2;
        }
        if(b>0)
            v.push_back(b);
    }
    sort(v.rbegin(), v.rend());
    a = 0;
    for( int i = 0; i<v.size(); i++)
    {
        have2 += v[i];
        a++;
        if(have2 >= n)
        {
            cout << a << endl;
            return;
        }
    }
    cout << "-1" << endl;

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
