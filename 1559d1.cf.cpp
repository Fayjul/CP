#include<bits/stdc++.h>
using namespace std;
int n,m1,m2,f[500500],ff[500500],x,y,o;
pair <int,int> z[505000];
int find(int x)
{
	if(f[x]==0) return x;
	return f[x]=find(f[x]);
}
int ffind(int x)
{
	if(ff[x]==0) return x;
	return ff[x]=ffind(ff[x]);
}
int main()
{
	cin>>n>>m1>>m2;
	for(int i=1;i<=m1;i++)
	{
		scanf("%d%d",&x,&y);
		f[find(x)]=find(y);
	}
	for(int i=1;i<=m2;i++)
	{
		scanf("%d%d",&x,&y);
		ff[ffind(x)]=ffind(y);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		if(find(i)!=find(j)&&ffind(i)!=ffind(j))
		{
			z[++o]=make_pair(i,j);
			f[find(i)]=find(j);
			ff[ffind(i)]=ffind(j);
		}

	}
	cout<<o<<endl;
	for(int i=1;i<=o;i++)
	{
		printf("%d %d\n",z[i].first,z[i].second);
	}
}
