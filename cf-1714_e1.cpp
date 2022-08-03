/*
verdict:
date_start:Aug/02/2022 10:00 am
time:
accepted_time:
massege:wrong answer expected NO, found YES [727th token]

about all case of 5 and 10 is done;

*/


#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long int n,a,b,c,flag=0, group1=0, group2=0, flag_other=0;
    set<long long int > st;
    set<long long int > :: iterator it;
    //cout << "hello" << endl;
    cin >> n;

    for(int i = 0; i<n; i++)
    {
        cin >> a;
        b = a%10;
        if(b == 0 || b == 5)
        {
            st.insert(a);
            flag = 1;
        }
        if(b == 1 || b == 2 || b == 4 || b == 8)
        {
            flag_other = 1;
            c = a-b;
            if(c%20)
                group1=1;
            else
                group2=1;
        }
        if(b == 3 || b == 6 || b == 7 || b == 9)
        {
            flag_other = 1;
            c = a-b;
            if(c%20)
                group2=1;
            else
                group1=1;
        }
    }
    if(st.size() == 2)
    {
        it = st.begin();
        b = *it;
        it++;
        c = *it;
        flag = c-b;
        if(flag == 5 && flag_other == 0 && c%10 == 0)
        {
            cout << "YES" << endl;
            return ;
        }
    }
    if(st.size() > 2 || flag > 5 || flag+flag_other > 1)
    {
        cout << "NO" << endl;
        return ;
    }
    if(st.size() == 1 && flag_other==0)
    {
        cout << "YES" << endl;
        return ;
    }
    if(group1+group2 > 1)
    {
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
    return ;

    //cout << st.size() << endl;

}

int main()
{
    int t;
    // cout << mx << endl;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
/*
20
2
6 11
3
2 18 22
5
5 10 5 10 5
4
1 2 4 8
2
4 5
3
93 96 102
2
40 6
2
50 30
2
22 44
2
1 5
3
5 10 15
2
10 10
2
10 5
2
10 15
*/
