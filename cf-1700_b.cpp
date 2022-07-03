// verdict: Accepted
#include<bits/stdc++.h>
using namespace std;

vector<int> vans;
void system2(string s, int n)
{
    for(int i = 0; i<n ; i++)
    {
        int x = '9'-s[i];
        vans.push_back(x);
    }
}
void system1(string s, int n){
    vector<int> ass;
    for(int i =0; i<=n; i++)
        ass.push_back(1);

    for(int i = n-1; i>= 0; i--)
    {
        int a,b,c;
        a = ass[i+1];
        b = s[i]-'0';
        if(a>=b)
        {
            vans.push_back(a-b);
        }
        else{
            a+=10;
            ass[i]-= 1;
            vans.push_back(a-b);
        }
    }
    reverse(vans.begin(), vans.end());
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vans.clear();
        int n, a, b, c;
        string s;


        cin >> n;
        cin >> s;
        if(s[0] == '9')
            system1(s,n);
        else
            system2(s,n);
        for(int i = 0; i<n ; i++)
            cout<<vans[i];
        cout <<endl;
    }
}

/*if(s[0] == '9')
            system1(s,n);
        else
2
2
99
3
909         */
