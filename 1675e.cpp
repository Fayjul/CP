#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve()
{
    //cout << "Allahu Akbar" << endl
    int n, k, x;
    char a,b,c,mx;
    string s;

    cin >> n >> k;
    cin >> s;

    while(1)
    {
        mx = 'a';
        if(k<=0)
            break;
        for(int i = 0; i<n; i++)
        {
            if(s[i] != 'a')
            {
                a = s[i];
                break;
            }
        }
        for(int i = 0; i<n; i++)
        {
            mx = max(mx,s[i]);
            if(mx == s[i] && s[i]>a && s[i]-'a' <= k)
                a = s[i];

        }
        if(mx == 'a')
            break;
        x = min(a-'a',k);
        c = char(a-x);
        for(int i=0; i<n; i++)
        {
            if(s[i]<=a && s[i]>c)
                s[i] = c;
        }
        k-=x;
    }
    cout << s << endl;

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
