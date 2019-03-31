#include<stdio.h>
int mini(int x,int y)
{
	if(x<y) return x;
	else return y;
}
int maxi(int x,int y)
{
	if(x>y) return x;
	else return y;
}
int main()
{
	int n,m,x,p1=-1,p2=-1;int a[100],b[100],a1[100]={0},b1[100]={0},max;
	scanf("%d %d %d",&n,&m,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0) a1[i]=a[i];
		else a1[i]=a1[i-1]+a[i];
		if(a1[i]<=x) p1++;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		if(i==0) b1[i]=b[i];
		else b1[i]=b1[i-1]+b[i];
		if(b1[i]<=x) p2++;
	}
	int i1,i2;
	max=maxi(p1,p2)+1;
	for(i1=p1;i1>=0;i1--)
	{
		for(i2=p2;i2>=0;i2--)
		{
			if(a1[i1]+b1[i2]<=x)
			{
				if(max<(i1+i2+2))
				{
					max=i1+i2+2;
				}
				break;
			}
		}
	}
	for(i2=p2;i2>=0;i2--)
	{
		for(i1=p1;i1>=0;i1--)
		{
			if(a1[i1]+b1[i2]<=x)
			{
				if(max<(i1+i2+2))
				{
					max=i1+i2+2;
				}
				break;
			}
		}
	}
	printf("%d",max);
}