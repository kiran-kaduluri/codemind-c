#include <stdio.h>
int main ()
{
   int n,cnt,fact,rem,sum=0,tmp;
  scanf("%d",&n);
  for(tmp=n;n>0;n=n/10)
  {
    fact=1;
    rem=n%10;
    for(cnt=1;cnt<=rem;cnt++)
   {
   fact=fact*cnt;
   }
   sum=sum+fact;
}
  if(sum==tmp)
{
printf ("The number %d is a strong number", tmp);
}
else
{
printf ("The number %d is not a strong number ", tmp);
}
return 0;
}