#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll bs_sqrt(ll x) {
  ll left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;

      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}

void solve()
{
    //cout << "Allahu Akbar" << endl;

    long long int a, b, ans=0, c, d, x;

    cin >> a >> b;
    c = bs_sqrt(a);
    d = bs_sqrt(b);
    if(c == d)
    {
        for(int i = 0; i<3; i++)
        {
            x = (c+i)*c;
            if(x>=a && x <= b)
                ans++;
        }
        cout << ans << endl;
        return;
    }
    else
    {
        ans = (d-c-1)*3;
        for(int i = 0; i<3; i++)
        {
            x = (c+i)*c;
            if(x>=a && x <= b)
                ans++;
        }
        for(int i = 0; i<3; i++)
        {
            x = (d+i)*d;
            if(x>=a && x <= b)
                ans++;
        }
        cout << ans << endl;
        return ;
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
