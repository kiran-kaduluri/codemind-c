#include<stdio.h>
int main()
{
    int i;
    for(i=1;i;i++)
    {
        signed int a;
        scanf("%d",&a);
        if(a==-1)
        break;
        else
        printf("%d
",a*a);
    }
}