#include<bits/stdc++.h>
using namespace std;
vector<int> ve;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		int k = 0,wen=0;
		cin>>a;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='(') k++;
			if(a[i]==')') k--;
			if(a[i]=='?') wen++;
			if(k+wen==1)
				k = 1, wen = 0;
		}
		printf("There is k = %d and wen = %d \n", k, wen);
		if((abs(k))==wen)	cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}


/*

?((?(???
((()()))


?)?(??
()(())

*/
