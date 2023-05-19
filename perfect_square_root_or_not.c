#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);//16 =4*4
    for(i=1;i<=n;i++)
    {
       if(i*i==n)
       {
           temp=i;
       }
       
    }
    if(temp*temp==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}