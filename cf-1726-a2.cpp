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
   int n, a, b, small=20000, big=0, ans=0, start, endd;
   vector<int> va;

   cin >> n;
   for(int i = 0; i<n; i++)
   {
       cin >> a;
       va.push_back(a);
       if(i == 0)
        start = a;
       if(i == n-1)
        endd = a;
       if(a > big)
        big = a;
       if(a < small)
        small = a;
   }
   for(int i = 1; i<n; i++)
   {
       ans = max(ans, va[i-1]-va[i]);
   }
   int ans2 = max(endd-small, big-start);
   cout << max(ans, ans2) << endl;

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

