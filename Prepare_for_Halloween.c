#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a*2>b*5)
        printf("Chocolate
");
        else if(a*2==b*5)
        printf("Either
");
        else
        printf("Candy
");
    }
}