#include<stdio.h>
int main()
{
    int a,b,rem,sum=0,c,rem1,sum1=0;
    scanf("%d",&a);
    b=a*a;
    while(a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    c=sum*sum;
    while(c!=0)
    {
        rem1=c%10;
        sum1=sum1*10+rem1;
        c=c/10;
    }
    if(b==sum1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}