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
  // cout << "Allahu Akbar" << endl;

  for(int i = 1; i< 1000; i++)
  {
      for(int j = 1; j<1000;j++)
      {
          int ans = (i+j)/((i*j)-1);
          if(ans *((i*j)-1) == (i+j) )
            cout << i << " " << j << " " << ans << endl;
      }
  }

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

