#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b, c, odd=0, even =0, total =0, q;

    cin >> n >> q;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        total += a;
        if(a%2)
            odd++;
        else
            even++;
    }
    for(int i =0; i<q; i++)
    {
        cin >> a >> b;
        if(a == 1)
        {
            c = b*odd;
            total+=c;
            if(b%2 == 1)
            {
                even += odd;
                odd =0;
            }

        }
        else
        {
            c = b*even;
            total += c;
            if(b%2 == 1)
            {
                odd += even;
                even = 0;
            }


        }
        cout << total << endl;
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

