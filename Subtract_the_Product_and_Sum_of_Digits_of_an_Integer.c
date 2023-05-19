#include<stdio.h>
int main()
{
	int n,rev,sum=0,mul=1;
	scanf("%d",&n);
	while(n!=0)
	{
		rev=n%10;
		sum=sum+rev;
		mul=mul*rev;
		n=n/10;
	}
	printf("%d",mul-sum);
}