#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //cout << "Allahu Akbar" << endl;
    int a, b,c;
    vector < string> vs;
    string s;

    for(int i= 0; i<8; i++)
    {
        cin >> s;
        vs.push_back(s);
    }
    for(int i=0; i<8; i++)
    {

        for(int j = 0; j<8;j++)
        {
            if(vs[i][j] != 'R')
                break;
            if(j == 7)
            {
                cout << "R" << endl;
                return;
            }
        }
    }
    for(int i=0; i<8; i++)
    {

        for(int j = 0; j<8;j++)
        {
            if(vs[j][i] != 'B')
                break;
            if(j == 7)
            {
                cout << "B" << endl;
                return;
            }
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

