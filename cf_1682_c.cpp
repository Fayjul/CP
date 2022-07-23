/* verdict: Accepted
Map and map iterator is used in this problem

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<int,int> element;
         map<int, int>::iterator it;
        int n, a,b,c=0,ans=0;

        cin >> n;
        for(int i = 0; i<n ; i++)
        {
            cin >> a;
            element[a]++;
        }
        for(it = element.begin(); it != element.end(); it++)
        {
            //cout << it->first << " " << it->second << endl;
            if(it->second >= 2)
                ans++;
            else
                c++;
        }
        ans += (c+1)/2;
        cout << ans << endl;
    }

}
