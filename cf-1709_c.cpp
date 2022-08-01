/*
verdict:Accepted
date_start:28-7-22
time:10:00 am
accepted_time:29-7-22
time: 6:15am
Massege: Try to think simple

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int question_mark = 0, length_s =s.length(), bracket=0;

    for(int i = 0; i<length_s; i++)
    {
        if(s[i] == '(')
            bracket++;
        if(s[i] == ')')
            bracket--;
        if(s[i] == '?')
            question_mark++;
        if(question_mark+bracket == 1)
        {
            bracket = 1;
            question_mark = 0;
        }
    }


    //cout << bracket << " bracket question " << question_mark << " different" << length_s << endl;
    if(abs(bracket) == question_mark)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
/*
(?))
??????
()
??
?(?)()?)


?((?(???
((()()))


?)?(??
()(())

*/
