#include<bits/stdc++.h>
using namespace std;

string ans, a,b,c;

void req()
{
    if(cin >> a)
    {
        ans += a;
        if(a == "pair")
        {

            ans += '<';
            req();
            ans+= ',';
            req();
            ans += '>';
        }
    }
    else
    {
        cout << "Error occurred" << endl;
        exit(0);
    }
}
int main()
{
    cin >> a;
    req();
    if(cin >> a)
    {
        cout << "Error occurred" << endl;
        exit(0);
    }
    cout << ans << endl;
}
