/*
verdict:
date_start:
time:
accepted_time:
Massege:

*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int question_mark = 0, length_s =s.length(), left=0, right=0;

    for(int i = 0; i<length_s; i++)
    {
        if(s[i] == '?')
            question_mark++;
        else if(s[i] == '(')
            left++;
        else
            right++;
    }

    if(s[0] == '?')
    {
        question_mark--;
        left++;
    }
    if(s[length_s-1] == '?')
    {
        question_mark--;
        right++;
    }
    int different = abs(left-right);
    int availeable = length_s -left-right;
    //cout << left << " left right " << right << " different" << different << endl;
    if(different == question_mark || availeable == 2)
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

?((?(???
((()()))


?)?(??
()(())

*/
