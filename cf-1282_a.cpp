#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int a, b, c, r,r1, r2, temp;
        cin >> a >> b >> c >> r;
        long long int ans = abs(a-b)+1;
        temp = max(a,b);
        b = min(a,b);
        a = temp;
        r1 = c-r;
        r2 = c+r;
        if(r1 <= b && r2>=a)
            ans = 0;
        else if(r1 >= b && r2<=a)
            ans = a-b-2*r;
        else if(r2 <= b)
            ans = a-b;
        else if(r1 >= a)
            ans = a-b;
        else if(r1 <= b && r2 <= a && r2 >= b)
            ans = a-r2;
        else
            ans = r1-b;
        cout << ans << endl;

    }
}

/*

20
1 10 7 1
3 3 3 0
8 2 10 4
8 2 10 100
-10 20 -17 2
-3 2 2 0
-3 1 2 0
2 3 2 3
-1 3 -2 2
-2 2 -3 1

*/
