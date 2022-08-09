
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
    // cout << "Bismillah Hir-Rahmanir Rahim" << endl;

    long long int n, a, b, c;
    cin >> n;
    vector <long long int > ans(n+10) ;
    set <long long int > st;
    set <long long int > :: iterator it;
    a = sqrt(n);
    if(a*a != n)
        a++;

    for(int i = n-1; i>=0; i--)
    {

        while(1)
        {
            long long int sqr = a*a;
            b = st.size();
            it = st.end();
            if(sqr-i < n && it == st.find(sqr-i))
            {
                ans[i] = sqr-i;
                st.insert(sqr-i);

            }
            else
                a--;
            if(b != st.size())
                break;

        }

    }
    for(int i =0; i<n; i++)
        cout << ans[i] << " ";
    cout << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
