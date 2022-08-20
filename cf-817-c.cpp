#include<bits/stdc++.h>
using namespace std;
long long n,s,c,d,e,f;
long long int difference(long long int number)
{
    long long int ans = 0;
    long long int a = number;
    while(a>0)
    {
        ans+= (a%10);
        a/=10;
    }
    return number-ans;
}
int main()
{
    cin >> n >> s;
    d = s+1;

    while(1)
    {



        if(difference(d) >= s)
            break;
        if(d>n)
            break;
        d++;
    }
    e=0;
    cout << max(e,n-d+1) << endl;


}
// 10000 1000
