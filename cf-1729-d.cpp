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
    //cout << "Allahu Akbar" << endl;
    long long int n, a, b, c, ans=0, x=0;
    vector<long long int > va, vb, positive, negative;

    cin >> n;
    for(int i = 0; i<n ; i++)
    {
        cin >> a;
        va.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {
        cin >> b ;
        vb.push_back(b);
        a = va[i];
        c = b-a;
        if(c >=0)
            positive.push_back(c);
        else
            negative.push_back(c);
    }
    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end());


    int i = 0, j= 0;
    while(1)
    {
        if(i == positive.size() || j == negative.size())
            break;
        a = positive[i];
        b = negative[j];
        //cout << a << b << endl;
        if(a+b >= 0)
        {
            ans++;
            i++;
            j++;
        }
        else{
            x ++ ;
            i++;
        }
    }
    a = positive.size()-i;
    x+= a;
    cout << ans+(x/2) << endl;

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
