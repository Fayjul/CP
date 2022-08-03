/*
verdict:
date_start:
time:
accepted_time:
massege:

about all case of 5 and 10 is done;

*/


#include<bits/stdc++.h>
using namespace std;
#define mx 200007

void solve()
{
    //cout << "Bismillah Hir-Rahmanir Rahim" << endl;
    long long int n,a,b,c, group0 = 0, group1_10=0, group1_20=0, group2_10=0,group2_20=0, min_5 = 99999999999, max_10 = 0;
    set<long long int > st;

    cin >> n ;
    for(int i = 0; i<n ; i++)
    {
        cin >> a;
        b = a%10;
        if(b == 0 || b == 5){
            group0 = 1;
            st.insert(a);

        }

        if(b == 1 || b == 2 || b == 4 || b == 8)
        {
            c = (a-b)%100;
            if(a%20 == 0)
                group1_20 = 1;
            else
                group1_10 = 1;
        }
         if(b == 3 || b == 6 || b == 7 || 9 == 8)
        {
            c = (a-b)%100;
            if(a%20 == 0)
                group2_20 = 1;
            else
                group2_10 = 1;
        }
    }
    if(n == 1 || (st.size() == 1 && (group1_10+group1_20+group2_10+group2_20) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if(st.size() > 2)
    {
        cout << "NO" << endl;
        return ;
    }
    if(st.size() > 0 && ( (group1_10+group1_20+group2_10+group2_20) > 0))
    {
        cout << "NO" << endl;
        return ;

    }
    if(st.size() == 2)
    {
        set<long long int > :: iterator it;
        it = st.begin();
        b = *it;
        it++;
        c = *it;
        if(c-b <= 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return ;
    }

    cout << st.size() << endl;
    //printf("0 = %d, 1= %d, %d, 3 = %d, %d \n", group0, group1_10, group1_20, group2_10, group2_20);
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
*/
