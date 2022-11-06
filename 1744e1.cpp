#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a,b,c,d,ab, x,ansx=-1, ansy=-1;

    cin >> a >> b >> c >> d;

    ab = a*b;

    for(x = a+1; x <= c ; x++)
    {
        long long int gcd = __gcd(x, ab);
        long long int need = ab/gcd;
        long long int multiple = (b+need)/need;
        ansy = multiple*need;
        if(ansy> b && ansy <= d)
        {
            ansx = x;
            ansy = multiple*need;
            break;
        }
        ansy = -1;
    }
    cout << ansx << " " << ansy << endl;

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

