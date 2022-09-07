
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
   long long int a,b,c,n,m;

   cin >> n >> m;
   a = max(n,m);
   b = min(n,m);
   if(n == 1 && m == 1)
   {
       cout << "0" << endl;
       return;
   }
   cout << a+2*(b-1) << endl;

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
