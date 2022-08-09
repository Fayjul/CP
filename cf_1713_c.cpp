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
   // cout << "Bismillah Hir-Rahmanir Rahim" << endl;

   long long int n, a;
   cin >> n;
   vector <long long int > ans(n+10) ;
   a = sqrt(n);
   if(a*a != n)
        a++;
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
   // cout <<a <<endl;
   for(int i = 0; i<n; i++)
   {
       long long int sqr = a*a;
       if(sqr-i < n)
       {
           ans[sqr-i] = i ;
           ans[i] = sqr-i;

       }

   }
   for(int i =0; i<n; i++)
    cout << ans[i] << " ";
   cout << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
