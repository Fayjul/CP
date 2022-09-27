#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int n , a;

    vector<int> v;

    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int ans = 20;
        cin >> a;
        for(int j = 0;j<16;j++)
        {
            for(int k = 0; k<16;k++)
            {
                long long int b = (a+j)<<k;
                if(b% 32768 == 0)
                    ans = min(ans,j+k);
            }
        }
        cout << ans << " ";
    }
    cout << endl;

}

int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}

