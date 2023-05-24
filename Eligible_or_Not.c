#include<stdio.h>
int main()
{
    int t,i,x,y,a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&a);
        if(a>=x&&a<y)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}