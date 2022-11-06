#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n, mx=0, a, b, ans=-1;

   cin >> n;
   vector<int> v(1010, -1);

   for(int i = 0; i<n;i++)
   {
       cin >> a;
       v[a] = i+1;
       mx = max(a, mx);
   }
   mx = min(mx, 1000)+1;

   for(int i = 1;i<mx; i++)
   {
       if(v[i] != -1)
       {
           for(int j = 1; j<mx;j++)
           {
               if(v[j] != -1)
               {
                   if(__gcd(i,j) == 1)
                    ans = max(ans, v[i]+v[j]);
               }
           }
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

