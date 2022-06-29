// verdict: Acepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long int a, b, c, total, half;
        cin >> a >> b >> c;
        total = a+2*b+3*c;
        half = total/2;
        if(total-half == half)
            cout << "0" << endl;
        else
            cout << "1" << endl;

    }
    return 0;
}
