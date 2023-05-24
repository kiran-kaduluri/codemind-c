#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        a=a*5;
        b=b*7;
        printf("%d
",a+b);
    }
}