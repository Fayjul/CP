#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, ans = 0, a;
    vector<int> v;

    cin >> n >> x;

    for(int i =  0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i<n; i++)
    {

        for(int j = i+1; j<n; j++)
        {
            if(v[i] == v[j])
                continue;
            a = v[i]^v[j];
            if(a == x  )
            {
                //cout << v[i] << v[j] << endl;
                ans++;

                //cout << v[i] << v[j] << endl;
                //break;

            }
        }

    }
    cout << ans << endl;

}
