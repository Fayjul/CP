#include <bits/stdc++.h>
using namespace std;
string I,O;
void Req()
{
    if(cin>>I)
    {
        O+=I;
        if(I=="pair")
        {
            O+="<";
            Req();
            O+=",";
            Req();
            O+=">";
        }
    }
    else
    {
        cout<<"Error occurred";
        exit(0);
    }
}
int main()
{
    cin>>I;
    Req();
    if(cin>>I)return cout<<"Error occurred",0;
    cout<<O;
    return 0;
}
