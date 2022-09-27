#include<bits/stdc++.h>
using namespace std;

int root1[100500], root2[100500];

int findR1(int x)
{
    if(root1[x] == 0)
        return x;
    return root1[x] = findR1(root1[x]);

}

int findR2(int x)
{
    if(root2[x] == 0)
        return x;

    return root2[x] = findR2(root2[x]);
}

void solve()
{
    //cout << "Allahu Akbar" << endl;

    int n, m1, m2, x, y, ans_n=0;

    cin >> n >> m1 >> m2;
    pair<int,int> ans[n+10];
    for(int i = 0; i<m1; i++)
    {
        cin >> x >> y;
        root1[findR1(x)] = findR1(y);

    }
    for(int i = 0; i<m2; i++)
    {
        cin >> x >> y;
        root2[findR2(x)] = findR2(y);
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = i+1; j<=n; j++)
        {
            if(findR1(i)!= findR1(j) && findR2(i)!= findR2(j))
            {
                ans[++ans_n] = make_pair(i,j);
                root1[findR1(i)] = findR1(j);
                root2[findR2(i)] = findR2(j);
            }
        }
    }
    cout << ans_n << endl;
    for(int i = 1; i<= ans_n ; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }

}

int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}

