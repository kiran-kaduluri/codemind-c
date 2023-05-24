#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int a[s],i,sum=0,avg,c=0;
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/s;
    for(i=0;i<s;i++)
    {
        if(avg<=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}