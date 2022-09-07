#include<bits/stdc++.h>
using namespace std;
string text, myList, cypher;

int IsInList(char x)
{
    //cout << x << endl;
    // cout << myList.length() << endl;
    for(int i = 0; i<myList.length(); i++)
    {
        //  cout << myList[i] << x << endl;
        if(myList[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    map < char, int > frequency;
    map < char, int > :: iterator it;
    //string text, myList, cypher;
    myList = "!@#$%^&*()";
    text = "&@%*@()!^#*#%#%^*#((!^#()!&#^!)#&)%$$$%@*^$%";
    cypher = text;
    //cout << "hello"

    for (int i = 0 ; i<text.length(); i++)
    {
        int a = IsInList(text[i]);
        int b = (a+5)%10;
        if(a > -1)
            cypher[i] = myList[b];
    }
    for(int i = 0;i<cypher.length(); i++)
    {
        char x = cypher[i];
        frequency[x]++;
    }
    for(it = frequency.begin; it != frequency.end(); it++)
    {
        cout << *it.first << endl;
    }
}
