// verdict: Acepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        map<int, pair<int,int>> position;
        int n, k, a,b;
        cin >> n >> k;
        for(int i = 1; i<=n; i++)
        {
            cin >> a;
            if(position[a].first == 0)
            {
                position[a].first = i;
                position[a].second = i;
            }
            else
            {
                position[a].second = i;
            }

        }
        for(int i = 0; i<k; i++)
        {
            cin >> a >> b;
            if((position[a].first == 0) || (position[b].second == 0))
            {
                cout << "NO" << endl;
                continue;
            }
            else{
                if(position[a].first <= position[b].second)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }

        }
    }


}
