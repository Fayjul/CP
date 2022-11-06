#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, odd=0, even=0, taken=0;

    cin >> n;

    for(int i = 0; i<n;i++)
    {
        cin >> a;
        if(a%2)
            odd++;
        else
            even++;
    }
    //cout << odd << even << endl;

    taken = (odd+1)/2;
    if(taken%2)
        taken --;
    if(taken + (even+1)/2 >= (n+1)/2)
    {
        cout << "Alice" << endl;
    }
    else
        cout << "Bob" << endl;


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
/*

*/

