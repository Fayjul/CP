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
   int n, a, b,c,d,e;
   string s;
   a = b = c= d = e = 0;

   cin >> n ;
   cin >> s;
   if(n != 5)
   {
       cout << "NO" << endl;
       return ;
   }
   else{
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'T')
            a=1;
        if(s[i] == 'i')
            b=1;
        if(s[i] == 'm')
            c = 1;
        if(s[i] == 'u')
            d = 1;
        if(s[i] == 'r')
            e= 1;
    }
    if(a+b+c+d+e == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
   }

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

