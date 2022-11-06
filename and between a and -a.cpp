
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    //cout << "Allahu Akbar" << endl;
    for(int a = n; a<100; a += a&-a)
    {

        cout << a  << endl;
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
