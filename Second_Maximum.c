#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[50], i,t;
	int first, second;
	scanf("%d",&t);
	for(int y=0;y<t;y++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &arr[i]);
    	}
		first = second = INT_MIN;
		for (i = 0; i < 3; i++)
		{
			if(arr[i] > first)
			{
				second = first;
				first = arr[i];
			}
			else if(arr[i] > second && arr[i] < first)
			{
				second = arr[i];
			}		
		}
		printf("%d
", second);
	}
}