#include<stdio.h>
int main()
{
	int s,n,sum=0;
	scanf("%d",&s);
	int a[s],i;
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	for(i=0;i<s;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				if(j*j==a[i])
				{
					sum=sum+a[i];
				}
			}
		}
	}
	printf("%d",sum);
}