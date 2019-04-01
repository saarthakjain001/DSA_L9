#include<stdio.h>
int main()
{
	int k,w,n;int p[100],c[100],visit[100];int curr,count=0,prof=0;
	scanf("%d %d %d",&k,&w,&n);
	for(int i=0;i<n;i++)
	{
		visit[i]=0;
		scanf("%d",&p[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	curr=w;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p[i]<p[j])
			{
				int t1,t2;
				t1=p[i];
				t2=c[i];
				p[i]=p[j];
				c[i]=c[j];
				p[j]=t1;
				c[j]=t2;
			}
		}
	}
	int b=0;
	while(count!=k && b==0)
	{
		int y=0;
		for(int i=0;i<n;i++)
		{
			if(c[i]<=curr && visit[i]==0)
			{
				y=1;
				visit[i]=1;
				prof+=p[i];
				curr=curr+p[i];
				count++;
				break;
			}
		}
		if(y==0) b=1;
	}
	printf("%d",prof);
}