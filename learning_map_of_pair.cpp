#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, pair<int,int>> pos;
    pos[5] = {1,2};

    cout << pos[5].first << " " << pos[5].second << endl;
    cout << pos[0].first << endl;
    /*
    if(pos[5])
    {
        cout << "I am here" << endl;
    }
    if(pos[0])
    {
        cout << "I am not here" << endl;
    }
    */

}
