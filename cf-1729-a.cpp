#include<bits/stdc++.h>
using namespace std;



void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int n, ans = 0, a, b, c, x = 0, zero=0;
    vector <long long int> negativ, positiv, va, vb, ans2;

    cin >> n;
    for(int i = 0;i<n; i++)
    {
        cin >> a;
        va.push_back(a);
    }
    for(int i = 0;i<n; i++)
    {
        cin >> b;
        vb.push_back(b);
        a = va[i];
        c = b-a;
        //cout << a << b << c << endl;
        if(c>=0)
            positiv.push_back(c);
        else
            negativ.push_back(c);
    }
    sort(positiv.begin(),positiv.end());
    sort(negativ.begin(), negativ.end());
    int i = 0, j=0;
    while(1)
    {
        if(i == positiv.size() || j == negativ.size())
            break;
        a = positiv[i];
        b = negativ[j];
        if(a+b >= 0)
        {
            i++;
            j++;
            ans++;
        }
        else
        {
            x ++;
            i++;
        }
    }
    //cout << positiv.size() << " " << negativ.size() << endl;
    a = x+positiv.size()-i-1;

    ans += ((a/2)+zero);
    cout << ans << endl;


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
