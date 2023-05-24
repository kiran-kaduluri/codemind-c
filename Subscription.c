#include<stdio.h>
int main()
{
    int t,i,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        if(a<=30)
        printf("NO
");
        else
        printf("YES
");
    }
}