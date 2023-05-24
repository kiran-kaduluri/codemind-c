#include<stdio.h>
int main()
{
	int size,i,sum=0;
	float avg;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/(size*1.0);
	printf("%.2f",avg);
}