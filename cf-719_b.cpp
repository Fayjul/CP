#include<iostream>
using namespace std;
int n,b[2][2];
char c;
int main()
{
    cin>>n;
    for(int i=0; i<n; ++i)cin>>c,++b[i%2][c=='r'];
    cout<<min(max(b[0][0],b[1][1]),max(b[0][1],b[1][0]))<<'\n';
}
