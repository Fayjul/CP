#include<bits/stdc++.h>
using namespace std;

void solve()
{

    string a, b;
    int x, y, na, nb;

    cin >> a >> b;
    if(a == b)
    {
        cout << "=" << endl;
        return ;
    }
    na = a.length();
    nb = b.length();
    if(a[na-1] == 'M')
        x = 0;
    else if(a[na-1] == 'S')
        x = -1;
    else
        x = 1;
    if(b[nb-1] == 'M')
        y = 0;
    else if(b[nb-1] == 'S')
        y = -1;
    else
        y = 1;
    if(x > y)
    {
        cout << ">" << endl;
        return;
    }
    else if(x < y)
    {
        cout << "<" << endl;
        return;
    }
    else{
        if(x == -1)
        {
            if(na > nb)
            {
                cout << "<" << endl;
                return;
            }
            else
            {
                cout << ">" << endl;
                return;
            }

        }
        if(x == 1)
        {
            if(na < nb)
            {
                cout << "<" << endl;
                return;
            }
            else
            {
                cout << ">" << endl;
                return;
            }

        }
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
