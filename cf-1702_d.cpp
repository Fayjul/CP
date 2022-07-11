/*
Need to check this test case


1
codeforces
1

verdict: don't submitted

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while(t--)
    {
        string w;
        int numberOfChrecter[30];
        for(int i = 0; i<30; i++)
            numberOfChrecter[i]=0;
        long long int p, a,b,c, total = 0, needToDecress;
        vector<char> ans;

        cin >> w >> p;
        for(int i = 0; i<w.length(); i++)
        {
            numberOfChrecter[w[i] - 'a' +1 ] ++;
            total += (w[i] - 'a' +1);
        }
        cout << p << " p -> total" << total << endl;
        if(p >= total)
        {
            cout << " I am here" << endl;
            cout << w << endl;
            continue;
        }
        needToDecress = p-total;


        for(int i =26; i<=1; i--)
        {
            if(numberOfChrecter[i] == 0)
                continue;
            a = needToDecress/i;
            if(numberOfChrecter[i]<a)
            {
                b = a- numberOfChrecter[i];
                needToDecress -= (numberOfChrecter[i]*b);
                numberOfChrecter[i] = 0;
            }
            else{
                numberOfChrecter[i] -= a;
                needToDecress = 0;
                break;
            }
        }
        for(int i =0 ; i < w.length(); i++)
        {
            if(numberOfChrecter[w[i] - 'a' +1] > 0)
            {
                ans.push_back(w[i]);
                numberOfChrecter[w[i] - 'a' +1]--;
            }
        }
        for(int i = 0;i<ans.size(); i++)
            cout << ans[i];
        cout << endl;
    }

}
/*
test case
50
abcdefghijklmnopqrstuvwxzaz
900
abcdefghijklmnopqrstuvwxzaz
9
abc
6


5
abca
2
abca
6
codeforces
1
codeforces
10
codeforces
100
*/
