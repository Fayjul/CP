#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    int n, a, b,c,k, ans=0;

    cin >> n;
    vector<int> v;

    for(int i = 0;i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    v.push_back(0);
    sort(v.begin(),v.end());
    for(int k = 1; k<=(n+1)/2; k++)
    {
        a = 1;
        for(int i = k; i<= (2*k-1); i++)
        {
            if(v[i]>a)
                break;
            if( i== (2*k-1))
                ans = k;
            a++;
        }
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
/*
1
2
1 2

1
2
1 1
*/
