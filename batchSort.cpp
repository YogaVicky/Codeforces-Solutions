#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int a[100][100],n,m;
int judge()
{
	int i,j,flag=0;
	for(i=1;i<=n;i++)
	{
		int count=0;
		for(j=1;j<=m;j++)
		{
			if(a[i][j]!=j)
			   count++;
		}
		if(count>2)
		    flag=1;
	}
	if(flag==0)
	    return 1;
	else 
	    return 0;
}
int main()
{
	int i,j,k;
	 scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		if(m==1)
		{
			printf("Yes\n");
			return 0;
		}
		if(judge())
		{
			printf("Yes\n");
			return 0;
		}
		for(i=1;i<=m;i++)
		{
			for(j=i+1;j<=m;j++)
			{
				for(k=1;k<=n;k++)
				{
					swap(a[k][i],a[k][j]);
				}
				if(judge())
				{
					printf("Yes\n");
					return 0;
				}
				for(k=1;k<=n;k++)
				{
					swap(a[k][i],a[k][j]);
				}
			}
		}
	printf("No\n");
	return 0;
}