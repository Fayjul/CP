
/*
verdict:
date_start:
time:
accepted_time:
massege:

*/
#include<bits/stdc++.h>
using namespace std;

vector<string> v;
vector< pair<int,int> > vp;
int  flag = 1, n, m;

int cheek(int x, int y)
{



}
void generate_pair(int x, int y)
{
    vp.push_back(make_pair(x,y));
    if(y+1 < m && v[x][y+1] == '*')
        vp.push_back(make_pair(x,y+1));
    if(x+1 < n)
    {
        if(v[x+1][y] == '*')
        {
            vp.push_back(make_pair(x+1,y));
            if(y-1 >= 0 && v[x+1][y-1] == '*')
                vp.push_back(make_pair(x+1,y-1));


        }
    }
    if(( x+1 < n && v[x+1][y] == '*') || (y+1 < m && v[x][y+1] == '*'))
    {
        if(v[x+1][y+1] == '*')
            vp.push_back(make_pair(x+1,y+1));
    }
}
void solve()
{
    //cout << "Allahu Akbar" << endl;
    //int n,m;
    string s;


    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m ; j++ )
        {
            if(v[i][j] == '*')
            {
                generate_pair(i,j);
                cout << vp.size() << endl;
                vp.clear();
            }
        }
    }
    v.clear();
    vp.clear();
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
