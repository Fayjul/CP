#include<stdio.h>
const int N=100010;
int n,m1,m2,x,y,t1,t2,f1[N],f2[N],a1[N],a2[N];
int fa1(int x) { return f1[x]==x?x:(f1[x]=fa1(f1[x])); }
int fa2(int x) { return f2[x]==x?x:(f2[x]=fa2(f2[x])); }
int main() {
	scanf("%d%d%d",&n,&m1,&m2);
	printf("%d\n",n-1-(m1>m2?m1:m2));
	for (int i=1; i<=n; ++i) f1[i]=f2[i]=i;
	while (m1--)
		scanf("%d%d",&x,&y),x=fa1(x),y=fa1(y),
		x<y?f1[y]=x:f1[x]=y;
	while (m2--)
		scanf("%d%d",&x,&y),x=fa2(x),y=fa2(y),
		x<y?f2[y]=x:f2[x]=y;
	for (int i=2; i<=n; ++i)
		if ((t1=fa1(i))!=1&&(t2=fa2(i))!=1)
			printf("1 %d\n",i),f1[t1]=f2[t2]=1;
	for (int i=2; i<=n; ++i)
		if ((t1=fa1(i))!=1) a1[++m1]=i,f1[t1]=1;
		else if ((t2=fa2(i))!=1) a2[++m2]=i,f2[t2]=1;
	for (int i=0,m=(m1<m2?m1:m2); i<=m; ++i)
		printf("%d %d\n",a1[i],a2[i]);
	return 0;
}
