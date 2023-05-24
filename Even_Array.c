#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int i,a[s],c=0;
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        if(a[i]%2==0||a[i]==0)
        {
            c++;
        }
    }
    if(c==s)
    {
        printf("True");
    }
    else
    printf("False");
}