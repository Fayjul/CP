#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int isSame(string s1, string s2)
{
    int flag = 0;
    if(s1 == s2)
        return 1;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] == s2[i])
            return -1;
    }
    return 0;
}

void solve()
{
    //cout << "Allahu Akbar" << endl

    ll n, a, b, c, start=0, endd;
    string s1, s2;
    vector<pair<int,int>> v;

    cin >> n;
    cin >> s1;
    cin >> s2;


    for(int i = 1; i<n; i++)
    {
        if(s1[i] != s1[i-1])
        {
            v.push_back(make_pair(start, i-1));
            start = i;
        }
        if( i == n-1)
            v.push_back(make_pair(start,i));
    }
    /*
    for(int i = 0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
        */
    if(v.size() > 3)
    {
        cout << "NO" << endl;
        return;
    }
    if(isSame(s1,s2) == -1)
    {
        cout << "NO" << endl;
        return;
    }
    if(v.size() == 3)
    {
        // cout << "waiting" << endl;
        if(isSame(s1,s2) == -1)
        {
            cout << "NO" << endl;
            return;
        }
        else if(isSame(s1,s2)==0)
        {
            if(s1[0] == '1')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << "1" << endl;
                cout << v[1].first+1 << " " << v[1].second+1<< endl;
            }
        }
        else{
            cout << "NO" << endl;
            return;
        }
        return;
    }
    else if(v.size() == 2)
    {
        if(isSame(s1,s2) == -1)
        {
            cout << "NO" << endl;
            return;
        }
        else if(s1 == s2)
        {
            cout << "YES" << endl;
            cout << "2" << endl;
            cout << "1 " << n << endl;
            if(s1[0] == '0')
                cout << v[0].first+1 << " " << v[0].second+1 << endl;
            else
                cout << v[1].first+1 << " " << n << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "1" << endl;
            if(s1[0] == '1')
                cout << v[0].first+1 <<" " << v[0].second <<endl;
            else
                cout << v[1].first+1 << " " << n << endl;
        }
        return;
    }
    else
    {
        // partion 1

        if(s1 == s2 && s1[0] == '0')
        {
            cout << "YES" << endl;
            cout << "0" << endl;
            return;
        }
        else if((n == 1 && s1[0] == '1') && s1==s2)
        {
            cout << "NO" << endl;
            return;
        }
        else if(s1 == s2)
        {
            cout << "YES" << endl;
            cout << "2" << endl;
            cout << "1 1" << endl;
            cout << "2 " << n << endl;
        }
        else if(isSame(s1,s2) == -1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            // This is for reverse
            if(n == 1)
            {
                if(s1[0] == '0')
                {
                    cout << "N0" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                    cout << "1" << endl;
                    cout << "1 1" << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
                cout << "3" << endl;
                cout << "1 1" << endl;
                cout << "1 " << n << endl;
                cout << "1 1" << endl;
            }
            return ;
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
/*
100
3
010
101
2
11
10
4
1000
0011
2
10
10
3
111
111
2
01
10
3
000
000
3
000
111
3
111
000
1
1
1
*/

