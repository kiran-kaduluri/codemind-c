#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int i,a[s],sum=0,flag=0,b;
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    b=sum/s;
    for(i=0;i<s;i++)
    {
        if(b==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}