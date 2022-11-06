#include<bits/stdc++.h>
using namespace std;
vector<long long int> afec, bfec;

void findafec(long long int a)
{
    for(int i = 1; i<= sqrt(a); i++)
    {
        if(a%i ==  0)
        {
            afec.push_back(i);
            a /= i;
        }
    }
}
void findbfec(long long int a)
{
    for(int i = 1; i<= sqrt(a); i++)
    {
        if(a%i ==  0)
        {
            bfec.push_back(i);
            a /= i;
        }
    }
}

void solve()
{
    //cout << "Allahu Akbar" << endl;
    long long int a, b, c,d;

    cin >> a >> b >> c >> d;

    findafec(a);
    findbfec(b);
    for(int i = 0; i<afec.size(); i++)
        cout << afec[i] << " ";
    cout << endl;
    for(int i=0; i<bfec.size(); i++)
    {
        cout << bfec[i] << " ";
    }
    cout << endl;
    cout << "-1 -1" << endl;

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

