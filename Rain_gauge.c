#include<stdio.h>
int main()
{
    int t,i,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        if(a>=1&&a<3)
        {
            printf("LIGHT
");
        }
        else if(a>=3&&a<7)
        {
            printf("MODERATE
");
        }
        else if(a>=7)
        {
            printf("HEAVY
");
        }
    }
}