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
   long long int n, ans= 0, initial_ans=0, a,b;
   vector<long long int> v;
   string s;

   cin >> n;
   cin >> s;

   for(long long int i = 1; i<=n; i++)
   {
       b = max(i-1, n-i);
       ans += b;
       if(s[i-1] == 'L')
        a = i-1;
       else
        a = n-i;
       initial_ans += a;
       if(b-a > 0)
        v.push_back(b-a);
   }
   sort(v.rbegin(), v.rend());
   for(int i = 0; i<n; i++)
   {
       if(i < v.size())
        initial_ans += v[i];
       cout << initial_ans << " ";
   }
   cout   << endl;

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

