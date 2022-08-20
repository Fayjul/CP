/*
verdict:
date_start:
time:
accepted_time:
massege:

*/


#include<bits/stdc++.h>
using namespace std;

void solve()
{
   //cout << "Allahu Akbar" << endl;
   long long int a,b,ans1=0, ans2=0;

   cin >> a >> b;
   while(a>0)
   {
       ans1 += a;
       a /= 10;
   }
   while(b>0)
   {
       ans2 += b;
       b /= 10;
   }

   cout << ans2-ans1 << endl;

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
