#include<stdio.h>
int main()
{
	int size,i,sum=0,sum1=0;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(i%2!=0)
		{
		sum1=sum1+a[i];
		}
	}
	printf("%d",sum1);
}
