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
   long long int n,flag=0, a;

   cin >> n;
   vector<long long int> v(n+1);
   for(int i = 1; i<=n; i++)
   {
       cin >> a;
       v[i] = a;
   }
   for(int i = 1; i<=n; i++)
   {
       a = 0;
       for(int j = 2; j<= i+1; j++)
       {
           if(v[i]%j == 0)
            a++;
           else
           {
               a = 0;
               break;
           }
           if(a == i)
           {
               cout << "NO" << endl;
               return ;
           }
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

